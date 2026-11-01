
/* ==== TCustomGDIGraphic.vmt_02c @ 00463ba0 ==== 
 * signature: int * __register TCustomGDIGraphic.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00463ba0-00463c43
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomGDIGraphic_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphicControl_vmt_02c(param_1,'\0',param_3);
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar1;
  piVar1 = TDaviLinkedGraphic_vmt_014((int *)&PTR_TPersistent_vmt_000_0045ca28,'\x01',param_1);
  param_1[0x4b] = (int)piVar1;
  piVar1[7] = (int)param_1;
  piVar1[6] = *(int *)(*param_1 + 0xa4);
  FUN_0045d4a4((int)piVar1,extraout_EDX,extraout_ECX_01,*(undefined4 *)(*param_1 + 0xa0),param_1);
  TControl_set_Width(param_1,100);
  TControl_set_Height(param_1,0x32);
  *(undefined1 *)((int)param_1 + 0x13d) = 0xff;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


