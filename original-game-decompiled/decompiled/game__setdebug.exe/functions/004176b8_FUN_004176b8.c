
/* ==== FUN_004176b8 @ 004176b8 ==== 
 * signature: undefined FUN_004176b8(void)
 * body: 004176b8-004176d5
 */

void FUN_004176b8(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf7;
    SelectObject(*(HDC *)(param_1 + 4),DAT_00447658);
  }
  return;
}


