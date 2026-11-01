
/* ==== TScrollingWinControl.vmt_0b8 @ 0043ae90 ==== 
 * signature: undefined TScrollingWinControl.vmt_0b8(void)
 * body: 0043ae90-0043aea5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TScrollingWinControl_vmt_0b8(int *param_1,int *param_2)

{
  if (((param_2 != (int *)0x0) && ((*(byte *)(param_2 + 8) & 1) == 0)) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    FUN_0043aea8(param_1,param_2);
  }
  return;
}


