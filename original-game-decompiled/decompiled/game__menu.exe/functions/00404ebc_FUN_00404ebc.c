
/* ==== FUN_00404ebc @ 00404ebc ==== 
 * signature: undefined __register FUN_00404ebc(VARIANTARG * param_1, char param_2)
 * body: 00404ebc-00404ed8
 */

void FUN_00404ebc(VARIANTARG *param_1,char param_2)

{
  if (7 < (param_1->n1).n2.vt) {
    FUN_004049ec(param_1);
  }
  (param_1->n1).n2.vt = 0xb;
  *(ushort *)((int)&param_1->n1 + 8) = -(ushort)(param_2 != '\0');
  return;
}


