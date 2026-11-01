
/* ==== __fassign @ 0055dc41 ==== 
 * signature: void __cdecl __fassign(int flag, char * argument, char * number)
 * body: 0055dc41-0055dc7e
 * note: Library Function - Single Match  __fassign  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_00565b96(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_00565bc3(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}


