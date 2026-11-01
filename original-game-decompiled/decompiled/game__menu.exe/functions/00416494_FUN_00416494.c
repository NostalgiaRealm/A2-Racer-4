
/* ==== FUN_00416494 @ 00416494 ==== 
 * signature: undefined __register FUN_00416494(void)
 * body: 00416494-004164e8
 */

void FUN_00416494(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x4164a4;
  puVar1 = (undefined4 *)FUN_00410750(DAT_004ac62c);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = puVar1[2];
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    pcStack_14 = (code *)&stack0xfffffffc;
    do {
      piVar2 = (int *)FUN_004102b0(puVar1,iVar4);
      FUN_00402f9c(piVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004164f0;
  pcStack_18 = (code *)0x4164e8;
  FUN_004107b4(DAT_004ac62c);
  return;
}


