
/* ==== TCustomForm.vmt_0cc @ 00445f5c ==== 
 * signature: int * __register TCustomForm.vmt_0cc(int * param_1, char param_2, int * param_3)
 * body: 00445f5c-004460b3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomForm_vmt_0cc(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TScrollingWinControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  TControl_set_Left(param_1,0);
  TControl_set_Top(param_1,0);
  TControl_set_Width(param_1,0x140);
  TControl_set_Height(param_1,0xf0);
  TForm_set_Visible(param_1,0,extraout_ECX_00);
  TGroupBox_set_ParentColor((int)param_1,'\0');
  TGroupBox_set_ParentFont((int)param_1,'\0');
  TGroupBox_set_Ctl3D((int)param_1,'\x01');
  *(undefined1 *)(param_1 + 0x84) = 7;
  *(undefined1 *)((int)param_1 + 0x211) = 2;
  *(undefined1 *)((int)param_1 + 0x213) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 3;
  piVar1 = TIcon_vmt_00c((int *)&PTR_TPersistent_vmt_000_004174e4,'\x01',extraout_ECX_01);
  param_1[0x8a] = (int)piVar1;
  uVar5 = 0x31;
  uVar2 = (**(code **)PTR_DAT_004ab760)();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2,*piVar1,uVar5);
  uVar2 = (**(code **)PTR_DAT_004ab760)();
  (**(code **)(*(int *)param_1[0x8a] + 0x34))((int *)param_1[0x8a],uVar2);
  iVar3 = param_1[0x8a];
  *(int **)(iVar3 + 0xc) = param_1;
  *(code **)(iVar3 + 8) = FUN_004467fc;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  piVar1 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00429cb8,'\x01',extraout_ECX_02);
  param_1[0x88] = (int)piVar1;
  FUN_0042d4c8(piVar1,(int)param_1);
  param_1[0x91] = *(int *)(DAT_004ac7d8 + 0x34);
  *(undefined1 *)((int)param_1 + 0x21d) = 1;
  iVar3 = FUN_00402ee0(param_1);
  param_1[0x29] = iVar3;
  FUN_0044b1f0(DAT_004ac7d8,param_1);
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = 0x32;
  }
  return param_1;
}


