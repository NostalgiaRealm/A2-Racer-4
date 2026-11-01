
/* ==== FUN_004ccde0 @ 004ccde0 ==== 
 * signature: int __cdecl FUN_004ccde0(int param_1, int param_2, int param_3)
 * body: 004ccde0-004cce14
 */

int __cdecl FUN_004ccde0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_005b37b4;
  while (((piVar2[-1] != param_1 || (*piVar2 != param_2)) || (piVar2[1] != param_3))) {
    piVar2 = piVar2 + 5;
    iVar1 = iVar1 + 1;
    if (0x5b3943 < (int)piVar2) {
      return -1;
    }
  }
  return iVar1;
}


