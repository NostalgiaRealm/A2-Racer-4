
/* ==== FUN_00419720 @ 00419720 ==== 
 * signature: undefined FUN_00419720(void)
 * body: 00419720-0041973d
 */

void FUN_00419720(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 2) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac664);
  }
  return;
}


