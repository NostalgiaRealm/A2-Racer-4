
/* ==== TfrmDifficulty.vmt_0fc @ 0049d124 ==== 
 * signature: undefined TfrmDifficulty.vmt_0fc(void)
 * body: 0049d124-0049d26c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmDifficulty_vmt_0fc(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
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
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,2);
  cVar2 = (**(code **)(*(int *)param_1[0xc1] + 0xb8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_1[0xc2] + 0xb8))();
    if (cVar2 == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8) = 2;
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8) = 1;
    }
  }
  else {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8) = 0;
  }
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049ba10);
  }
  else if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x1c) == '\x01') {
      (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049b288);
    }
    else {
      (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049a810);
    }
  }
  *in_FS_OFFSET = "FlowToNext";
  FUN_00403c80(&iStack_c,2);
  return;
}


