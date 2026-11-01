
/* ==== FUN_0042bbfc @ 0042bbfc ==== 
 * signature: undefined __register FUN_0042bbfc(int * param_1)
 * body: 0042bbfc-0042bc3d
 */

void FUN_0042bbfc(int *param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  
  ReleaseCapture();
  DAT_004aa7b8 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_0042ac0c);
    piVar2 = param_1;
    if ((char)uVar1 == '\0') {
      if (param_1[9] == 0) {
        return;
      }
      piVar2 = (int *)param_1[9];
      DAT_004aa7b8 = param_1;
    }
    hWnd = (HWND)FUN_004349e0(piVar2);
    SetCapture(hWnd);
  }
  return;
}


