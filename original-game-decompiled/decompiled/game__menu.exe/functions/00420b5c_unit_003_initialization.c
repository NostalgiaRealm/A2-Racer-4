
/* ==== unit_003_initialization @ 00420b5c ==== 
 * signature: undefined unit_003_initialization(void)
 * body: 00420b5c-00420b6a
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_003_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac6e0 == 0;
  _DAT_004ac6e0 = _DAT_004ac6e0 + -1;
  if (bVar1) {
    FUN_00420ac0();
  }
  return;
}


