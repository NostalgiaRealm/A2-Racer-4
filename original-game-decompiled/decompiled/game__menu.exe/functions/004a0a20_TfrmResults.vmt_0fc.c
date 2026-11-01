
/* ==== TfrmResults.vmt_0fc @ 004a0a20 ==== 
 * signature: undefined TfrmResults.vmt_0fc(void)
 * body: 004a0a20-004a0b29
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmResults_vmt_0fc(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar4 = &DAT_004a0b40;
  pcVar3 = "FlowToNext";
  iVar5 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9) == '\x01') {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049ba10);
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 8) == 0) {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
      (**(code **)(*param_1 + 0xe8))
                (param_1,&PTR_TWinControl_vmt_000_0049f320,*param_1,pcVar3,puVar4,iVar5);
    }
    else {
      (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049fc84);
    }
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_004a0058);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&iStack_c,2);
  return;
}


