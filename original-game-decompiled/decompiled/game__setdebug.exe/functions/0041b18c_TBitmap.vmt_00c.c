
/* ==== TBitmap.vmt_00c @ 0041b18c ==== 
 * signature: int * __register TBitmap.vmt_00c(int * param_1, char param_2, undefined4 param_3)
 * body: 0041b18c-0041b1f3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TBitmap_vmt_00c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphic_vmt_00c(param_1,'\0',param_3);
  param_1[0xb] = 0x20000000;
  iVar1 = FUN_00402ce4((int *)&PTR_TBitmapImage_vmt_000_004156bc,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_0041a6ec(iVar1);
  if (DAT_00446380 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


