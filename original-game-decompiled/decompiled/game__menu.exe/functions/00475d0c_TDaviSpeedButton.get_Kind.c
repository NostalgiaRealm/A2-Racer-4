
/* ==== TDaviSpeedButton.get_Kind @ 00475d0c ==== 
 * signature: undefined TDaviSpeedButton.get_Kind(void)
 * body: 00475d0c-00475d2b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined1 TDaviSpeedButton_get_Kind(int param_1)

{
  if ((*(char *)(param_1 + 0x13c) != '\0') && (*(char *)(param_1 + 0x144) != '\0')) {
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  return *(undefined1 *)(param_1 + 0x13c);
}


