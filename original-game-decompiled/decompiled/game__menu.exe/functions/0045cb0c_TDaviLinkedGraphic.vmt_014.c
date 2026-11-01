
/* ==== TDaviLinkedGraphic.vmt_014 @ 0045cb0c ==== 
 * signature: int * __register TDaviLinkedGraphic.vmt_014(int * param_1, char param_2, undefined4 param_3)
 * body: 0045cb0c-0045cb6d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviLinkedGraphic_vmt_014(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_00454aa4);
  FUN_00456634(piVar1,extraout_EDX,extraout_ECX_01);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


