
/* ==== FUN_0046b01c @ 0046b01c ==== 
 * signature: undefined __register FUN_0046b01c(int * param_1)
 * body: 0046b01c-0046b098
 */

void FUN_0046b01c(int *param_1)

{
  POINT pt;
  BOOL BVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  UINT_PTR uIDEvent;
  RECT local_24;
  LONG local_14;
  LONG local_10;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  FUN_0042e2d8(param_1,&local_c.x,&local_14);
  local_c.x = local_14;
  local_c.y = local_10;
  FUN_0042e13c(param_1[0x84],&local_24.left);
  pt.y = local_10;
  pt.x = local_14;
  BVar1 = PtInRect(&local_24,pt);
  if (BVar1 == 0) {
    FUN_00403178(param_1,0,CONCAT31((int3)((uint)extraout_ECX >> 8),8));
  }
  else {
    uIDEvent = 2;
    hWnd = (HWND)FUN_004349e0(param_1);
    KillTimer(hWnd,uIDEvent);
  }
  return;
}


