
/* ==== TFont.get_Charset @ 0041853c ==== 
 * signature: undefined TFont.get_Charset(void)
 * body: 0041853c-00418542
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TFont_get_Charset(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1a));
}


