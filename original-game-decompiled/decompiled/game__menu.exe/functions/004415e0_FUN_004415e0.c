
/* ==== FUN_004415e0 @ 004415e0 ==== 
 * signature: undefined __register FUN_004415e0(int * param_1, int param_2)
 * body: 004415e0-00441605
 */

void FUN_004415e0(int *param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_1[2] == 0) {
    pHVar1 = FUN_0044463c();
    param_1[4] = (int)pHVar1;
  }
  FUN_00410104(param_1,param_2);
  return;
}


