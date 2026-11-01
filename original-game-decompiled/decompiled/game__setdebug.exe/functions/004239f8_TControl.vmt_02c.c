
/* ==== TControl.vmt_02c @ 004239f8 ==== 
 * signature: int * __register TControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004239f8-00423abf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  param_1[0xb] = (int)param_1;
  param_1[10] = *(int *)(*param_1 + 0x6c);
  param_1[0x10] = 0xaa;
  piVar1 = FUN_004163b8((int *)&PTR_TPersistent_vmt_000_00414ecc,'\x01',extraout_ECX_00);
  param_1[0x16] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00424894;
  *(undefined1 *)((int)param_1 + 0x51) = 3;
  piVar1 = TSizeConstraints_vmt_00c
                     ((int *)&PTR_TSizeConstraints_vmt_000_00420394,'\x01',(int)param_1);
  param_1[0x19] = (int)piVar1;
  piVar1[7] = (int)param_1;
  piVar1[6] = (int)FUN_004255a0;
  param_1[0x18] = -0x7ffffffb;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x8a) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0xfff4;
  param_1[0x29] = (int)&PTR_TWinControl_vmt_000_004394d0;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


