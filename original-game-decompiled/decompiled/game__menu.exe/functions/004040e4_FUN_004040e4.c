
/* ==== FUN_004040e4 @ 004040e4 ==== 
 * signature: undefined __register FUN_004040e4(int param_1, int param_2, uint param_3, int * param_4)
 * body: 004040e4-00404122
 */

void FUN_004040e4(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + -4), iVar1 != 0)) {
    iVar2 = param_2 + -1;
    if (param_2 < 1) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_00404116;
    if (-1 < (int)param_3) {
      if (iVar1 - iVar2 < (int)param_3) {
        param_3 = iVar1 - iVar2;
      }
      FUN_00403d44(param_4,(undefined4 *)(iVar2 + param_1),param_3);
      return;
    }
  }
LAB_00404116:
  FUN_00403c5c(param_4);
  return;
}


