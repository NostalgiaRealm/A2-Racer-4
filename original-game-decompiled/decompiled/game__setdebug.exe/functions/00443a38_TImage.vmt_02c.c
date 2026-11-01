
/* ==== TImage.vmt_02c @ 00443a38 ==== 
 * signature: int * __register TImage.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00443a38-00443ac7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TImage_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TGraphicControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  piVar1 = FUN_004191dc((int *)&PTR_TPicture_vmt_000_00415478,'\x01',extraout_ECX_00);
  param_1[0x4a] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00443dd4;
  piVar1[7] = (int)param_1;
  iVar2 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xffcd));
  piVar1[6] = iVar2;
  TControl_set_Height(param_1,0x69);
  TControl_set_Width(param_1,0x69);
  if (cVar3 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


