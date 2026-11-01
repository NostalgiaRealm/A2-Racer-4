
/* ==== TFont.get_Pitch @ 0041850c ==== 
 * signature: undefined4 __register TFont.get_Pitch(int param_1)
 * body: 0041850c-00418512
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TFont_get_Pitch(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x18));
}


