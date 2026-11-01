
/* ==== FUN_004864d8 @ 004864d8 ==== 
 * signature: undefined FUN_004864d8(void)
 * body: 004864d8-004864ed
 */

int FUN_004864d8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x244) != 0) {
    iVar1 = TTabSheet_get_PageIndex(*(int *)(param_1 + 0x244));
    return iVar1;
  }
  return -1;
}


