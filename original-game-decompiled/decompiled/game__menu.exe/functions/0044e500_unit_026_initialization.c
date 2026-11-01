
/* ==== unit_026_initialization @ 0044e500 ==== 
 * signature: undefined unit_026_initialization(void)
 * body: 0044e500-0044e51e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_026_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac7dc == 0;
  _DAT_004ac7dc = _DAT_004ac7dc + -1;
  if (bVar1) {
    FUN_00403a48((int *)&DAT_0044e49c);
    *(code **)PTR_DAT_004ab698 = FUN_004444d4;
  }
  return;
}


