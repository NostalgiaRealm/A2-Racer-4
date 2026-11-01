
/* ==== TStStringResource.vmt_000 @ 00451d40 ==== 
 * signature: int * __register TStStringResource.vmt_000(int * param_1, char param_2, int param_3, undefined * param_4)
 * body: 00451d40-00451d8e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TStStringResource_vmt_000(int *param_1,char param_2,int param_3,undefined *param_4)

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
  FUN_00402f6c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00451d1c((int)param_1,param_3,param_4);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


