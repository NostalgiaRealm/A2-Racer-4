
/* ==== TPen.get_Style @ 00416b4c ==== 
 * signature: undefined TPen.get_Style(void)
 * body: 00416b4c-00416b52
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TPen_get_Style(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


