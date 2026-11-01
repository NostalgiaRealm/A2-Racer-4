
/* ==== FUN_00404a54 @ 00404a54 ==== 
 * signature: undefined __register FUN_00404a54(VARIANTARG * param_1, undefined4 * param_2)
 * body: 00404a54-00404a93
 */

void FUN_00404a54(VARIANTARG *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_004046cc(param_1);
  }
  puVar1 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    if ((int)param_2[-2] < 0) {
      puVar1 = FUN_00403a7c(param_2[-1]);
      FUN_004027d0(param_2,puVar1,puVar1[-1]);
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


