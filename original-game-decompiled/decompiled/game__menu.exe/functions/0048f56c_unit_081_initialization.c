
/* ==== unit_081_initialization @ 0048f56c ==== 
 * signature: undefined unit_081_initialization(void)
 * body: 0048f56c-0048f590
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_081_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ad45c == 0;
  _DAT_004ad45c = _DAT_004ad45c + -1;
  if (bVar1) {
    FUN_00403a48((int *)&DAT_0048f4b8);
    FUN_00402c30(&DAT_004ad460,0x2c,0);
  }
  return;
}


