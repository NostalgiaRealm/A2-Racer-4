
/* ==== FUN_00465c38 @ 00465c38 ==== 
 * signature: undefined FUN_00465c38(void)
 * body: 00465c38-00465c7a
 */

void FUN_00465c38(int *param_1,LONG *param_2,char param_3)

{
  bool bVar1;
  HWND hWnd;
  int iVar2;
  RECT *pRVar3;
  byte bVar4;
  RECT RStack_14;
  
  bVar4 = 0;
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    pRVar3 = &RStack_14;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      pRVar3->left = *param_2;
      param_2 = param_2 + (uint)bVar4 * -2 + 1;
      pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    iVar2 = -(uint)(param_3 != '\0');
    pRVar3 = &RStack_14;
    hWnd = (HWND)FUN_004349e0(param_1);
    InvalidateRect(hWnd,pRVar3,iVar2);
  }
  return;
}


