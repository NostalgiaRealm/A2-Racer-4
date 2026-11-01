
/* ==== unit_065_initialization @ 0045b6ac ==== 
 * signature: undefined unit_065_initialization(void)
 * body: 0045b6ac-0045b6cd
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_065_initialization(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = _DAT_004ac900 == 0;
  _DAT_004ac900 = _DAT_004ac900 + -1;
  if (bVar2) {
    piVar1 = FUN_00452d68(&DAT_00452a8c,param_2,param_3);
    FUN_00453260((int)piVar1,0x45b09c);
  }
  return;
}


