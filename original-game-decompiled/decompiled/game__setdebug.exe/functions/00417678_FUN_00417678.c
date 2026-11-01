
/* ==== FUN_00417678 @ 00417678 ==== 
 * signature: undefined FUN_00417678(void)
 * body: 00417678-00417695
 */

void FUN_00417678(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 2) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
    SelectObject(*(HDC *)(param_1 + 4),DAT_0044765c);
  }
  return;
}


