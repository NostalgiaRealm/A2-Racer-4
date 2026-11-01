
/* ==== FUN_00491c7c @ 00491c7c ==== 
 * signature: undefined FUN_00491c7c(void)
 * body: 00491c7c-00491d7b
 */

void FUN_00491c7c(int *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_ECX;
  int iVar3;
  int iVar4;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *piVar5;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  
  *(char *)(param_1 + 0xca) = param_2;
  if (param_2 == '\x01') {
    uVar1 = param_1[0xcb];
    piVar5 = (int *)param_1[0xbe];
    uVar2 = *(int *)(uVar1 + 0x38) - piVar5[0xe];
    if (SBORROW4(*(int *)(uVar1 + 0x38),piVar5[0xe])) {
      uVar1 = thunk_FUN_00402808(uVar1);
      uVar2 = extraout_ECX;
      piVar5 = extraout_EDX;
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    iVar4 = iVar3 + *(int *)(uVar1 + 0x30);
    if (SCARRY4(iVar3,*(int *)(uVar1 + 0x30))) {
      thunk_FUN_00402808(uVar1);
      iVar4 = extraout_ECX_00;
      piVar5 = extraout_EDX_00;
    }
    TControl_set_Left(piVar5,iVar4);
    uVar1 = param_1[0xcb];
    piVar5 = (int *)param_1[0xbe];
    uVar2 = *(int *)(uVar1 + 0x3c) - piVar5[0xf];
    if (SBORROW4(*(int *)(uVar1 + 0x3c),piVar5[0xf])) {
      uVar1 = thunk_FUN_00402808(uVar1);
      uVar2 = extraout_ECX_01;
      piVar5 = extraout_EDX_01;
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    iVar4 = iVar3 + *(int *)(uVar1 + 0x34);
    if (SCARRY4(iVar3,*(int *)(uVar1 + 0x34))) {
      thunk_FUN_00402808(uVar1);
      iVar4 = extraout_ECX_02;
      piVar5 = extraout_EDX_02;
    }
    TControl_set_Top(piVar5,iVar4);
    TGroupBox_set_Caption(param_1[0xbe],(uint *)0x0);
    TGroupBox_set_Visible
              ((int *)param_1[0xbe],CONCAT31((int3)((uint)extraout_EDX_03 >> 8),1),extraout_ECX_03);
    FUN_0042e978((int *)param_1[0xbe],extraout_EDX_04,extraout_ECX_04);
    TForm_set_ActiveControl(param_1,(int *)param_1[0xbe],extraout_ECX_05);
    TGroupBox_set_Caption(param_1[0xcb],(uint *)0x0);
    (**(code **)(*(int *)param_1[0xcb] + 0x5c))((int *)param_1[0xcb],0);
    return;
  }
  if (param_2 == '\0') {
    (**(code **)(*(int *)param_1[0xcb] + 0x5c))((int *)param_1[0xcb],1);
    (**(code **)(*(int *)param_1[0xcb] + 0xb4))();
    param_1[0xcb] = 0;
    TGroupBox_set_Visible((int *)param_1[0xbe],0,extraout_ECX_06);
  }
  return;
}


