
/* ==== FUN_00405040 @ 00405040 ==== 
 * signature: undefined __register FUN_00405040(VARIANT * param_1)
 * body: 00405040-00405060
 */

void FUN_00405040(VARIANT *param_1)

{
  _union_2683 _Stack_10;
  
  if (7 < (param_1->n1).n2.vt) {
    _Stack_10._12_4_ = *(undefined4 *)((int)&param_1->n1 + 0xc);
    _Stack_10._8_4_ = *(undefined4 *)((int)&param_1->n1 + 8);
    _Stack_10.decVal.Hi32 = (param_1->n1).decVal.Hi32;
    _Stack_10._0_4_ = *(undefined4 *)&param_1->n1;
    (param_1->n1).n2.vt = 0;
    FUN_00404a30(param_1,(VARIANTARG *)&_Stack_10.n2);
  }
  return;
}


