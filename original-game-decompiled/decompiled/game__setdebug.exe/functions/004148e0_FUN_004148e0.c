
/* ==== FUN_004148e0 @ 004148e0 ==== 
 * signature: undefined __register FUN_004148e0(void)
 * body: 004148e0-00414934
 */

void FUN_004148e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x4148f0;
  puVar1 = (undefined4 *)FUN_0040f38c(DAT_00447624);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = puVar1[2];
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    pcStack_14 = (code *)&stack0xfffffffc;
    do {
      piVar2 = (int *)FUN_0040f024(puVar1,iVar4);
      FUN_00402d14(piVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0041493c;
  pcStack_18 = (code *)0x414934;
  FUN_0040f3f0(DAT_00447624);
  return;
}


