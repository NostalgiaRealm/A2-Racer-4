
/* ==== FUN_00404f50 @ 00404f50 ==== 
 * signature: undefined __register FUN_00404f50(VARIANTARG * param_1, int * param_2)
 * body: 00404f50-00404f71
 */

void FUN_00404f50(VARIANTARG *param_1,int *param_2)

{
  if (7 < (param_1->n1).n2.vt) {
    FUN_004049ec(param_1);
  }
  (param_1->n1).n2.vt = 9;
  *(int **)((int)&param_1->n1 + 8) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}


