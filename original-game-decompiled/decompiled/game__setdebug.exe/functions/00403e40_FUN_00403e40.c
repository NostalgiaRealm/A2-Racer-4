
/* ==== FUN_00403e40 @ 00403e40 ==== 
 * signature: undefined __register FUN_00403e40(int param_1, int param_2, uint param_3, int * param_4)
 * body: 00403e40-00403e7e
 */

void FUN_00403e40(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + -4), iVar1 != 0)) {
    iVar2 = param_2 + -1;
    if (param_2 < 1) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_00403e72;
    if (-1 < (int)param_3) {
      if (iVar1 - iVar2 < (int)param_3) {
        param_3 = iVar1 - iVar2;
      }
      FUN_00403aa0(param_4,(undefined4 *)(iVar2 + param_1),param_3);
      return;
    }
  }
LAB_00403e72:
  FUN_004039b8(param_4);
  return;
}


