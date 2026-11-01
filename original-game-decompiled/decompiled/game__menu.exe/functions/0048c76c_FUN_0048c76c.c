
/* ==== FUN_0048c76c @ 0048c76c ==== 
 * signature: int * __register FUN_0048c76c(int * param_1, char param_2, int param_3)
 * body: 0048c76c-0048c7ab
 */

int * FUN_0048c76c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TDataObject_vmt_004(param_1,'\0',param_3);
  param_1[0xe] = param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


