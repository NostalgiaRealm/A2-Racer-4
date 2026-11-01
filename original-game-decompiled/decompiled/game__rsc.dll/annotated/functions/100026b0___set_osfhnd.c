
/* ==== __set_osfhnd @ 100026b0 ==== 
 * signature: int __cdecl __set_osfhnd(int param_1, intptr_t param_2)
 * body: 100026b0-10002766
 * note: Library Function - Single Match  __set_osfhnd  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  
  if (((uint)param_1 < DAT_10031bfc) &&
     (*(int *)((&DAT_10031ac0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_10031428 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
      }
    }
    *(intptr_t *)((&DAT_10031ac0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10006f20();
    *puVar2 = 9;
    pDVar3 = FUN_10006f30();
    *pDVar3 = 0;
    iVar1 = -1;
  }
  return iVar1;
}


