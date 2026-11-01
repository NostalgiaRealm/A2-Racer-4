
/* ==== TScreen.vmt_02c @ 0044af24 ==== 
 * signature: int * __register TScreen.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0044af24-0044b04b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TScreen_vmt_02c(int *param_1,char param_2,int *param_3)

{
  HKL pHVar1;
  int iVar2;
  HDC hdc;
  int *piVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  FUN_0044b288((int)param_1);
  pHVar1 = GetKeyboardLayout(0);
  param_1[0xc] = (int)pHVar1;
  iVar2 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar2;
  iVar2 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_01);
  param_1[0x11] = iVar2;
  iVar2 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_02);
  param_1[0x12] = iVar2;
  iVar2 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_03);
  param_1[0x13] = iVar2;
  iVar2 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_04);
  param_1[0x1c] = iVar2;
  hdc = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  param_1[0xd] = iVar2;
  ReleaseDC((HWND)0x0,hdc);
  (**(code **)PTR_DAT_004ab834)();
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_05);
  param_1[0x1e] = (int)piVar3;
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_06);
  param_1[0x1f] = (int)piVar3;
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_07);
  param_1[0x1d] = (int)piVar3;
  FUN_0044b668((int)param_1);
  iVar2 = param_1[0x1e];
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_0044b584;
  iVar2 = param_1[0x1f];
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_0044b584;
  iVar2 = param_1[0x1d];
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_0044b584;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


