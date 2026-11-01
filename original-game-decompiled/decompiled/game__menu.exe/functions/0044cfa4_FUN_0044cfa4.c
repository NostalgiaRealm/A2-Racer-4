
/* ==== FUN_0044cfa4 @ 0044cfa4 ==== 
 * signature: undefined4 __register FUN_0044cfa4(int param_1, int * param_2)
 * body: 0044cfa4-0044d05b
 */

undefined4 FUN_0044cfa4(int param_1,int *param_2)

{
  int *piVar1;
  HWND pHVar2;
  HANDLE pvVar3;
  LRESULT LVar4;
  LONG LVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if ((0xff < (uint)param_2[1]) && ((uint)param_2[1] < 0x109)) {
    pHVar2 = GetCapture();
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = (HWND)*param_2;
      piVar1 = *(int **)(param_1 + 0x38);
      if ((piVar1 == (int *)0x0) || (pHVar2 != (HWND)piVar1[0x8f])) {
        while( true ) {
          pvVar3 = FUN_0042b94c(pHVar2);
          if ((pvVar3 != (HANDLE)0x0) || (pHVar2 == (HWND)0x0)) break;
          pHVar2 = GetParent(pHVar2);
        }
        if (pHVar2 == (HWND)0x0) {
          pHVar2 = (HWND)*param_2;
        }
      }
      else {
        pHVar2 = (HWND)FUN_004349e0(piVar1);
      }
      LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
      if (LVar4 != 0) {
        uVar6 = 1;
      }
    }
    else {
      LVar5 = GetWindowLongA(pHVar2,-6);
      if (LVar5 == DAT_004ac4dc) {
        LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar4 != 0) {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}


