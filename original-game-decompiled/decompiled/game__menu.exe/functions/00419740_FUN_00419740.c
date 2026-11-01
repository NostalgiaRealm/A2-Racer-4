
/* ==== FUN_00419740 @ 00419740 ==== 
 * signature: undefined FUN_00419740(void)
 * body: 00419740-0041975d
 */

void FUN_00419740(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 4) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac65c);
  }
  return;
}


