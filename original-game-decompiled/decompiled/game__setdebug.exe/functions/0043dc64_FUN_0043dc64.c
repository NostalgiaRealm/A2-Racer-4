
/* ==== FUN_0043dc64 @ 0043dc64 ==== 
 * signature: undefined __register FUN_0043dc64(int * param_1)
 * body: 0043dc64-0043dcb0
 */

void FUN_0043dc64(int *param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  if (((int *)param_1[0x82] != (int *)0x0) && (param_1[0x8e] == 0)) {
    param_1 = (int *)param_1[0x82];
  }
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  SetFocus(pHVar1);
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  pHVar2 = GetFocus();
  if (pHVar1 == pHVar2) {
    FUN_00425780((int)param_1,0xb029,0,0);
  }
  return;
}


