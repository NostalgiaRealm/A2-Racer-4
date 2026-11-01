
/* ==== FUN_00418b34 @ 00418b34 ==== 
 * signature: int * __register FUN_00418b34(int * param_1, char param_2, undefined4 param_3)
 * body: 00418b34-00418bf1
 */

int * FUN_00418b34(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
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
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00419720;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_0041856c((int *)&PTR_TPersistent_vmt_000_00416bfc,'\x01',extraout_ECX_01);
  param_1[4] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00419740;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_00418838((int *)&PTR_TPersistent_vmt_000_00416cfc,'\x01',extraout_ECX_02);
  param_1[5] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00419760;
  piVar1[5] = (int)(param_1 + 0xe);
  param_1[8] = 0xcc0020;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_004106c8(DAT_004ac6a8,(int)param_1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


