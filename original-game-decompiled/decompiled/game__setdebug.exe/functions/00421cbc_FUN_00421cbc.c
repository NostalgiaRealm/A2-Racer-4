
/* ==== FUN_00421cbc @ 00421cbc ==== 
 * signature: undefined __register FUN_00421cbc(int * param_1)
 * body: 00421cbc-00421cfd
 */

void FUN_00421cbc(int *param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  
  ReleaseCapture();
  DAT_004466e4 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_vmt_000_00420fa8);
    piVar2 = param_1;
    if ((char)uVar1 == '\0') {
      if (param_1[9] == 0) {
        return;
      }
      piVar2 = (int *)param_1[9];
      DAT_004466e4 = param_1;
    }
    hWnd = (HWND)FUN_0042a8b4(piVar2);
    SetCapture(hWnd);
  }
  return;
}


