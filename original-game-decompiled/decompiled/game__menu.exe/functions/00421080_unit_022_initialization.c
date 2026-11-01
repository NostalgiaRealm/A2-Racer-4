
/* ==== unit_022_initialization @ 00421080 ==== 
 * signature: undefined unit_022_initialization(void)
 * body: 00421080-0042108e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_022_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac724 == 0;
  _DAT_004ac724 = _DAT_004ac724 + -1;
  if (bVar1) {
    FUN_00420dcc();
  }
  return;
}


