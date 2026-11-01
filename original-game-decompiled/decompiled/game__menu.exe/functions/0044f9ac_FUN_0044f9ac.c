
/* ==== FUN_0044f9ac @ 0044f9ac ==== 
 * signature: undefined __register FUN_0044f9ac(int param_1, LPRECT param_2, undefined4 param_3, int param_4)
 * body: 0044f9ac-0044fa0a
 */

void FUN_0044f9ac(int param_1,LPRECT param_2,undefined4 param_3,int param_4)

{
  TPen_set_Width(*(int **)(param_1 + 0x10),1);
  param_2->bottom = param_2->bottom + -1;
  param_2->right = param_2->right + -1;
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_0044f8e8();
    InflateRect(param_2,-1,-1);
  }
  param_2->bottom = param_2->bottom + 1;
  param_2->right = param_2->right + 1;
  return;
}


