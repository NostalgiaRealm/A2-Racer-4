
/* ==== TDaviSpeedButton.vmt_02c @ 00475318 ==== 
 * signature: undefined TDaviSpeedButton.vmt_02c(void)
 * body: 00475318-004753e2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviSpeedButton_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TGraphicControl_vmt_02c(param_1,'\0',param_3);
  uVar6 = 0x19;
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,0x19,0x19);
  param_1[0x10] = 0xc2;
  piVar1 = FUN_00474544((int *)&DAT_00474300,'\x01',extraout_ECX_00);
  param_1[0x4d] = (int)piVar1;
  iVar2 = TDaviColors_vmt_00c((int *)&PTR_TPersistent_vmt_000_00472a1c,'\x01',(int)param_1);
  param_1[0x4b] = iVar2;
  iVar2 = param_1[0x4d];
  *(int **)(iVar2 + 0x2c) = param_1;
  *(code **)(iVar2 + 0x28) = FUN_00475c0c;
  uVar3 = TGroupBox_set_ParentFont((int)param_1,'\x01');
  param_1[0x52] = 4;
  param_1[0x50] = -1;
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  bVar5 = SCARRY4(DAT_004ab460,1);
  DAT_004ab460 = DAT_004ab460 + 1;
  if (bVar5) {
    thunk_FUN_00402808(uVar3);
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = uVar6;
  }
  return param_1;
}


