
/* ==== FUN_00491590 @ 00491590 ==== 
 * signature: int * __register FUN_00491590(int * param_1, char param_2, int * param_3, int param_4, undefined4 param_5)
 * body: 00491590-00491647
 */

int * FUN_00491590(int *param_1,char param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
  param_1[1] = iVar1;
  piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX_00);
  param_1[2] = (int)piVar2;
  uVar3 = (**(code **)(*piVar2 + 8))(piVar2,param_5);
  if (SBORROW4(param_4,1)) {
    thunk_FUN_00402808(uVar3);
  }
  if (-1 < param_4 + -1) {
    do {
      piVar2 = TCustomGDIGraphic_vmt_02c((int *)&PTR_TControl_vmt_000_004638d0,'\x01',param_3);
      (**(code **)(*piVar2 + 0x60))(piVar2,param_3);
      TGroupBox_set_Visible(piVar2,0,extraout_ECX_01);
      (**(code **)(*piVar2 + 0x98))(piVar2,1);
      FUN_00410104((int *)param_1[1],(int)piVar2);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffd8;
  }
  return param_1;
}


