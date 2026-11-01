
/* ==== FUN_00429380 @ 00429380 ==== 
 * signature: undefined FUN_00429380(void)
 * body: 00429380-0042939f
 */

void FUN_00429380(int param_1,UINT *param_2)

{
  UINT UVar1;
  
  UVar1 = DefWindowProcA(*(HWND *)(param_1 + 8),*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar1;
  return;
}


