
/* ==== FUN_00419760 @ 00419760 ==== 
 * signature: undefined FUN_00419760(void)
 * body: 00419760-0041977d
 */

void FUN_00419760(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf7;
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac660);
  }
  return;
}


