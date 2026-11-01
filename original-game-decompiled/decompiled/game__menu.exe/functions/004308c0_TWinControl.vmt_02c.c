
/* ==== TWinControl.vmt_02c @ 004308c0 ==== 
 * signature: undefined __register TWinControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004308c0-004309b1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  code *pcStackY_2c;
  code *pcStackY_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_c = (undefined4 *)0x0;
  local_5 = 0;
  if (param_2 != '\0') {
    pcStackY_28 = (code *)0x4308d9;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  pcStackY_2c = thunk_FUN_004036bc;
  uStackY_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_30;
  pcStackY_28 = (code *)&stack0xfffffffc;
  TControl_vmt_02c(param_1,'\0',param_3);
  puVar1 = FUN_00444580();
  param_1[0x57] = (int)puVar1;
  piVar2 = FUN_00418838((int *)&PTR_TPersistent_vmt_000_00416cfc,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar2;
  TBrush_set_Color(piVar2,param_1[0x18]);
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5c] = -1;
  *(undefined1 *)(param_1 + 0x55) = 3;
  if (*(short *)(PTR_DAT_004aba14 + 4) == 0x11) {
    FUN_00403c5c(param_1 + 0x56);
  }
  else {
    FUN_0044b568(*(int *)PTR_DAT_004ab9f8,(int *)&local_c,extraout_ECX_01);
    FUN_00403cb0(param_1 + 0x56,local_c);
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0xf;
  *(undefined1 *)((int)param_1 + 0x123) = 2;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 1;
  *in_FS_OFFSET = uStackY_30;
  pcStackY_28 = FUN_004309b9;
  pcStackY_2c = (code *)0x4309b1;
  FUN_00403c5c((int *)&local_c);
  return;
}


