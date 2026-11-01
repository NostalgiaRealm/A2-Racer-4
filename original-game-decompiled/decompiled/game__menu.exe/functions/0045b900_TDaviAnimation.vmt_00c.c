
/* ==== TDaviAnimation.vmt_00c @ 0045b900 ==== 
 * signature: int * __register TDaviAnimation.vmt_00c(int * param_1, char param_2, undefined4 param_3)
 * body: 0045b900-0045b95c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviAnimation_vmt_00c(int *param_1,char param_2,undefined4 param_3)

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
  TGraphic_vmt_00c(param_1,'\0',param_3);
  piVar1 = TObjectList_vmt_008((int *)&PTR_TObjectList_vmt_000_004519c0,'\x01',0);
  param_1[0xc] = (int)piVar1;
  piVar1 = TDaviAnimationProperties_vmt_00c
                     ((int *)&PTR_TPersistent_vmt_000_0045a1ac,'\x01',extraout_ECX_00);
  param_1[10] = (int)piVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


