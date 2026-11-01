
/* ==== TDragDockObject.vmt_024 @ 0042c0bc ==== 
 * signature: int * __register TDragDockObject.vmt_024(int * param_1, char param_2, int param_3)
 * body: 0042c0bc-0042c11f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDragDockObject_vmt_024(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TBaseDragControlObject_vmt_024(param_1,'\0',param_3);
  piVar1 = FUN_00418838((int *)&PTR_TPersistent_vmt_000_00416cfc,'\x01',extraout_ECX_00);
  param_1[0x10] = (int)piVar1;
  uVar2 = FUN_0041fb50(0,0xffffff);
  FUN_004189b8(piVar1,uVar2);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


