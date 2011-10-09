#!/usr/bin/perl
	#example template:
	#======== output =========
	#[%  name %]
	#[%  fullname %]
	#
	#[% FOREACH method = methods %]
	#{ [%	method.name  %] [%	method.request  %] [%	method.response  %] }
	#[%	END %]
	
	use Template;
	use Data::Dumper;
	use feature 'say';
	
	#use strict; # Declare strict checking on variable names, etc.
	
	print "hi\r";
	
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
	@structs = ();
	
	
	open(INPUTFILE) or die("Could not open file ".$INPUTFILE.".");
	my $line = "";
	foreach $line (<INPUTFILE>) {
		#print $line;
		
		$line =~ s/\r//; #remove windows endline
        if ($line =~ m/^( *)STRUCT( *)(.*)( *)$/){
			$service = $3;
			$service =~ s/ //; #remove spaces
            #print "service $service\n";
			@methods = ();
            $abool = 1;
			$id = 0;
		}
        if ($abool){
			if ($line =~ m/^\tFIELD (.*?)(, )(.*)$/) {
				$params = $3;
				$methodname = $1;
				#print "$methodname ($params) \r\n";
					#while ($methodname =~ s/\./::/) {}; #replace all, surelly there is a better way to do it
				#$requestname = $request; $requestname =~ s/(.*)?\.//;
				
				if ($methodname !~ m/DT_(.*)/) {
					#print("doesnt match DT_\r\n");
				}
				@aparam = split(", ",$params);
				$aparam[0] =~ s/\./_/;
				$aparam[0] =~ s/\[/_/;
				$aparam[0] =~ s/\]/_/;
				$aparam[0] =~ s/ /_/;
				
				push(@methods,{
					id=>$id,
					type=>$methodname,
					name=>$aparam[0],
					bitscount=>$aparam[4],
					bitscount2=>$aparam[5],
					offset=>$aparam[1],
					min=>$aparam[2],
					max=>$aparam[3],
					flags=>$aparam[6],
					opt_type=>$aparam[8],
					count=>$aparam[7]
					
				});
				$id += 1;
				#print "method ".$methodname." ".$request." > ".$response."\n";
			}
		}
        if ($line =~ m/ENDSTRUCT/){
			if ($abool) {
				push(@structs, {
					name => $service,
					fieldscount => (scalar(@methods)+1),
					methods => [@methods],
				});
			}
			$abool = 0;
		}
	}
	
	close(INPUTFILE);
	
	@currentpackage = ();
	$currpackagename = "default";
	@packages = ();
	$INPUTFILE = "./packages.txt";
	open(INPUTFILE) or die("Could not open file ".$INPUTFILE.".");
	my $line = "";
	foreach $line (<INPUTFILE>) {
		$line =~ s/\r//;
		$line =~ s/\n//;
		if ($line =~ m/^#(.*)/) {
			$a = $1;
			if ($a =~ m/^PACKAGE (.*)/) {
				if (scalar(@currentpackage) != 0) {
					push(@packages, {name=>$currpackagename, content => [@currentpackage], });
					print $currpackagename." ".scalar(@currentpackage)."\n";
				}
				@currentpackage = ();
				$currpackagename = $1;
			}
			} else {
			push(@currentpackage, $line);
		}
	}
	if (scalar(@currentpackage) != 0) {
		push(@packages, {name=>$currpackagename, content=>[@currentpackage]});
		print $currpackagename." ".scalar(@currentpackage)."\n";
	}
	close(INPUTFILE);
	#print @packages[1]->{'content'};
	#say Dumper(@packages[1]->{'content'});
	
	for($i = 0; $i < scalar(@packages); $i++) {
		$currpackage = @packages[$i];
		
		$outname = $ARGV[1]."/".$currpackage->{name}.$filetype;
		
		print $outname."\n";
		system("rm \"".$outname."\"");
		
		open (AOUTFILE, ">$outname") or die("Could not open file.");
		
		$array = $currpackage->{content};
		print $currpackage->{'name'}." ".$currpackage->{'content'}." ".scalar(@$array)."\r\n";
		$lastname = "";
		for($j = 0; $j < scalar(@$array); $j++) {
				for($k = 0; $k < scalar(@structs); $k++) {
					$name = @structs[$k]->{name};
					if (@$array[$j] eq $name) {
						$output = "";
						print @$array[$j]."\r\n";
						$astruct = @structs[$k];
						$astruct->{'pkgname'} = $currpackage->{'name'};
						$astruct->{'header'} = "no";
						$astruct->{'footer'} = "no";
						if ($j == 0) {
							$astruct->{'header'} = "yes";
						}
						if ($j == scalar(@$array) - 1) {
							$astruct->{'footer'} = "yes";
						}
						$template->process($template_file, $astruct, \$output) || die $template->error();
						print AOUTFILE $output;
						$lastname = @$array[$j];
					}
				}
		}
		close(AOUTFILE);
	}
	exit(0);
	UFOO: {
		while (scalar(@structs) != 0) {
			#print ">>> ". pop(@structs) ."\r\n";
			
			$astruct = pop(@structs);
			#say Dumper($astruct);
			print $astruct->{name} . "\r\n";
			$outname = $ARGV[1]."/".$astruct->{name}.$filetype;
			
			print $outname."\n";
			system("rm \"".$outname."\"");
			
			open (AOUTFILE, ">$outname") or die("Could not open file.");
			
			$output = ""; 		
			$template->process($template_file, $astruct, \$output)
			|| die $template->error();
			print AOUTFILE $output;
			print $output;
			close(AOUTFILE);
			last UFOO;
		}
	}
	
	exit(0);
