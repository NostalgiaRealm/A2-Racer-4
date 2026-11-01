
/* ==== TfrmTrack.vmt_0fc @ 00499c7c ==== 
 * signature: undefined TfrmTrack.vmt_0fc(void)
 * body: 00499c7c-00499d25
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmTrack_vmt_0fc(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *puStack_c;
  int iStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14) = *(undefined4 *)(iVar1 + 8);
  FUN_004085ac(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14),(int *)&puStack_c);
  FUN_00403f28(&iStack_8,(undefined4 *)"setting tr to drive to ",puStack_c);
  iVar1 = iStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,iVar1);
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_00498aa4);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00499d2d;
  pcStack_18 = (code *)0x499d25;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


