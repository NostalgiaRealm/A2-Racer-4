
/* ==== TDaviGraphicSlider.vmt_02c @ 0046aa04 ==== 
 * signature: int * __register TDaviGraphicSlider.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0046aa04-0046aadb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviGraphicSlider_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TCustomControl_vmt_02c(param_1,'\0',param_3);
  piVar2 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_00);
  param_1[0x82] = (int)piVar2;
  piVar2 = TDaviSliderNeedle_vmt_02c((int *)&PTR_TWinControl_vmt_000_00469ecc,'\x01',param_1);
  param_1[0x84] = (int)piVar2;
  (**(code **)(*piVar2 + 0x60))(piVar2,param_1);
  TDaviGraphicButton_set_Definition(param_1[0x84],param_1[0x83]);
  param_1[0x87] = 0xfa;
  param_1[0x88] = 0x32;
  param_1[0x7e] = 5;
  param_1[0x86] = 5;
  param_1[0x85] = 5;
  TControl_set_Width(param_1,200);
  iVar1 = *(int *)(param_1[0x84] + 0x3c);
  iVar4 = iVar1 + 10;
  if (SCARRY4(iVar1,10)) {
    thunk_FUN_00402808(param_1[0x84]);
    iVar4 = extraout_EDX;
  }
  TControl_set_Height(param_1,iVar4);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


