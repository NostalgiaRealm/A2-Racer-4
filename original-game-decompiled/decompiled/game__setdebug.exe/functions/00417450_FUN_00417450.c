
/* ==== FUN_00417450 @ 00417450 ==== 
 * signature: undefined __register FUN_00417450(int param_1)
 * body: 00417450-004174a5
 */

void FUN_00417450(int param_1)

{
  if ((*(HDC *)(param_1 + 4) != (HDC)0x0) &&
     (*(byte *)(param_1 + 8) != (*(byte *)(param_1 + 8) & 0xf1))) {
    SelectObject(*(HDC *)(param_1 + 4),DAT_00447654);
    SelectObject(*(HDC *)(param_1 + 4),DAT_00447658);
    SelectObject(*(HDC *)(param_1 + 4),DAT_0044765c);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf1;
  }
  return;
}


