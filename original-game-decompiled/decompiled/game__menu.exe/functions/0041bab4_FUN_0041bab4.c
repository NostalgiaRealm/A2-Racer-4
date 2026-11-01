
/* ==== FUN_0041bab4 @ 0041bab4 ==== 
 * signature: undefined __register FUN_0041bab4(int * param_1, char param_2, int param_3, int param_4, int param_5, HDC param_6)
 * body: 0041bab4-0041bca2
 */

void FUN_0041bab4(int *param_1,char param_2,int param_3,int param_4,int param_5,HDC param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPCSTR lpDesc;
  HDC pHVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  code *pcStack_48;
  undefined1 *puStack_44;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined *local_24;
  RECT local_20;
  HDC local_10;
  undefined1 local_9;
  int *local_8;
  
  local_24 = (undefined *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_44 = (undefined1 *)0x41bace;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffc0,in_stack_ffffffc4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  pcStack_48 = thunk_FUN_004036bc;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_00418b34(param_1,'\0',param_3);
  local_8[0x16] = param_3;
  local_10 = param_6;
  if (param_6 == (HDC)0x0) {
    local_10 = GetDC((HWND)0x0);
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  iVar2 = FUN_0041c06c(local_8[0x16]);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)local_8[0x16] + 0x2c))();
    if (iVar2 == 0) {
      iVar2 = GetDeviceCaps(local_10,4);
      FUN_0041c694((int *)local_8[0x16],iVar2 * 100,extraout_ECX_00);
    }
    else {
      iVar2 = GetDeviceCaps(local_10,8);
      iVar3 = GetDeviceCaps(local_10,4);
      iVar3 = iVar3 * 100;
      piVar1 = (int *)local_8[0x16];
      iVar4 = (**(code **)(*piVar1 + 0x2c))();
      iVar2 = MulDiv(iVar4,iVar3,iVar2);
      FUN_0041c694(piVar1,iVar2,extraout_ECX_01);
    }
  }
  iVar2 = FUN_0041c054(local_8[0x16]);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)local_8[0x16] + 0x20))();
    if (iVar2 == 0) {
      iVar2 = GetDeviceCaps(local_10,6);
      FUN_0041c658((int *)local_8[0x16],iVar2 * 100,extraout_ECX_02);
    }
    else {
      iVar2 = GetDeviceCaps(local_10,10);
      iVar3 = GetDeviceCaps(local_10,6);
      iVar3 = iVar3 * 100;
      piVar1 = (int *)local_8[0x16];
      iVar4 = (**(code **)(*piVar1 + 0x20))();
      iVar2 = MulDiv(iVar4,iVar3,iVar2);
      FUN_0041c658(piVar1,iVar2,extraout_ECX_03);
    }
  }
  uVar5 = FUN_0041c054(local_8[0x16]);
  pRVar8 = &local_20;
  uVar6 = FUN_0041c06c(local_8[0x16]);
  FUN_0040f7e8(0,0,uVar6,&pRVar8->left,uVar5);
  iVar2 = FUN_00403edc(param_5);
  if (iVar2 < 1) {
    iVar2 = FUN_00403edc(param_4);
    if (iVar2 < 1) {
      lpDesc = (LPCSTR)0x0;
      goto LAB_0041bc5f;
    }
  }
  FUN_00403f9c((int *)&local_24,4);
  lpDesc = FUN_004040a0(local_24);
LAB_0041bc5f:
  pHVar7 = CreateEnhMetaFileA(local_10,(LPCSTR)0x0,&local_20,lpDesc);
  if (pHVar7 == (HDC)0x0) {
    FUN_00419828();
  }
  FUN_00419558(local_8,(int)pHVar7);
  *in_FS_OFFSET = uVar9;
  if (param_6 == (HDC)0x0) {
    ReleaseDC((HWND)0x0,local_10);
  }
  return;
}


