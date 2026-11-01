
/* ==== TScreen.vmt_02c @ 0043ff9c ==== 
 * signature: int * __register TScreen.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0043ff9c-004400c3
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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  FUN_004402e8((int)param_1);
  pHVar1 = GetKeyboardLayout(0);
  param_1[0xc] = (int)pHVar1;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_01);
  param_1[0x11] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_02);
  param_1[0x12] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_03);
  param_1[0x13] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_04);
  param_1[0x1c] = iVar2;
  hdc = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  param_1[0xd] = iVar2;
  ReleaseDC((HWND)0x0,hdc);
  (**(code **)PTR_DAT_00446c24)();
  piVar3 = FUN_004163b8((int *)&PTR_TPersistent_vmt_000_00414ecc,'\x01',extraout_ECX_05);
  param_1[0x1e] = (int)piVar3;
  piVar3 = FUN_004163b8((int *)&PTR_TPersistent_vmt_000_00414ecc,'\x01',extraout_ECX_06);
  param_1[0x1f] = (int)piVar3;
  piVar3 = FUN_004163b8((int *)&PTR_TPersistent_vmt_000_00414ecc,'\x01',extraout_ECX_07);
  param_1[0x1d] = (int)piVar3;
  FUN_004406c8((int)param_1);
  iVar2 = param_1[0x1e];
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_004405e4;
  iVar2 = param_1[0x1f];
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_004405e4;
  iVar2 = param_1[0x1d];
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_004405e4;
  if (cVar4 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


