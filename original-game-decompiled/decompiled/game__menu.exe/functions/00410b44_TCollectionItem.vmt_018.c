
/* ==== TCollectionItem.vmt_018 @ 00410b44 ==== 
 * signature: int * __register TCollectionItem.vmt_018(int * param_1, char param_2, int * param_3)
 * body: 00410b44-00410b78
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCollectionItem_vmt_018(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00410cc8(param_1,param_3,param_3);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


