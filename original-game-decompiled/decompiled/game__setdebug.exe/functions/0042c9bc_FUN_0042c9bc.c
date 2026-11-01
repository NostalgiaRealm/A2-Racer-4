
/* ==== FUN_0042c9bc @ 0042c9bc ==== 
 * signature: undefined __register FUN_0042c9bc(int param_1, undefined4 param_2, int param_3, int param_4)
 * body: 0042c9bc-0042ca10
 */

void FUN_0042c9bc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_4 + -4) == *(int *)(param_1 + 4)) {
    *(int *)(param_4 + -8) = param_1;
    return;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = param_4;
    FUN_0042c9bc(*(int *)(param_1 + 0xc),param_2,param_3,param_4);
    param_3 = iVar1;
    param_2 = extraout_EDX;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0042c9bc(*(int *)(param_1 + 8),param_2,param_3,param_4);
  }
  return;
}


