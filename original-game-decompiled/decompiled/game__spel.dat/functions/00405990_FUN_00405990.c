
/* ==== FUN_00405990 @ 00405990 ==== 
 * signature: bool __cdecl FUN_00405990(int param_1, int param_2, LPSTR param_3, int param_4)
 * body: 00405990-004059a9;004059ad-004059f3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004059aa-004059ac
 */

bool __cdecl FUN_00405990(int param_1,int param_2,LPSTR param_3,int param_4)

{
  char cVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  int iVar4;
  
  if (param_3 == (LPSTR)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____a_Buffer_is_NULL_0058fcb0);
  }
  pCVar3 = "";
  if (*(LPCSTR *)(param_2 + 4) != (LPCSTR)0x0) {
    pCVar3 = *(LPCSTR *)(param_2 + 4);
  }
  pCVar2 = *(LPCSTR *)(param_1 + 4);
  if (pCVar2 == (LPCSTR)0x0) {
    pCVar2 = "";
  }
  FUN_004c3d10(pCVar2,pCVar3,param_3,param_4 - 1);
  iVar4 = -1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  return iVar4 != -2;
}


