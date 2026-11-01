
/* ==== TWinControl.vmt_02c @ 00426920 ==== 
 * signature: undefined __register TWinControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00426920-00426a11
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
    pcStackY_28 = (code *)0x426939;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  pcStackY_2c = thunk_FUN_00403434;
  uStackY_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_30;
  pcStackY_28 = (code *)&stack0xfffffffc;
  TControl_vmt_02c(param_1,'\0',param_3);
  puVar1 = FUN_00439bd0();
  param_1[0x57] = (int)puVar1;
  piVar2 = FUN_00416bb0((int *)&PTR_TPersistent_vmt_000_00415148,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar2;
  TBrush_set_Color(piVar2,param_1[0x18]);
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5c] = -1;
  *(undefined1 *)(param_1 + 0x55) = 3;
  if (*(short *)(PTR_DAT_00446da0 + 4) == 0x11) {
    FUN_004039b8(param_1 + 0x56);
  }
  else {
    FUN_004405c8(*(int *)PTR_DAT_00446d84,(int *)&local_c,extraout_ECX_01);
    FUN_00403a0c(param_1 + 0x56,local_c);
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0xf;
  *(undefined1 *)((int)param_1 + 0x123) = 2;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 1;
  *in_FS_OFFSET = uStackY_30;
  pcStackY_28 = FUN_00426a19;
  pcStackY_2c = (code *)0x426a11;
  FUN_004039b8((int *)&local_c);
  return;
}


