
/* ==== unit_037_initialization @ 00451958 ==== 
 * signature: undefined unit_037_initialization(void)
 * body: 00451958-00451970
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_037_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac820 == 0;
  _DAT_004ac820 = _DAT_004ac820 + -1;
  if (bVar1) {
    FUN_00403a48((int *)&DAT_00451844);
    FUN_004517a8();
  }
  return;
}


