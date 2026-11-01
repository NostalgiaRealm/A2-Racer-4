
/* ==== FUN_004caa50 @ 004caa50 ==== 
 * signature: undefined4 __cdecl FUN_004caa50(int * param_1)
 * body: 004caa50-004caae8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004caa50(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  DAT_005b5db4 = 0;
  iVar1 = param_1[1];
  for (piVar3 = param_1; (iVar1 != -1 && (*piVar3 != -1)); piVar3 = piVar3 + 3) {
    iVar1 = piVar3[4];
    DAT_005b5db4 = DAT_005b5db4 + 1;
  }
  iVar1 = FUN_004caaf0(DAT_005b5db4);
  if (iVar1 != 0) {
    return 2000;
  }
  iVar1 = 0;
  if (0 < DAT_005b5db4) {
    iVar2 = 0;
    piVar3 = param_1 + 2;
    do {
      iVar1 = iVar1 + 1;
      *(int *)(iVar2 + DAT_00740a1c) = piVar3[-2];
      *(int *)(iVar2 + 4 + DAT_00740a1c) = piVar3[-1];
      *(int *)(iVar2 + 8 + DAT_00740a1c) = *piVar3;
      iVar2 = iVar2 + 0xc;
      piVar3 = piVar3 + 3;
    } while (iVar1 < DAT_005b5db4);
  }
  _DAT_00740a20 = 1;
  return 0;
}


