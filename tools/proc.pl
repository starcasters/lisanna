#!perl
#example template:
#======== output =========
#[%  name %]
#[%  fullname %]
#
#[% FOREACH method = methods %]
#{ [%	method.name  %] [%	method.request  %] [%	method.response  %] }
#[%	END %]

use Template;

#!/usr/bin/perl
	
####################
#
# FILE: params01.pl
#
####################
	
#use strict; # Declare strict checking on variable names, etc.
	
my $argc;   # Declare variable $argc. This represents
            # the number of commandline parameters entered.
	
$argc = @ARGV; # Save the number of commandline parameters.
if ($argc<3)
{
  # The number of commandline parameters is 0,
  # so print an Usage message.
  #
	print "yo there, just wanted to say hi!
...
oh, that and u need 3 params:
	input_file output_path templatefile";
  exit();   # When usage() has completed execution,
            # exit the program.
}
	
#, $ARGV[1], 
$INPUTFILE = $ARGV[0];
$pb_h_filename = $INPUTFILE; $pb_h_filename =~ s/\.proto/.pb.h/;
my $template_file = $ARGV[2];
my $includepath = './';
if ($argc == 4) {
	$filetype = $ARGV[3];
} else {
	$filetype = ".out";
}

my $config = {
    INCLUDE_PATH => $includepath,  # or list ref
    INTERPOLATE  => 1,               # expand "$var" in plain text
    POST_CHOMP   => 0,               # cleanup whitespace 
    EVAL_PERL    => 1,               # evaluate Perl code blocks
	RELATIVE     => 1,
};

# create Template object
my $template = Template->new($config);


	
my @methods = ();
my %service = ();
			
$abool = 0;
my $package = "";
my $service = "";
my @methods = ();
my $id = 0;
my $responsename = "";


open(INPUTFILE) or die("Could not open file ".$INPUTFILE.".");
my $line = "";
foreach $line (<INPUTFILE>) {
		#print $line;

        if ($line =~ m/package *(.*) *?;/){
            $package = $1;
            print "package ".$1."\n";
        }

        if ($line =~ m/( *)service( *)(.*)( *){/){
            $service = $3;
			$service =~ s/ //; #remove spaces
            print "service $service\n";
			@methods = ();
            $abool = 1;
			$id = 1;
        }
        if ($abool){
		   if ($line =~ m/rpc (.*)\((.*)\) returns \((.*)\).*;/) {
			$response = $3;
		    $request = $2;
		    $methodname = $1;
			while ($methodname =~ s/\./::/) {}; #replace all, surelly there is a better way to do it
			
		    $requests = $request;
			while ($requests =~ s/\./::/) {};#replace all, surelly there is a better way to do it
			
		    $responses = $response; 
			while ($responses =~ s/\./::/) {}; #replace all, surelly there is a better way to do it
			
		    $requestname = $request; $requestname =~ s/(.*)?\.//;
		    $responsename = $response; $responsename =~ s/(.*)?\.//;
			
			push(@methods,{
							id=>$id,
							name=>$methodname,
						    request=>$request,
						    requests=>$requests,
							response=>$response,
							responses=>$responses,
							requestname=>$requestname,
							responsename=>$responsename,							
			});
			$id += 1;
			#print "method ".$methodname." ".$request." > ".$response."\n";
		   }
        }
        if ($line =~ m/}/){
		  if ($abool) {
			print "casting create:".$line."\n";

			%service = (
				name => $service,
				fullname => $package.".".$service,
				methods => \@methods,
				pb_h_filename => $pb_h_filename
					);
			
			$outname = $ARGV[1]."/".$service.$filetype;
			
			print $outname."\n";
			system("rm ".$outname);
			print "past\n";
			open (AOUTFILE, ">$outname") or die("Could not open file.");
            $output = ""; 		
			$template->process($template_file, \%service, \$output)
				|| die $template->error();
			print AOUTFILE $output;
			close(AOUTFILE);
		  }
          $abool = 0;
        }
}
close(INPUTFILE);

exit(0);
