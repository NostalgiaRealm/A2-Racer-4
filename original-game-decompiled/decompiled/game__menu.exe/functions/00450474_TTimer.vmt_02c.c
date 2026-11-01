
/* ==== TTimer.vmt_02c @ 00450474 ==== 
 * signature: int * __register TTimer.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00450474-004504c1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TTimer_vmt_02c(int *param_1,char param_2,int *param_3)

{
  HWND pHVar1;
  int *extraout_ECX;
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
  TComponent_vmt_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 1000;
  pHVar1 = FUN_0044463c();
  param_1[10] = (int)pHVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


