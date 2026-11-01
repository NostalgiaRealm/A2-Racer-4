
/* ==== FUN_004194f8 @ 004194f8 ==== 
 * signature: undefined __register FUN_004194f8(int param_1)
 * body: 004194f8-0041954d
 */

void FUN_004194f8(int param_1)

{
  if ((*(HDC *)(param_1 + 4) != (HDC)0x0) &&
     (*(byte *)(param_1 + 8) != (*(byte *)(param_1 + 8) & 0xf1))) {
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac65c);
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac660);
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac664);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf1;
  }
  return;
}


