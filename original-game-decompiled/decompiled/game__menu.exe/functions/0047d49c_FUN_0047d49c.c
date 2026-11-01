
/* ==== FUN_0047d49c @ 0047d49c ==== 
 * signature: undefined __register FUN_0047d49c(int * param_1, POINT * param_2, int param_3)
 * body: 0047d49c-0047d4cf
 */

void FUN_0047d49c(int *param_1,POINT *param_2,int param_3)

{
  HRGN hRgn;
  HWND hWnd;
  int iMode;
  BOOL bRedraw;
  
  bRedraw = -1;
  iMode = 2;
  if (SCARRY4(param_3,1)) {
    thunk_FUN_00402808((uint)param_1);
  }
  hRgn = CreatePolygonRgn(param_2,param_3 + 1,iMode);
  hWnd = (HWND)FUN_004349e0(param_1);
  SetWindowRgn(hWnd,hRgn,bRedraw);
  return;
}


