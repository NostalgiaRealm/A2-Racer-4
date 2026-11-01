
/* ==== TPen.get_Style @ 004187d4 ==== 
 * signature: undefined TPen.get_Style(void)
 * body: 004187d4-004187da
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TPen_get_Style(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


