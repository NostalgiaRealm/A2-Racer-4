
/* ==== TPageControl.vmt_02c @ 004858f8 ==== 
 * signature: int * __register TPageControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004858f8-00485946
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TPageControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TCustomTabControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xc0;
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[0x90] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


