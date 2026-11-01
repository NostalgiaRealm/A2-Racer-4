
/* ==== unit_035_initialization @ 00444ad4 ==== 
 * signature: undefined unit_035_initialization(void)
 * body: 00444ad4-00444aec
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_035_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_00447808 == 0;
  _DAT_00447808 = _DAT_00447808 + -1;
  if (bVar1) {
    FUN_004037c0((int *)&DAT_004449c0);
    FUN_00444924();
  }
  return;
}


