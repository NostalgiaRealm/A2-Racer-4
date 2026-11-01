
/* ==== unit_096_initialization @ 004769d0 ==== 
 * signature: undefined unit_096_initialization(void)
 * body: 004769d0-004769ea
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_096_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ad1f4 == 0;
  _DAT_004ad1f4 = _DAT_004ad1f4 + -1;
  if (bVar1) {
    FUN_00402c30(&DAT_004ad1f8,0xb4,0);
  }
  return;
}


