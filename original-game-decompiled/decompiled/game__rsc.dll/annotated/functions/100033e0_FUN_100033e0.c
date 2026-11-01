
/* ==== FUN_100033e0 @ 100033e0 ==== 
 * signature: bool __stdcall FUN_100033e0(void)
 * body: 100033e0-100036eb
 */

bool FUN_100033e0(void)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  char *in_stack_00000010;
  int in_stack_00000014;
  uint local_1110 [1024];
  int local_110;
  uint local_10c [50];
  undefined4 uStackY_44;
  uint *_Str;
  
  FUN_10008bb0();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_10003050(2,0x1002c3cc,0x1da,0,(byte *)"szUserMessage != NULL"), iVar1 == 1)) {
    FUN_10002f40();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_10001ec0(local_10c,(uint *)"<program name unknown>");
  }
  _Str = local_10c;
  sVar3 = _strlen((char *)_Str);
  if (0x40 < sVar3) {
    _strlen((char *)_Str);
    _strncpy((char *)0x3,"...",3);
  }
  if ((in_stack_00000010 != (char *)0x0) && (sVar3 = _strlen(in_stack_00000010), 0x40 < sVar3)) {
    sVar3 = _strlen(in_stack_00000010);
    _strncpy(in_stack_00000010 + (sVar3 - 0x40),"...",3);
  }
  uStackY_44 = 0x10003682;
  iVar1 = FUN_100089b0((undefined1 *)local_1110,0x1000,
                       (byte *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_10001ec0(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_10009170(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_10008eb0(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}


