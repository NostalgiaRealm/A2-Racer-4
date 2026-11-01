
/* ==== FUN_004048d4 @ 004048d4 ==== 
 * signature: undefined __register FUN_004048d4(VARIANTARG * param_1, int param_2)
 * body: 004048d4-00404900
 */

void FUN_004048d4(VARIANTARG *param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  FUN_00404614(*(LPCWSTR *)(param_2 + 8),&local_8);
  FUN_004046cc(param_1);
  (param_1->n1).n2.vt = 0x100;
  *(int *)((int)&param_1->n1 + 8) = local_8;
  return;
}


