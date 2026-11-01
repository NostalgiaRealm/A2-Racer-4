
/* ==== FUN_00428f88 @ 00428f88 ==== 
 * signature: undefined FUN_00428f88(void)
 * body: 00428f88-00429011
 */

void FUN_00428f88(int *param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_14 = &UNK_00429012;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (PTR_DAT_00446da0[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_004405c8(*(int *)PTR_DAT_00446d84,(int *)&puStack_8,param_3);
      iVar2 = FUN_00407b28((undefined *)param_1[0x56],puStack_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_00446d84 + 0x30),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    if ((char)param_1[0x55] == '\0') {
      FUN_0042a8b4(param_1);
      FUN_0042ed00();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00429019;
  puStack_14 = (undefined *)0x429011;
  FUN_004039b8((int *)&puStack_8);
  return;
}


