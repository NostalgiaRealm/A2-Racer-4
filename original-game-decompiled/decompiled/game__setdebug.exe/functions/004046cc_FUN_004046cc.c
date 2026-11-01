
/* ==== FUN_004046cc @ 004046cc ==== 
 * signature: undefined __register FUN_004046cc(VARIANTARG * param_1)
 * body: 004046cc-0040470d
 */

void FUN_004046cc(VARIANTARG *param_1)

{
  ushort uVar1;
  
  uVar1 = (param_1->n1).n2.vt;
  if (((uVar1 & 0x4000) != 0) || (uVar1 < 8)) {
    (param_1->n1).n2.vt = 0;
    return;
  }
  if (uVar1 == 0x100) {
    (param_1->n1).n2.vt = 0;
    FUN_004039b8((int *)((int)&param_1->n1 + 8));
    return;
  }
  if (uVar1 == 0x101) {
                    /* WARNING: Could not recover jumptable at 0x004046ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004473e0)();
    return;
  }
  VariantClear(param_1);
  return;
}


