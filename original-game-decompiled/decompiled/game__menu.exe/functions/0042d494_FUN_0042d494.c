
/* ==== FUN_0042d494 @ 0042d494 ==== 
 * signature: undefined __register FUN_0042d494(int * param_1)
 * body: 0042d494-0042d4c5
 */

void FUN_0042d494(int *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_00419558(param_1,0);
    FUN_00410764(DAT_004ac78c,(int)param_1);
    ReleaseDC((HWND)param_1[0x18],(HDC)param_1[0x17]);
    param_1[0x17] = 0;
  }
  return;
}


