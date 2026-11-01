
/* ==== FUN_00404edc @ 00404edc ==== 
 * signature: undefined __register FUN_00404edc(VARIANTARG * param_1, undefined4 * param_2)
 * body: 00404edc-00404f1b
 */

void FUN_00404edc(VARIANTARG *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_004049ec(param_1);
  }
  puVar1 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    if ((int)param_2[-2] < 0) {
      puVar1 = FUN_00403d20(param_2[-1]);
      FUN_004028d8(param_2,puVar1,puVar1[-1]);
    }
    else {
      LOCK();
      param_2[-2] = param_2[-2] + 1;
      UNLOCK();
    }
  }
  (param_1->n1).n2.vt = 0x100;
  *(undefined4 **)((int)&param_1->n1 + 8) = puVar1;
  return;
}


