
/* ==== FUN_00404ea4 @ 00404ea4 ==== 
 * signature: undefined __register FUN_00404ea4(VARIANTARG * param_1, undefined4 param_2)
 * body: 00404ea4-00404ebb
 */

void FUN_00404ea4(VARIANTARG *param_1,undefined4 param_2)

{
  if (7 < (param_1->n1).n2.vt) {
    FUN_004049ec(param_1);
  }
  (param_1->n1).n2.vt = 3;
  *(undefined4 *)((int)&param_1->n1 + 8) = param_2;
  return;
}


