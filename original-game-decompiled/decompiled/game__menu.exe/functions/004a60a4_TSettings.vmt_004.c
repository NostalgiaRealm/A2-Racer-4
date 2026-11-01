
/* ==== TSettings.vmt_004 @ 004a60a4 ==== 
 * signature: undefined __register TSettings.vmt_004(int * param_1, char param_2)
 * body: 004a60a4-004a615b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSettings_vmt_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_130;
  code *pcStackY_12c;
  undefined1 *puStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_128 = (undefined1 *)0x4a60c3;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
  }
  pcStackY_12c = thunk_FUN_004036bc;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  puStackY_128 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_vmt_004(param_1,'\0',extraout_ECX);
  piVar3 = TDataObject_vmt_004((int *)&PTR_TControls_vmt_000_004a6080,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar3;
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  return;
}


