
/* ==== FUN_0042e8d0 @ 0042e8d0 ==== 
 * signature: int * __register FUN_0042e8d0(int * param_1, char param_2, undefined4 param_3)
 * body: 0042e8d0-0042e95d
 */

int * FUN_0042e8d0(int *param_1,char param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 5;
  if (((*(int *)PTR_DAT_00446d9c == 2) && (3 < *(int *)PTR_DAT_00446b68)) ||
     ((*(int *)PTR_DAT_00446d9c == 1 &&
      ((4 < *(int *)PTR_DAT_00446b68 ||
       ((*(int *)PTR_DAT_00446b68 == 4 && (9 < *(int *)PTR_DAT_00446cb4)))))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  FUN_0042ea34((int)param_1,0);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


