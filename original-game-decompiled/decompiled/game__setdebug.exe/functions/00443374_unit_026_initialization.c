
/* ==== unit_026_initialization @ 00443374 ==== 
 * signature: undefined unit_026_initialization(void)
 * body: 00443374-00443392
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_026_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004477cc == 0;
  _DAT_004477cc = _DAT_004477cc + -1;
  if (bVar1) {
    FUN_004037c0((int *)&DAT_00443310);
    *(code **)PTR_DAT_00446ad8 = FUN_00439b24;
  }
  return;
}


