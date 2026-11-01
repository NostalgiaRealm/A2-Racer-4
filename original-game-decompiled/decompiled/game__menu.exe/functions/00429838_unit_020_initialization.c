
/* ==== unit_020_initialization @ 00429838 ==== 
 * signature: undefined unit_020_initialization(void)
 * body: 00429838-00429868
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_020_initialization(void)

{
  UINT UVar1;
  bool bVar2;
  
  bVar2 = _DAT_004ac740 == 0;
  _DAT_004ac740 = _DAT_004ac740 + -1;
  if (bVar2) {
    UVar1 = RegisterClipboardFormatA("Delphi Picture");
    _DAT_004ac73c = (undefined2)UVar1;
    UVar1 = RegisterClipboardFormatA("Delphi Component");
    _DAT_004ac73e = (undefined2)UVar1;
    DAT_004ac744 = 0;
  }
  return;
}


