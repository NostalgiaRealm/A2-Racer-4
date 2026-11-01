
/* ==== FUN_0040fce8 @ 0040fce8 ==== 
 * signature: undefined4 __register FUN_0040fce8(int param_1)
 * body: 0040fce8-0040fd57;0040fd5f-0040fd68
 */

undefined4 FUN_0040fce8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40fd03;
  puVar1 = (undefined4 *)FUN_00410750(DAT_004ac62c);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = puVar1[2];
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar2 = FUN_004102b0(puVar1,iVar5);
      if (*(int *)(iVar2 + 4) == param_1) {
        uVar3 = *(undefined4 *)(iVar2 + 8);
        FUN_00403794();
        return uVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40fd5f;
  pcStack_20 = (code *)0x40fd57;
  uVar3 = FUN_004107b4(DAT_004ac62c);
  return uVar3;
}


