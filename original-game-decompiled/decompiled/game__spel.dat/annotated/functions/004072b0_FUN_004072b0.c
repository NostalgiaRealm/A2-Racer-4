
/* ==== FUN_004072b0 @ 004072b0 ==== 
 * signature: undefined4 __cdecl FUN_004072b0(int param_1)
 * body: 004072b0-004072ee
 */

undefined4 __cdecl FUN_004072b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 6;
  piVar1 = &DAT_005cf9ac;
  while ((piVar1[-0x13] == -1 || (*piVar1 != param_1))) {
    piVar1 = piVar1 + 0xa5;
    iVar2 = iVar2 + 1;
    if (0x5d1608 < (int)piVar1) {
      return 0xffffffff;
    }
  }
  return (&DAT_005ce9e8)[iVar2 * 0xa5];
}


