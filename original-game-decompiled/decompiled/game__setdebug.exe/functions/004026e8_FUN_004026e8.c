
/* ==== FUN_004026e8 @ 004026e8 ==== 
 * signature: undefined __register FUN_004026e8(int * param_1, int param_2)
 * body: 004026e8-00402734
 */

void FUN_004026e8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_00446020)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00402744(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
    iVar1 = (*(code *)PTR_FUN_00446024)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_00402719:
    FUN_00402744(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_0044601c)(param_2);
    if (iVar1 == 0) goto LAB_00402719;
    *param_1 = iVar1;
  }
  return;
}


