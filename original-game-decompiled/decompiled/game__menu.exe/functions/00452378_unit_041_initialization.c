
/* ==== unit_041_initialization @ 00452378 ==== 
 * signature: undefined unit_041_initialization(void)
 * body: 00452378-0045238b
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_041_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac86c == 0;
  _DAT_004ac86c = _DAT_004ac86c + -1;
  if (bVar1) {
    FUN_00403a68((int *)&DAT_00452364);
  }
  return;
}


