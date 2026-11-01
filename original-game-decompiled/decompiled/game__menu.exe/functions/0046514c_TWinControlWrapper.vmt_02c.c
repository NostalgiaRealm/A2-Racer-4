
/* ==== TWinControlWrapper.vmt_02c @ 0046514c ==== 
 * signature: int * __register TWinControlWrapper.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0046514c-004651e7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TWinControlWrapper_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphicControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffbf;
  iVar1 = TWinControl_vmt_02c((int *)&PTR_TWinControl_vmt_000_0042ac0c,'\x01',param_1);
  param_1[0x4a] = iVar1;
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xffffffbf;
  iVar1 = FUN_004656b4((int)param_1);
  param_1[0x4c] = *(int *)(iVar1 + 0x28);
  param_1[0x4d] = *(int *)(iVar1 + 0x2c);
  iVar1 = FUN_004656b4((int)param_1);
  *(int **)(iVar1 + 0x2c) = param_1;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(*param_1 + 0x88);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


