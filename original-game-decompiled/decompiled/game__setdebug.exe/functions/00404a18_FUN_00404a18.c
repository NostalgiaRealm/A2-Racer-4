
/* ==== FUN_00404a18 @ 00404a18 ==== 
 * signature: undefined __register FUN_00404a18(int * param_1, VARIANTARG * param_2)
 * body: 00404a18-00404a50
 */

void FUN_00404a18(int *param_1,VARIANTARG *param_2)

{
  _union_2683 local_14;
  
  if ((param_2->n1).n2.vt == 0x100) {
    FUN_00403a0c(param_1,*(undefined4 **)((int)&param_2->n1 + 8));
    return;
  }
  local_14.n2.vt = 0;
  FUN_00404924((VARIANT *)&local_14.n2,param_2,0x100);
  FUN_004039b8(param_1);
  *param_1 = local_14._8_4_;
  return;
}


