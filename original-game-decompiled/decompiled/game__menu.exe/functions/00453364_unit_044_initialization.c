
/* ==== unit_044_initialization @ 00453364 ==== 
 * signature: undefined unit_044_initialization(void)
 * body: 00453364-00453399
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_044_initialization(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  bool bVar2;
  
  bVar2 = _DAT_004ac888 == 0;
  _DAT_004ac888 = _DAT_004ac888 + -1;
  if (bVar2) {
    piVar1 = FUN_00452d68(&DAT_00452a8c,param_2,param_3);
    FUN_00453260((int)piVar1,0x453304);
    piVar1 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX);
    FUN_00453260((int)piVar1,0x45331c);
  }
  return;
}


