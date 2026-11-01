
/* ==== unit_086_initialization @ 0046ce8c ==== 
 * signature: undefined unit_086_initialization(void)
 * body: 0046ce8c-0046cedc
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_086_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ad1a8 == 0;
  _DAT_004ad1a8 = _DAT_004ad1a8 + -1;
  if (bVar1) {
    FUN_0046c434();
    *(code **)PTR_PTR_004ab8d4 = FUN_0046ca60;
    *(code **)PTR_PTR_004ab664 = FUN_0046ccb8;
    *(code **)PTR_DAT_004ab928 = FUN_0046c538;
    if (*PTR_DAT_004ab5f0 == '\0') {
      DAT_004ad1b4 = *(undefined4 *)PTR_DAT_004ab80c;
      *(code **)PTR_DAT_004ab80c = FUN_0046cd94;
    }
  }
  return;
}


