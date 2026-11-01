
/* ==== unit_017_initialization @ 0042efe0 ==== 
 * signature: undefined unit_017_initialization(void)
 * body: 0042efe0-0042f003
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_017_initialization(void)

{
  DWORD DVar1;
  bool bVar2;
  
  bVar2 = _DAT_00447744 == 0;
  _DAT_00447744 = _DAT_00447744 + -1;
  if (bVar2) {
    DVar1 = GetVersion();
    DAT_00447740 = 3 < ((ushort)DVar1 & 0xff);
    FUN_0042ee80();
  }
  return;
}


