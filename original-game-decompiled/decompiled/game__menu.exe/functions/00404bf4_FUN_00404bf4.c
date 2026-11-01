
/* ==== FUN_00404bf4 @ 00404bf4 ==== 
 * signature: undefined __register FUN_00404bf4(VARIANTARG * param_1, int param_2)
 * body: 00404bf4-00404c20
 */

void FUN_00404bf4(VARIANTARG *param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  FUN_0040492c(*(LPCWSTR *)(param_2 + 8),&local_8);
  FUN_004049ec(param_1);
  (param_1->n1).n2.vt = 0x100;
  *(int *)((int)&param_1->n1 + 8) = local_8;
  return;
}


