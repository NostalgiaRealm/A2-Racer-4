
/* ==== TSingletonForm.vmt_02c @ 0048f7d0 ==== 
 * signature: undefined TSingletonForm.vmt_02c(void)
 * body: 0048f7d0-0048f84e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TSingletonForm_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
  TCaptionForm_vmt_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)FUN_0048f750,'\x01',extraout_ECX_00);
  uVar2 = FUN_00402ee0(param_1);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(int **)(iVar1 + 8) = param_1;
  if (DAT_004ad490 == (int *)0x0) {
    DAT_004ad490 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_01);
  }
  FUN_00410104(DAT_004ad490,iVar1);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


