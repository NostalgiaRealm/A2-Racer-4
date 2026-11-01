
/* ==== FUN_0043307c @ 0043307c ==== 
 * signature: undefined FUN_0043307c(void)
 * body: 0043307c-00433105
 */

void FUN_0043307c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  undefined *puStack_8;
  
  puStack_10 = &stack0xfffffffc;
  puStack_8 = (undefined *)0x0;
  puStack_14 = &UNK_00433106;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (PTR_DAT_004aba14[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_0044b568(*(int *)PTR_DAT_004ab9f8,(int *)&puStack_8,param_3);
      iVar2 = FUN_00408364((undefined *)param_1[0x56],puStack_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_004ab9f8 + 0x30),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    if ((char)param_1[0x55] == '\0') {
      FUN_004349e0(param_1);
      FUN_00438eb4();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_0043310d;
  puStack_14 = (undefined *)0x433105;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


