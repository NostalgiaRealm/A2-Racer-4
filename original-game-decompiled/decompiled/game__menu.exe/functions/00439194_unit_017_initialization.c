
/* ==== unit_017_initialization @ 00439194 ==== 
 * signature: undefined unit_017_initialization(void)
 * body: 00439194-004391b7
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_017_initialization(void)

{
  DWORD DVar1;
  bool bVar2;
  
  bVar2 = _DAT_004ac754 == 0;
  _DAT_004ac754 = _DAT_004ac754 + -1;
  if (bVar2) {
    DVar1 = GetVersion();
    DAT_004ac750 = 3 < ((ushort)DVar1 & 0xff);
    FUN_00439034();
  }
  return;
}


