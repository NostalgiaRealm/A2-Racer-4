
/* ==== TDaviButton.get_Kind @ 004768a4 ==== 
 * signature: undefined1 __register TDaviButton.get_Kind(int param_1)
 * body: 004768a4-004768ff
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined1 TDaviButton_get_Kind(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x208) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x208);
    if (((((bVar1 == 1) != (bool)*(char *)(param_1 + 0x1f8)) ||
         ((bVar1 == 2) != (bool)*(char *)(param_1 + 0x1f9))) ||
        (*(int *)(&DAT_004ab3a4 + (bVar1 & 0x7f) * 4) != *(int *)(param_1 + 0x1fc))) ||
       (*(char *)(param_1 + 0x210) != '\0')) {
      *(undefined1 *)(param_1 + 0x208) = 0;
    }
  }
  return *(undefined1 *)(param_1 + 0x208);
}


