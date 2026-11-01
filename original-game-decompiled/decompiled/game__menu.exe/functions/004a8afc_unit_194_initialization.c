
/* ==== unit_194_initialization @ 004a8afc ==== 
 * signature: undefined unit_194_initialization(void)
 * body: 004a8afc-004a8b1d
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_194_initialization(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = _DAT_004ad588 == 0;
  _DAT_004ad588 = _DAT_004ad588 + -1;
  if (bVar2) {
    piVar1 = FUN_00452d68(&DAT_00452a8c,param_2,param_3);
    FUN_00453260((int)piVar1,0x4a8374);
  }
  return;
}


