
/* ==== TOleControl.dyn_000f @ 00470cbc ==== 
 * signature: undefined TOleControl.dyn_000f(void)
 * body: 00470cbc-00470d2a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_000f(int *param_1,int param_2)

{
  HWND pHVar1;
  HDC hdcDraw;
  tagPAINTSTRUCT *ptVar2;
  tagPAINTSTRUCT tStack_5c;
  RECT RStack_1c;
  
  ptVar2 = &tStack_5c;
  if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
    TWinControl_dyn_000f(param_1,param_2);
  }
  else {
    hdcDraw = *(HDC *)(param_2 + 4);
    if (hdcDraw == (HDC)0x0) {
      pHVar1 = (HWND)FUN_004349e0(param_1);
      hdcDraw = BeginPaint(pHVar1,ptVar2);
    }
    ptVar2 = &tStack_5c;
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_1c);
    OleDraw((LPUNKNOWN)param_1[0x80],1,hdcDraw,&RStack_1c);
    if (*(int *)(param_2 + 4) == 0) {
      pHVar1 = (HWND)FUN_004349e0(param_1);
      EndPaint(pHVar1,ptVar2);
    }
  }
  return;
}


