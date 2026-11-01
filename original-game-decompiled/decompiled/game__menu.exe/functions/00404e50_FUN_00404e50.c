
/* ==== FUN_00404e50 @ 00404e50 ==== 
 * signature: int * __register FUN_00404e50(int * param_1, short * param_2)
 * body: 00404e50-00404e83;00404e91-00404ea2
 */

int * FUN_00404e50(int *param_1,short *param_2)

{
  int *piVar1;
  
  if (*param_2 == 0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      (**(code **)(*piVar1 + 8))();
      param_1 = piVar1;
    }
    return param_1;
  }
  if ((*param_2 != 0xd) && (*param_2 != 9)) {
    if ((*param_2 != 0x400d) && (*param_2 != 0x4009)) {
      if (*param_2 == 0x101) {
        piVar1 = (int *)FUN_00404de0(param_1,(undefined4 *)param_2);
        return piVar1;
      }
      piVar1 = (int *)FUN_00402808(CONCAT31((int3)((uint)param_1 >> 8),0xf));
      return piVar1;
    }
    piVar1 = (int *)FUN_00405878(param_1,(int *)**(undefined4 **)(param_2 + 4));
    return piVar1;
  }
  piVar1 = (int *)FUN_00405878(param_1,*(int **)(param_2 + 4));
  return piVar1;
}


