
/* ==== FUN_0041193c @ 0041193c ==== 
 * signature: undefined __register FUN_0041193c(int param_1)
 * body: 0041193c-004119ab
 */

void FUN_0041193c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x41194e;
  piVar1 = (int *)FUN_0040f38c(DAT_00447628);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = piVar1[2] + -1;
  pcStack_14 = (code *)&stack0xfffffffc;
  if (-1 < iVar3) {
    do {
      piVar2 = (int *)FUN_0040f024(piVar1,iVar3);
      if ((piVar2[1] == *(int *)(param_1 + 4)) && (piVar2[3] == *(int *)(param_1 + 0xc))) {
        FUN_00402d14(piVar2);
        FUN_0040ef14(piVar1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004119b3;
  pcStack_18 = (code *)0x4119ab;
  FUN_0040f3f0(DAT_00447628);
  return;
}


