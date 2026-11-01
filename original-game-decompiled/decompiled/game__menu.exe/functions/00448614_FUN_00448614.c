
/* ==== FUN_00448614 @ 00448614 ==== 
 * signature: undefined __register FUN_00448614(int * param_1)
 * body: 00448614-00448660
 */

void FUN_00448614(int *param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  if (((int *)param_1[0x82] != (int *)0x0) && (param_1[0x8e] == 0)) {
    param_1 = (int *)param_1[0x82];
  }
  pHVar1 = (HWND)FUN_004349e0(param_1);
  SetFocus(pHVar1);
  pHVar1 = (HWND)FUN_004349e0(param_1);
  pHVar2 = GetFocus();
  if (pHVar1 == pHVar2) {
    FUN_0042f720((int)param_1,0xb029,0,0);
  }
  return;
}


