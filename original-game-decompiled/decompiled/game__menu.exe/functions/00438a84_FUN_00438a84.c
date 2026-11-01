
/* ==== FUN_00438a84 @ 00438a84 ==== 
 * signature: int * __register FUN_00438a84(int * param_1, char param_2, undefined4 param_3)
 * body: 00438a84-00438b11
 */

int * FUN_00438a84(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 5;
  if (((*(int *)PTR_DAT_004aba10 == 2) && (3 < *(int *)PTR_DAT_004ab748)) ||
     ((*(int *)PTR_DAT_004aba10 == 1 &&
      ((4 < *(int *)PTR_DAT_004ab748 ||
       ((*(int *)PTR_DAT_004ab748 == 4 && (9 < *(int *)PTR_DAT_004ab8fc)))))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  FUN_00438be8((int)param_1,0);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


