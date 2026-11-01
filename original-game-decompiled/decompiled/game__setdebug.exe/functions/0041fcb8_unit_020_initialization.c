
/* ==== unit_020_initialization @ 0041fcb8 ==== 
 * signature: undefined unit_020_initialization(void)
 * body: 0041fcb8-0041fce8
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_020_initialization(void)

{
  UINT UVar1;
  bool bVar2;
  
  bVar2 = _DAT_00447730 == 0;
  _DAT_00447730 = _DAT_00447730 + -1;
  if (bVar2) {
    UVar1 = RegisterClipboardFormatA("Delphi Picture");
    _DAT_0044772c = (undefined2)UVar1;
    UVar1 = RegisterClipboardFormatA("Delphi Component");
    _DAT_0044772e = (undefined2)UVar1;
    DAT_00447734 = 0;
  }
  return;
}


