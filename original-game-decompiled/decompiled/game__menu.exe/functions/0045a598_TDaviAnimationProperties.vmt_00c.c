
/* ==== TDaviAnimationProperties.vmt_00c @ 0045a598 ==== 
 * signature: int * __register TDaviAnimationProperties.vmt_00c(int * param_1, char param_2, undefined4 param_3)
 * body: 0045a598-0045a5df
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviAnimationProperties_vmt_00c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  piVar1 = TDaviLoopProperties_vmt_00c
                     ((int *)&PTR_TPersistent_vmt_000_0045a0f8,'\x01',extraout_ECX_00);
  param_1[5] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


