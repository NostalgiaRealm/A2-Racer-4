
/* ==== FUN_004049ec @ 004049ec ==== 
 * signature: undefined __register FUN_004049ec(VARIANTARG * param_1)
 * body: 004049ec-00404a2d
 */

void FUN_004049ec(VARIANTARG *param_1)

{
  ushort uVar1;
  
  uVar1 = (param_1->n1).n2.vt;
  if (((uVar1 & 0x4000) != 0) || (uVar1 < 8)) {
    (param_1->n1).n2.vt = 0;
    return;
  }
  if (uVar1 == 0x100) {
    (param_1->n1).n2.vt = 0;
    FUN_00403c5c((int *)((int)&param_1->n1 + 8));
    return;
  }
  if (uVar1 == 0x101) {
                    /* WARNING: Could not recover jumptable at 0x00404a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004ac3e8)();
    return;
  }
  VariantClear(param_1);
  return;
}


