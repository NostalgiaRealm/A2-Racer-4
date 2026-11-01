
/* ==== unit_077_initialization @ 00461888 ==== 
 * signature: undefined unit_077_initialization(void)
 * body: 00461888-0046189a
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_077_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac934 == 0;
  _DAT_004ac934 = _DAT_004ac934 + -1;
  if (bVar1) {
    FUN_004617a0();
  }
  return;
}


