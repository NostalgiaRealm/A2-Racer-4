
/* ==== FUN_004027ac @ 004027ac ==== 
 * signature: undefined __register FUN_004027ac(int * param_1, int param_2)
 * body: 004027ac-004027f8
 */

void FUN_004027ac(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_004aa028)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00402808(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
    iVar1 = (*(code *)PTR_FUN_004aa02c)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_004027dd:
    FUN_00402808(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_004aa024)(param_2);
    if (iVar1 == 0) goto LAB_004027dd;
    *param_1 = iVar1;
  }
  return;
}


