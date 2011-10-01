#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <cstring>

#include "gui_base.h"
#include "protow.h"

//#define EASYINJECTION
#define TEXTFILE_OUTPUT
	
	
int __stdcall check_ignore_msg(unsigned int msg);
extern "C" void __stdcall lol_OutputDebugString(unsigned int msg);


int tlsIndex;

HANDLE hDll_;

//unsigned int D3__std__String = 0x3CE4A528;
unsigned int func1_hook = 0x00D4E8E9;
unsigned int func1_return = 0x00D4E8FB;
char* avtable = NULL;
int vtablepos = 0;
unsigned int func3_hook = 0x009A9298;
unsigned int func3_return = 0x009A92A6;
unsigned int func4_hook = 0x008BEB73;
unsigned int func4_return = 0x008BEB80;
unsigned int func5_hook = 0x0088AE6A;
unsigned int func5_return = 0x0088AE79;
unsigned int get_next_member = 0x00D4E7B0;
unsigned int plol_OutputDebugString = 0;

#define REBASE(lib, var, addr, oldbase) var = lib + addr - oldbase;

void RebaseFunctions()
{
	//unsigned int bnetlib = (unsigned int) GetModuleHandle("bnet/battle.net.dll");
	//REBASE(bnetlib, D3__std__String, 0x3CE4A528, 0x3C910000)
	//REBASE(bnetlib, func1, 0x0088AF0A, 0) exe based.
	//REBASE(bnetlib, func1_return, 0x0088AF0F, 0) exe based.
}

struct msvc9__std__string {
	int unkno0;
	int unkno4;
	int unkno8;
	int unknoc;
	int unkno10;
	int unkno14;
	int unkno18;
	int unkno1c;
};

extern "C" char* msvc9__std__string_to_char(unsigned int astr) 
{
	if (*(int *)(astr + 0x18) > 0x0f) {
		return *(char **)(astr + 4);
	} else {
		return (char *)(astr + 4);
	
	}
}

//	no gui: 0080D7F9 jmp 80D818
/*
	blizz log:
				push    offset aInitializingGr ; "Initializing graphics subsystem...\n"
                 xor     ebx, ebx
                 push    ebx
                 push    3
                 push    1
                 call    sub_D3E0C0
*/

void __stdcall L_DebugString(char * stringptr) 
{
    #ifdef TEXTFILE_OUTPUT
	FILE *file;	
	file = fopen("dbgoutput.txt","a+");       
    fprintf(file, "%s\n", stringptr);  
    fclose(file); 
	#endif
	
	OutputDebugString(stringptr);
}

char* __stdcall getcharptr(unsigned int msg) {
	return (char*)(*(unsigned int*)msg + 12);
}

void __stdcall lol_OutputDebugString(unsigned int msg) 
{
	char* stringptr = (char*)(*(unsigned int*)msg + 12);
	L_DebugString(stringptr);
}

void __stdcall func1_nat(int parm) {
	
	char achar[500];
	snprintf(achar, 500, "%s", parm);
    #ifdef TEXTFILE_OUTPUT
	FILE *file;	
	file = fopen("dbgoutput.txt","a+");       
    fprintf(file, "%s\n\r",achar);  
    fclose(file); 
	#endif
	
	OutputDebugString(achar);
		
}

void func1()
{

	asm("pop 	%ebp");
	asm("lea     -0x108(%ebp), %ecx");
	asm("pusha");
	asm("push %ecx");
	asm("mov %0, %%eax" : : "i"(func1_nat));
	asm("call *%eax");
	asm("popa");
	asm("mov     %ecx, -0x118(%ebp)");
	asm("mov     -0x118(%ebp), %edx");
	asm("add     $1, %edx");
    
	asm("push     %0" : : "m"(func1_return));
	asm("ret");
}

void func3()
{
    asm("pop    %ebp");
    asm("push    %edx");
    asm("lea     -0xb4(%ebp), %edx");
    asm("push    %edx");
    asm("lea     -0x24(%ebp), %edx");
    asm("push    %edx");
    asm("call    *%eax");
	asm("pusha");
	asm("popa");
	
	asm("push     %0" : : "m"(func3_return));
	asm("ret");
}

#pragma pack(push)
#pragma pack(1)
struct generic_message {
	void* vtable;
	char* name;
};
struct generic_field {
	void* unkptr1; //+0
	void* typeptr; //+4
	int deserialized_pos; //+8
	void* unkptr4; //+0c
	void* unkptr5; //+10
	void* unkptr6; //+14
	void* unkptr7; //+18
	void* unkptr8;	//+1c
	void* unkptr9;  //+20
	void* unkptr10;	//+24
};

struct int_field {
	void* unkptr1; //+0
	void* typeptr; //+4
	int deserialized_pos; //+8
	void* unkptr4; //+0c
	void* unkptr5; //+10
	void* unkptr6; //+14
	void* unkptr7; //+18
	void* unkptr8;	//+1c
	void* unkptr9;  //+20
	void* unkptr10;	//+24
};

struct array_field {
	void* unkptr1; //+0
	void* typeptr; //+4
	int deserialized_pos; //+8
	void* unkptr4; //+0c
	void* unkptr5; //+10
	void* unkptr6; //+14
	int flags; //+18
	generic_message* elements_type;	//+1c
	void* unkptr9;  //+20
	int elements_count;	//+24
	int unknow_backawards; //[edi+28h]
};
#pragma pack(pop)

void __stdcall explore_and_print(void* deserialized_packet, void *field_info, void* __this, void* astring, int tabs);

#define DT_FIXEDARRAY_vtable 0x011AED68
#define DT_CHARARRAY_vtable 0x011AE928
#define Message_vtable 0x011174B0
#define DT_INT_vtable 0x011AE598
#define DT_OPTIONAL_vtable 0x011AEF10

int __stdcall getmessagesize(generic_message* _this) {
	int returned;
	asm("	push %ecx");
	
	asm("	mov %0, %%ecx" :: "m"(_this));
	asm("	mov (%ecx), %eax");
	asm("	mov 4(%eax), %eax");
	asm("	call *%eax");
	asm("	mov %%eax, %0" :: "m"(returned));
	asm("	pop %ecx");
	return returned;
}

void __stdcall print_prolog_info(generic_message* _this, int tabcount) {
	char buf[200];	
	char tabs[100];
	for (int i = 0;  i < tabcount; i++) {
		tabs[i] = '\t';
	}
	tabs[tabcount] = 0;

	if ((unsigned int) _this->vtable == Message_vtable) {
		snprintf(buf, sizeof(buf)-2, "%s%s", tabs, "}");
		L_DebugString(buf);
	}
}

void __stdcall fixedarray_info(generic_field* field_info, generic_message* _this, void *deserialized_packet, void *astring, int tabcount) {
	char buf[200];	
	char tabs[100];
	for (int i = 0;  i < tabcount; i++) {
		tabs[i] = '\t';
	}
	tabs[tabcount] = 0;

	if (_this == NULL) return;

	char* achar = getcharptr((unsigned int)astring);

	unsigned int vtable = (unsigned int) _this->vtable;
	
	switch (vtable) {
		case Message_vtable:
			snprintf(buf, sizeof(buf)-2, "%s%s {", tabs, _this->name);
			L_DebugString(buf);
			break;
		case DT_INT_vtable:
			snprintf(buf, sizeof(buf)-2, "%s0x%x,", tabs, *(unsigned int*) deserialized_packet);
			L_DebugString(buf);
			break;
		case DT_OPTIONAL_vtable:
			//will be printed latter
			break;
		case DT_FIXEDARRAY_vtable:
			break;
		default:
			snprintf(buf, sizeof(buf)-2, "%s0x%x /* %s : %s */,",tabs, *(unsigned int*) deserialized_packet, _this->name, achar);
			L_DebugString(buf);
			break;
	}
	
	
	// ************ fields ******************
	
	if (field_info == NULL) return;

	if (vtable == DT_FIXEDARRAY_vtable) {
		array_field* array_info = (array_field*) field_info;
		int aresult = getmessagesize(array_info->elements_type);
		char* aobjptr = array_info->elements_type->name;
		snprintf(buf, sizeof(buf)-2, "%s%s[%d] // size of msgs = %d; flags=%x", tabs, aobjptr, array_info->elements_count, aresult, array_info->flags);
		L_DebugString(buf);
		int count = array_info->elements_count;
		if ((array_info->flags & 8) != 0) {
			count = *(unsigned int*)((char*)deserialized_packet+array_info->unknow_backawards);
			snprintf(buf, sizeof(buf)-2, "%s//din count? %d", tabs, count);
			L_DebugString(buf);
		} /*else {
			for (int i =0 ; i < array_info->elements_count; i++) {
				explore_and_print(deserialized_packet+aresult*(i), field_info, array_info->elements_type, astring, tabcount+1);
			}
		}*/
		snprintf(buf, sizeof(buf)-2, "%s{", tabs);
		L_DebugString(buf);
		for (int i =0 ; i < count; i++) {
			explore_and_print((char*)deserialized_packet+aresult*(i), field_info, array_info->elements_type, astring, tabcount+1);
		}
		snprintf(buf, sizeof(buf)-2, "%s}", tabs);
		L_DebugString(buf);
	}
	if (vtable == DT_OPTIONAL_vtable) {
		array_field* array_info = (array_field*) field_info;

		snprintf(buf, 100, "%s0x%x /* %s : %s */,", tabs, *(unsigned int*) deserialized_packet, achar, array_info->elements_type->name);
		L_DebugString(buf);
		
		if (*(unsigned int*)deserialized_packet != 0) {
			snprintf(buf, sizeof(buf)-2, "%s%s", tabs, "{");
			L_DebugString(buf);
			explore_and_print((char*)deserialized_packet+4, field_info, array_info->elements_type, astring, tabcount+1);
			snprintf(buf, sizeof(buf)-2, "%s%s", tabs, "}");
			L_DebugString(buf);
		}
	}
	if ((vtable == DT_CHARARRAY_vtable) | (vtable == DT_FIXEDARRAY_vtable)) {
		snprintf(buf, 100, "// %x, %x, %x, %x, %x, %x, %x, %x, %x, %x, %x", 
				(unsigned int)field_info->unkptr1, 
				(unsigned int)field_info->typeptr, 
				(unsigned int)field_info->deserialized_pos,
				(unsigned int)field_info->unkptr4, 
				(unsigned int)field_info->unkptr5, 
				(unsigned int)field_info->unkptr6, 
				(unsigned int)field_info->unkptr7, 
				(unsigned int)field_info->unkptr8, 
				(unsigned int)field_info->unkptr9, 
				(unsigned int)field_info->unkptr10
			);
			L_DebugString(buf);

	}
}

void __stdcall explore_and_print(void* deserialized_packet, void *field_info, void* _this, void* astring, int tabcount) {
    asm("pusha");
	asm("					mov		%0, %%edi\n" :: "m"(_this)); //_this comes in the third param :D
	
	asm("	                mov     %edi, %ecx\n");	
	asm("					push 	0x8(%ebp)\n"); //deserialized packet
	asm("					push 	0x14(%ebp)\n"); //astring
	asm("					mov		(%edi), %edx\n");
	asm("					mov		0x08(%edx), %edx\n");
	asm("					call    *%edx\n"); //call DT_toString
	
	//print aditional info:
	asm("					push	%0\n" :: "m"(tabcount));
	asm("					push	%0\n" :: "m"(astring));
	asm("					push	%0\n" :: "m"(deserialized_packet));
	asm("					push	%edi\n");	//_this
	asm("					push	%0\n" :: "m"(field_info));
	asm("					mov     %0, %%eax\n" :: "i"(fixedarray_info));
	asm("					call    *%eax\n");

	//check if it's a message:
	asm("					cmpl	$0x011174B0, (%edi)\n");
	asm("	                jnz     2f\n");

	asm("	                push    $0\n");
	asm("	                mov     %edi, %ecx\n");
	asm("					mov     %0, %%eax\n" :: "m"(get_next_member));
	asm("					call    *%eax\n");
	asm("	                cmp     $0, (%eax)\n");
	asm("	                mov     $1, %esi\n");
	asm("	                jz      2f\n");
	asm("1:\n");
	
	asm("	                mov     0x4(%eax), %ecx\n");
	
	asm("					push 	%ebx");
	
	asm("					mov 	0x18(%ebp), %ebx");
	asm("					inc     %ebx");
	asm("					push 	%ebx"); //tabcount
	
	asm("					push 	0x14(%ebp)"); //astring
	asm("	                push    %ecx\n"); //__this
	asm("	                push    %eax\n"); //field info
	asm("	                mov     0x8(%eax), %eax\n");
	asm("					add 	0x8(%ebp), %eax");
	asm("	                push    %eax\n"); //deserialized position
	
	asm("					mov     %0, %%eax\n" : : "i"(explore_and_print));
	asm("					call    *%eax\n");

	asm("					pop    %ebx\n");
		
	asm("	                push    %esi\n");
	asm("	                mov     %edi, %ecx\n");
	asm("					mov     %0, %%eax\n" :: "m"(get_next_member));
	asm("					call    *%eax\n");
	asm("	                inc     %esi\n");
	asm("	                cmp     $0, (%eax)\n");
	asm("	                jnz     1b\n");
	asm("2:\n");
	
	//print prolog info:
	asm("					push	0x18(%ebp)\n");	//_this
	asm("					push	%edi\n");	//_this
	asm("					mov     %0, %%eax\n" :: "i"(print_prolog_info));
	asm("					call    *%eax\n");
	
    asm("					popa");

    asm("					pop %ebp"); //cleanup
    asm("					ret $0x14"); //cleanup
	
}

void __stdcall print_bit_stream(int a, int fieldnum) {
	char buf[100];	
	snprintf(buf, 100, "%d (%d : %d)", 
				fieldnum,
				*(unsigned int*)(a+12),
				*(unsigned int*)(a+8)
			);
			L_DebugString(buf);
}
	
void func4()
{
    asm("pop    %ebp");
	asm("push    %ebx\n");
	asm("lea     -0x98(%ebp), %eax\n");
	asm("push    %eax\n");
	asm("push    %esi\n");
	asm("mov     %edi, %ecx\n");
	asm("call    *%edx\n");

	asm("pusha\n");
	
	asm("mov %edi, %ecx\n"); //move obj ptr to ecx

    asm("push    %ebp");
    asm("mov    %esp, %ebp");
	//create string, store in esi
	asm("sub  $0x50, %esp\n");
	asm("lea -0x4c(%ebp), %eax\n");

	asm("push	$0\n"); //tabcount
	asm("push	%eax\n"); //astring
	asm("push	%edi\n"); //_this
	asm("push	$0\n"); //field info, this isnt a field :D
	asm("push	%esi\n"); //this is the deserialized packet.
	
	asm("mov     %0, %%eax\n" : : "i"(explore_and_print));
	asm("call    *%eax\n");
	
	
	asm("add  $0x50, %esp\n");
    asm("mov    %ebp, %esp");
    asm("pop    %ebp");

	asm("popa\n");
	
	asm("push     %0\n" : : "m"(func4_return));
	asm("ret\n");
}

void func5() {
	
    asm("pop	%ebp");//fck the prologue
	
	//our func
    asm("pusha");
    asm("push %esi");
    asm("push 0x10(%ebp)");
	asm("mov     %0, %%eax\n" : : "i"(print_bit_stream));
	asm("call    *%eax\n");
    asm("popa");
	
	//original code:
    asm("mov    4(%eax), %ecx");
    asm("add    8(%ebp), %edx");
    asm("mov    (%ecx), %ebx");
    asm("push    %eax");             // fiesld info
    asm("mov     0x64(%ebx),%eax");
    asm("push    %edx");
    asm("call    *%eax");
	
	//epilog:
	asm("push     %0\n" : : "m"(func5_return));
	asm("ret\n");	
}

void __stdcall func2(char* eax) {
	char buf[8000];
	snprintf(buf, 8000, "func2 called %x %x %x %x", *(int*)(eax+12),*(int*)(eax+16),*(int*)(eax+20),*(int*)(eax+24));
	L_DebugString(buf);
}

void __stdcall generic_wrapper() {
	asm ("pusha");
	asm ("push %ebp");
	asm ("mov 4(%ebp), %eax");
	asm ("call *%eax");
	asm ("popa");
	asm ("pop %ebp");
	asm ("add $4, %esp");
	asm ("ret");
}

void __stdcall generic_wrapper_post() {
	asm ("pusha");
	asm ("push %ebp");
	asm ("mov 4(%ebp), %eax");
	asm ("call *%eax");
	asm ("popa");
	asm ("pop %ebp");
	asm ("add $4, %esp");
	asm ("ret");
}

void hookPushRet( unsigned int address,	unsigned int jumpwhere)
{
  DWORD old;
  VirtualProtect((void*)address, 6, PAGE_EXECUTE_READWRITE, &old);
  *(unsigned char*)(address)  = 0x68;
  *(unsigned int*)(address+1)= jumpwhere;
  *(unsigned char*)(address+5) = 0xc3;
  VirtualProtect((void*)address, 6, old, &old);
  FlushInstructionCache(GetCurrentProcess(), (void*)address, 6);
}


void hookNop( unsigned int address,	unsigned int size)
{
  DWORD old;
  VirtualProtect((void*)address, size, PAGE_EXECUTE_READWRITE, &old);
  for (int i=0; i<size;i++) {
	*(unsigned char*)(address+i)  = 0x90;
  }
  VirtualProtect((void*)address, size, old, &old);
  FlushInstructionCache(GetCurrentProcess(), (void*)address, size);
}

void* addtovtable(unsigned int origfnc, unsigned int hookfnc, unsigned int wrapper) {
  char buf[5000];
  snprintf(buf, 5000, "add vtable (%x,%x, %x)", origfnc, hookfnc, wrapper);
  L_DebugString(buf);

  void* returnptr = avtable+vtablepos;
  *(unsigned char*) (avtable+vtablepos) = 0x68; vtablepos++;
  *(unsigned int*)(avtable+vtablepos) = origfnc; vtablepos+=4; //orig fnc to return after hook
  *(unsigned char*) (avtable+vtablepos) = 0x68; vtablepos++;
  *(unsigned int*)(avtable+vtablepos) = hookfnc; vtablepos+=4; //hookfnc fnc
  *(unsigned char*) (avtable+vtablepos) = 0x68; vtablepos++;
  *(unsigned int*)(avtable+vtablepos) = wrapper; vtablepos+=4; //small wrapper
  *(unsigned char*) (avtable+vtablepos) = 0xc3; vtablepos++;
  return returnptr;
}

void hookabsCall( unsigned int address,	void* hookfnc, void* wrapper)
{
  DWORD old;
  unsigned int vtableentry = (unsigned int)addtovtable(*(unsigned int*)(address), (unsigned int)hookfnc, (unsigned int)wrapper);
  VirtualProtect((void*)address, 4, PAGE_EXECUTE_READWRITE, &old);
  *(unsigned int*)(address) = vtableentry;
  VirtualProtect((void*)address, 4, old, &old);
  FlushInstructionCache(GetCurrentProcess(), (void*)address, 4);
}

typedef int (*tgetpacket2)(int pckid, int* a, int* b, int* c);
tgetpacket2 getpacket2 = (tgetpacket2) 0x8BD1D0;

typedef int __fastcall (*tGet_Next_Field)(int Message, int, int index);
tGet_Next_Field Get_Next_Field = (tGet_Next_Field)0x00D4E7B0;

struct ProtocolFieldDescriptor;
#pragma pack(push)
#pragma pack(1)
struct ProtocolTypeDescriptor
{
    void** v_table;
    const char* Name;
    unsigned int unk;
    ProtocolFieldDescriptor* Fields;
};

struct ProtocolEnumDescriptor
{
     int Value;
     const char* Name;
};

struct ProtocolFieldDescriptor
{
    const char* FieldName;
    ProtocolTypeDescriptor* Type;
    int Offset;
    int UnusedString;
    union
    {
        int Min; 
        float Minf;
    };
    union
    {
        int Max; 
        float Maxf;
    };
    int Flags;
    ProtocolTypeDescriptor* ElementType; // optional/fixedarray
    int Unused20;
    int ArraySize;
    int ArrayCountOffset;
    unsigned short EncodedBits;
    unsigned short EncodedBits2;
    int SnoType;
    int Unused34;
    ProtocolEnumDescriptor* EnumDescriptor;
    int Unused3C;
    int Unused40;
    int Unused44;
    int Unused48;
    char Unused4C[64];   
};
#pragma pack(pop)

struct D3Struct {
	
};

void print_struct_format(D3Struct* a, int b, int c) {
	char buf[200];
	char autoname[20];
			//snprintf(buf, sizeof(buf), "%s %x %x %x",*(unsigned *)((int)a+4),(int)a,b,c);
			snprintf(buf, sizeof(buf), "STRUCT %s",*(unsigned *)((int)a+4),(int)a,b,c);
			L_DebugString(buf);
			for (int j = 0; ; j++) {
				int* field = (int*)Get_Next_Field((int)a, 0, j);
				unsigned int name = 0;
				char * fname = NULL;
				unsigned int vtable = 0;
				if (*field != 0) {
					vtable = *(unsigned int*)(field[1]);
					name = *(unsigned int*)(field[1]+4);
					fname = (char*)*field;
				}

				if (*field == 0) 
					break;
				
				/*
				snprintf(buf, sizeof(buf), "# %d\t%s\t%x\t%s\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t", j, *field, vtable, name, 
				field[2], field[3],field[4],field[5],field[6],field[7], field[8], field[9],field[10],field[11],field[12],field[13]);
				*/
				if (strlen((char*)(*field)) == 0) {
					snprintf(autoname, 20, "unknow_field_%d", j);
					fname = autoname;
				}
				snprintf(buf, sizeof(buf), "\tFIELD %s, %s, %d, %d, %d", name, fname, ((ProtocolFieldDescriptor*)field)->EncodedBits, ((ProtocolFieldDescriptor*)field)->Min, ((ProtocolFieldDescriptor*)field)->Max);
				
				
				L_DebugString(buf);
			}
			
			L_DebugString(TEXT("ENDSTRUCT"));
}

void onClick1() {
	char buf[400];
	int a,b,c;

	for (int i = 0; i < (sizeof(messages) / sizeof(int)); i++) {
		a = messages[i];
		if (!(IsBadReadPtr((void*)a,8)) & (*(unsigned *)(a) == 0x011174B0)) {
			print_struct_format((D3Struct*)a,b,c);
		}
		if (a == 20000532) break;
	}
	/*
//	vector<int> structures;
	for (int i = 1; i < 0x12E; i++) {
		if (getpacket2(i, &a, &b, &c) != 0) {
			snprintf(buf, sizeof(buf), "%s %x %x %x",*(unsigned *)(a+4),a,b,c);
			L_DebugString(buf);
			print_struct_format((D3Struct*)a);
		}
	}
	*/
}

   
void hk_exception_handler() {
	MessageBox(NULL,
        TEXT("UNHANDLED EXCEPTION!"),//contenido
        TEXT("Exception"),//titulo
        MB_ICONASTERISK | MB_OK );
		
	TerminateProcess(GetCurrentProcess(),0);
}

int __declspec(dllexport) __stdcall StartDll(int param)
{
  plol_OutputDebugString = (unsigned int) &lol_OutputDebugString;
  
  avtable = (char*)VirtualAlloc(NULL, 0x4000, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

  #ifdef TEXTFILE_OUTPUT
	FILE *file;	
	file = fopen("dbgoutput.txt","w+");       
    fprintf(file, "Starting Log\r\n");  
    fclose(file); 
  #endif
 
  if ((tlsIndex = TlsAlloc()) == TLS_OUT_OF_INDEXES) {
	MessageBox(NULL, "Error 0: cannt get tls slot", "",0);
	return 0;
  }

  RebaseFunctions();

  GuiStart(hDll_);
  hookPushRet(0x0080D7F9, 0x0080D8F3);//avoid init graphics =d
  
  hookPushRet(0x00D4A4C0, (unsigned int)&hk_exception_handler);
  hookPushRet(func3_hook, (unsigned int)&func3);
  hookPushRet(func4_hook, (unsigned int)&func4);
//  hookPushRet(func5_hook, (unsigned int)&func5); //func 5 prints bitstream position
  hookNop(0x00AEDCD0,2);
  
  //func1 hooks the protocol hashing and prints the strings.
//  hookPushRet((unsigned int)func1_hook, (unsigned int)&func1); 

  //hookabsCall(0x01117508, (void*)&func2, (void*)&generic_wrapper);
  //hookabsCall(0x0111750c, (void*)&func2, (void*)&generic_wrapper);
  
  //hookabsCall(0x011AE5FC, (void*)&func2, (void*)&generic_wrapper);
  
   //called here so the compiler doesnt remove this function
  
  #ifndef EASYINJECTION
  //code that jmps to the Entry Point of the exe
  TCHAR exepath[1000];
  if (0 == GetModuleFileName(0, exepath, 1000)) {
	MessageBox(NULL, "Error 0: cannt getmodulefilename", "",0);
	return 0;
  }
  HINSTANCE__* mhandle = GetModuleHandle(exepath);

  PIMAGE_DOS_HEADER dos_header;
  PIMAGE_NT_HEADERS nt_header;
  dos_header = (PIMAGE_DOS_HEADER) mhandle;
  nt_header = (PIMAGE_NT_HEADERS)((unsigned int)mhandle + dos_header->e_lfanew);
  unsigned int entry_point = ((unsigned int)mhandle + nt_header->OptionalHeader.AddressOfEntryPoint);

  __asm(
          "mov %0, %%eax\n\t"
          "jmp *%%eax\n\t"
		  :
		  :"r"(entry_point)
		  :"%eax", "%ebx"
		);
  #endif
}

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            // Code to run when the DLL is loaded
			hDll_ = hDll;
			#ifdef EASYINJECTION
				StartDll(0);
			#endif
            break;

        case DLL_PROCESS_DETACH:
            // Code to run when the DLL is freed
            break;

        case DLL_THREAD_ATTACH:
            // Code to run when a thread is created during the DLL's lifetime
            break;

        case DLL_THREAD_DETACH:
            // Code to run when a thread ends normally.
            break;
    }
    return TRUE;
}