
/* ==== FUN_0040eaac @ 0040eaac ==== 
 * signature: undefined4 __register FUN_0040eaac(int param_1)
 * body: 0040eaac-0040eb1b;0040eb23-0040eb2c
 */

undefined4 FUN_0040eaac(int param_1)

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
  
  puStack_1c = (undefined1 *)0x40eac7;
  puVar1 = (undefined4 *)FUN_0040f38c(DAT_00447624);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = puVar1[2];
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar2 = FUN_0040f024(puVar1,iVar5);
      if (*(int *)(iVar2 + 4) == param_1) {
        uVar3 = *(undefined4 *)(iVar2 + 8);
        FUN_0040350c();
        return uVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40eb23;
  pcStack_20 = (code *)0x40eb1b;
  uVar3 = FUN_0040f3f0(DAT_00447624);
  return uVar3;
}


