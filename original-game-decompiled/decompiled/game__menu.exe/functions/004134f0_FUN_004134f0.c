
/* ==== FUN_004134f0 @ 004134f0 ==== 
 * signature: undefined __register FUN_004134f0(int param_1)
 * body: 004134f0-0041355f
 */

void FUN_004134f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x413502;
  piVar1 = (int *)FUN_00410750(DAT_004ac630);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = piVar1[2] + -1;
  pcStack_14 = (code *)&stack0xfffffffc;
  if (-1 < iVar3) {
    do {
      piVar2 = (int *)FUN_004102b0(piVar1,iVar3);
      if ((piVar2[1] == *(int *)(param_1 + 4)) && (piVar2[3] == *(int *)(param_1 + 0xc))) {
        FUN_00402f9c(piVar2);
        FUN_00410150(piVar1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00413567;
  pcStack_18 = (code *)0x41355f;
  FUN_004107b4(DAT_004ac630);
  return;
}


