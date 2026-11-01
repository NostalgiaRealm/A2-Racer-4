
/* ==== TCustomForm.dyn_011f @ 00448ddc ==== 
 * signature: undefined TCustomForm.dyn_011f(void)
 * body: 00448ddc-00448e76
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_011f(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  uint *puStack_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_1c = &UNK_00448e77;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(param_1 + 0x230) != 0) {
    iVar2 = 0;
    if ((*(short *)(param_2 + 6) != -1) || (puVar1 = &stack0xfffffffc, *(short *)(param_2 + 4) != 0)
       ) {
      puVar1 = &stack0xfffffffc;
      if ((*(byte *)(param_2 + 6) & 0x10) != 0) {
        GetSubMenu(*(HMENU *)(param_2 + 8),(uint)*(ushort *)(param_2 + 4));
        puVar1 = puStack_18;
      }
      puStack_18 = puVar1;
      iVar2 = FUN_0044038c(*(int *)(param_1 + 0x230));
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    if (iVar2 == 0) {
      FUN_0044dae8(DAT_004ac7d4,(uint *)0x0);
    }
    else {
      FUN_0042bb90(*(undefined4 **)(iVar2 + 0x4c),(int *)&puStack_8);
      FUN_0044dae8(DAT_004ac7d4,puStack_8);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_00448e7e;
  puStack_1c = (undefined *)0x448e76;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


