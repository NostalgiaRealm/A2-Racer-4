
/* ==== TDaviGraphicDef.set_TransparentMode @ 0045e05c ==== 
 * signature: undefined __register TDaviGraphicDef.set_TransparentMode(int param_1, char param_2)
 * body: 0045e05c-0045e072
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicDef_set_TransparentMode(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x55)) {
    *(char *)(param_1 + 0x55) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


