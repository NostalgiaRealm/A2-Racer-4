
/* ==== TScrollingWinControl.vmt_0b4 @ 00445590 ==== 
 * signature: undefined TScrollingWinControl.vmt_0b4(void)
 * body: 00445590-004455ad
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TScrollingWinControl_vmt_0b4(int param_1)

{
  if ((*(char *)(param_1 + 0x4c) == '\0') &&
     ((*(char *)(param_1 + 0x144) == '\0' || (*(char *)(param_1 + 0x17c) == '\0')))) {
    return 1;
  }
  return 0;
}


