
/* ==== FUN_00440b60 @ 00440b60 ==== 
 * signature: undefined FUN_00440b60(void)
 * body: 00440b60-00440bd9;00440be1-00440be4
 */

void FUN_00440b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = (undefined *)0x440b75;
  uStack_14 = param_1;
  uStack_10 = param_2;
  uStack_8 = param_3;
  uVar2 = FUN_00440b08();
  puVar1 = puStack_18;
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x440b86;
    piStack_c = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',puVar1);
    puStack_1c = &UNK_00440bda;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_004409bc(1);
    FUN_004409bc(2);
    FUN_004409bc(3);
    FUN_004409bc(4);
    FUN_004409bc(5);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x440be1;
    puStack_1c = (undefined *)0x440bd9;
    FUN_00402d14(piStack_c);
    return;
  }
  return;
}


