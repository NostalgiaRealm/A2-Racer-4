
/* ==== TDaviGraphicDef.set_Height @ 0045e08c ==== 
 * signature: undefined __register TDaviGraphicDef.set_Height(int param_1, int param_2)
 * body: 0045e08c-0045e0a2
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicDef_set_Height(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


