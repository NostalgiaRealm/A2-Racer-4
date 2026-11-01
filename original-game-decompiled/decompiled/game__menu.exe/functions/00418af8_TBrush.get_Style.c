
/* ==== TBrush.get_Style @ 00418af8 ==== 
 * signature: undefined4 __register TBrush.get_Style(int param_1)
 * body: 00418af8-00418afe
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TBrush_get_Style(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


