
/* ==== FUN_00423554 @ 00423554 ==== 
 * signature: undefined __register FUN_00423554(int * param_1)
 * body: 00423554-00423585
 */

void FUN_00423554(int *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_004174b0(param_1,0);
    FUN_0040f3a0(DAT_0044777c,(int)param_1);
    ReleaseDC((HWND)param_1[0x18],(HDC)param_1[0x17]);
    param_1[0x17] = 0;
  }
  return;
}


