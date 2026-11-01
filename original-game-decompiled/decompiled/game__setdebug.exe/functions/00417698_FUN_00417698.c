
/* ==== FUN_00417698 @ 00417698 ==== 
 * signature: undefined FUN_00417698(void)
 * body: 00417698-004176b5
 */

void FUN_00417698(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 4) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
    SelectObject(*(HDC *)(param_1 + 4),DAT_00447654);
  }
  return;
}


