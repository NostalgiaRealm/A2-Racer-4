
/* ==== TOleControl.vmt_02c @ 0046f170 ==== 
 * signature: int * __register TOleControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0046f170-0046f38a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TOleControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar5;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  char extraout_DL;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar6 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar6 = extraout_DL;
  }
  TWinControl_vmt_02c(param_1,'\0',param_3);
  *(byte *)((int)param_1 + 0x22) = *(byte *)((int)param_1 + 0x22) | 2;
  (**(code **)(*param_1 + 0xb4))();
  *(int *)(param_1[0x7c] + 0x48) = *(int *)(param_1[0x7c] + 0x48) + 1;
  uVar5 = extraout_ECX_00;
  if (0 < *(int *)(param_1[0x7c] + 0x34)) {
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
    param_1[0x8a] = (int)piVar2;
    FUN_004104a4(piVar2,*(int *)(param_1[0x7c] + 0x34));
    iVar8 = *(int *)(param_1[0x8a] + 8);
    uVar5 = extraout_ECX_01;
    if (-1 < iVar8 + -1) {
      iVar7 = 0;
      do {
        piVar2 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',uVar5);
        FUN_004103fc((int *)param_1[0x8a],iVar7,(int)piVar2);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
        uVar5 = extraout_ECX_02;
      } while (iVar8 != 0);
    }
  }
  if (0 < *(int *)(param_1[0x7c] + 0x3c)) {
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',uVar5);
    param_1[0x8b] = (int)piVar2;
    FUN_004104a4(piVar2,*(int *)(param_1[0x7c] + 0x3c));
    iVar8 = *(int *)(param_1[0x8b] + 8);
    if (-1 < iVar8 + -1) {
      iVar7 = 0;
      uVar5 = extraout_ECX_03;
      do {
        piVar2 = FUN_0041b354((int *)&PTR_TPicture_vmt_000_0041702c,'\x01',uVar5);
        FUN_004103fc((int *)param_1[0x8b],iVar7,(int)piVar2);
        iVar3 = FUN_004102b0((undefined4 *)param_1[0x8b],iVar7);
        *(int **)(iVar3 + 0xc) = param_1;
        *(code **)(iVar3 + 8) = FUN_00470274;
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
        uVar5 = extraout_ECX_04;
      } while (iVar8 != 0);
    }
  }
  iVar8 = FUN_0046f058((int *)&DAT_0046e828,'\x01',(int)param_1);
  param_1[0x7e] = iVar8;
  FUN_0046f7e4((int)param_1);
  (**(code **)(*param_1 + 0xb8))(param_1,param_1[0x80]);
  uVar4 = (**(code **)(*(int *)param_1[0x80] + 0x58))();
  FUN_0046c2c0(uVar4);
  if (((*(byte *)(param_1[0x7c] + 0x44) & 2) == 0) &&
     (((*(byte *)((int)param_1 + 0x226) & 2) != 0 || ((*(byte *)(param_1[0x7c] + 0x44) & 1) != 0))))
  {
    uVar4 = (**(code **)(*(int *)param_1[0x80] + 0xc))();
    FUN_0046c2c0(uVar4);
  }
  FUN_00405860(param_1 + 0x81);
  puVar1 = (undefined4 *)param_1[0x80];
  uVar4 = (**(code **)*puVar1)();
  FUN_0046c2c0(uVar4);
  if ((*(byte *)((int)param_1 + 0x225) & 4) != 0) {
    TGroupBox_set_Visible(param_1,0,extraout_ECX_05);
  }
  if ((*(byte *)((int)param_1 + 0x226) & 1) == 0) {
    param_1[0x10] = 0x1080;
  }
  else {
    param_1[0x10] = 0x1081;
  }
  TGroupBox_set_TabStop((int)param_1,(*(byte *)((int)param_1 + 0x225) & 0x60) == 0);
  uVar4 = FUN_0047119c();
  FUN_0046c2c0(uVar4);
  if (cVar6 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = puVar1;
  }
  return param_1;
}


