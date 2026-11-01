
/* ==== FUN_00451008 @ 00451008 ==== 
 * signature: int * __register FUN_00451008(int * param_1, char param_2, int * param_3)
 * body: 00451008-0045107d
 */

int * FUN_00451008(int *param_1,char param_2,int *param_3)

{
  BOOL BVar1;
  HFONT pHVar2;
  int *extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe90;
  undefined4 in_stack_fffffe94;
  undefined4 local_158 [70];
  LOGFONTA local_40;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffe90,in_stack_fffffe94);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TCustomForm_vmt_0cc(param_1,'\0',param_3);
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 != 0) {
    pHVar2 = CreateFontIndirectA(&local_40);
    FUN_004183d0((int *)param_1[0x16],pHVar2);
  }
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_fffffe90;
  }
  return param_1;
}


