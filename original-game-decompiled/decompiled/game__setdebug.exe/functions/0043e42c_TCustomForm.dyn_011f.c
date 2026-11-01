
/* ==== TCustomForm.dyn_011f @ 0043e42c ==== 
 * signature: undefined TCustomForm.dyn_011f(void)
 * body: 0043e42c-0043e4c6
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
  puStack_1c = &UNK_0043e4c7;
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
      iVar2 = FUN_00435cac(*(int *)(param_1 + 0x230));
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    if (iVar2 == 0) {
      FUN_0044295c(DAT_004477c4,(uint *)0x0);
    }
    else {
      FUN_00421c50(*(undefined4 **)(iVar2 + 0x4c),(int *)&puStack_8);
      FUN_0044295c(DAT_004477c4,puStack_8);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0043e4ce;
  puStack_1c = (undefined *)0x43e4c6;
  FUN_004039b8((int *)&puStack_8);
  return;
}


