
/* ==== TFont.get_Charset @ 004168b4 ==== 
 * signature: undefined TFont.get_Charset(void)
 * body: 004168b4-004168ba
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TFont_get_Charset(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1a));
}


