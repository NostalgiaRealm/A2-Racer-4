
/* ==== unit_049_initialization @ 0045385c ==== 
 * signature: undefined unit_049_initialization(void)
 * body: 0045385c-0045387d
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_049_initialization(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = _DAT_004ac894 == 0;
  _DAT_004ac894 = _DAT_004ac894 + -1;
  if (bVar2) {
    piVar1 = FUN_00452d68(&DAT_00452a8c,param_2,param_3);
    FUN_00453260((int)piVar1,0x453814);
  }
  return;
}


