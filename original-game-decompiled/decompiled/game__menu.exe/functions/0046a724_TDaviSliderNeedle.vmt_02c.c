
/* ==== TDaviSliderNeedle.vmt_02c @ 0046a724 ==== 
 * signature: int * __register TDaviSliderNeedle.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0046a724-0046a79a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviSliderNeedle_vmt_02c(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  uVar1 = FUN_00403114(param_3,(int)&PTR_TWinControl_vmt_000_0046a048);
  if ((char)uVar1 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  TDaviGraphicButton_vmt_02c(param_1,'\0',param_3);
  iVar2 = FUN_0040312c(param_3,(int)&PTR_TWinControl_vmt_000_0046a048);
  param_1[0x90] = iVar2;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


