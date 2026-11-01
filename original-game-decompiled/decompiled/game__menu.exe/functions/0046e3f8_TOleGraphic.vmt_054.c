
/* ==== TOleGraphic.vmt_054 @ 0046e3f8 ==== 
 * signature: undefined TOleGraphic.vmt_054(void)
 * body: 0046e3f8-0046e45e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_054(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int *piStack_8;
  
  puStack_14 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00415fb8((int *)&PTR_TStreamAdapter_vmt_000_0040f384,'\x01',param_2,0);
  FUN_00405894((int *)&piStack_8,*(undefined4 **)(param_1 + 0x20));
  piVar1 = piStack_8;
  uVar2 = (**(code **)(*piStack_8 + 0x18))();
  FUN_0046c2c0(uVar2);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&piStack_8);
  return;
}


