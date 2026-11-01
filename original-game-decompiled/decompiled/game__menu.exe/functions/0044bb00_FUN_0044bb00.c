
/* ==== FUN_0044bb00 @ 0044bb00 ==== 
 * signature: undefined FUN_0044bb00(void)
 * body: 0044bb00-0044bb79;0044bb81-0044bb84
 */

void FUN_0044bb00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_1c = (undefined *)0x44bb15;
  uStack_14 = param_1;
  uStack_10 = param_2;
  uStack_8 = param_3;
  uVar2 = FUN_0044baa8();
  puVar1 = puStack_18;
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x44bb26;
    piStack_c = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',puVar1);
    puStack_1c = &UNK_0044bb7a;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_0044b95c(1);
    FUN_0044b95c(2);
    FUN_0044b95c(3);
    FUN_0044b95c(4);
    FUN_0044b95c(5);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x44bb81;
    puStack_1c = (undefined *)0x44bb79;
    FUN_00402f9c(piStack_c);
    return;
  }
  return;
}


