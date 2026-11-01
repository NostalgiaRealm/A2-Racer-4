
/* ==== TfrmWinFinal.vmt_0fc @ 004a42e8 ==== 
 * signature: undefined TfrmWinFinal.vmt_0fc(void)
 * body: 004a42e8-004a4410
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmWinFinal_vmt_0fc(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
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
  TTimer_set_Enabled(param_1[0xc1],'\0');
  TTimer_set_Enabled(param_1[0xc2],'\0');
  cVar2 = FUN_004a3b58(param_1[0xbe]);
  if (cVar2 == '\x02') {
    FUN_004a2e80((int *)param_1[0xbe],extraout_EDX,extraout_ECX);
    FUN_004a2bd0((int *)param_1[0xbe],extraout_EDX_00,extraout_ECX_00);
  }
  else {
    cVar2 = FUN_004a3b58(param_1[0xbe]);
    iVar4 = extraout_ECX_01;
    uVar5 = extraout_EDX_01;
    if (cVar2 != '\x06') {
      cVar2 = FUN_004a3b58(param_1[0xbe]);
      iVar4 = extraout_ECX_02;
      uVar5 = extraout_EDX_02;
      if (cVar2 != '\x01') goto LAB_004a43be;
    }
    FUN_004a2bd0((int *)param_1[0xbe],uVar5,iVar4);
  }
LAB_004a43be:
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0x10) == '\0') {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049ba10);
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049a810);
  }
  *in_FS_OFFSET = "FlowToNext";
  FUN_00403c80(&iStack_c,2);
  return;
}


