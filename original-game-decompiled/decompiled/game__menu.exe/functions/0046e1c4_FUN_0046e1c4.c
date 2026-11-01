
/* ==== FUN_0046e1c4 @ 0046e1c4 ==== 
 * signature: undefined __register FUN_0046e1c4(LONG * param_1, LPPOINT param_2)
 * body: 0046e1c4-0046e209
 */

void FUN_0046e1c4(LONG *param_1,LPPOINT param_2)

{
  LONG LVar1;
  LONG LVar2;
  HDC hdc;
  
  LVar1 = *param_1;
  LVar2 = param_1[1];
  hdc = GetDC((HWND)0x0);
  SetMapMode(hdc,3);
  param_2->x = LVar1;
  param_2->y = LVar2;
  param_2->y = -param_2->y;
  LPtoDP(hdc,param_2,1);
  ReleaseDC((HWND)0x0,hdc);
  return;
}


