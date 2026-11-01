
/* ==== TBrush.get_Color @ 004189dc ==== 
 * signature: undefined4 __register TBrush.get_Color(int param_1)
 * body: 004189dc-004189e2
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TBrush_get_Color(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


