
/* ==== TDaviGraphicDef.set_TransparentColor @ 0045e044 ==== 
 * signature: undefined __register TDaviGraphicDef.set_TransparentColor(int param_1, int param_2)
 * body: 0045e044-0045e05a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicDef_set_TransparentColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


