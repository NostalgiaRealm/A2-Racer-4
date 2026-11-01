
/* ==== TCustomAction.Destroy @ 0042f9cc ==== 
 * signature: undefined TCustomAction.Destroy(void)
 * body: 0042f9cc-0042fa00
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  uint extraout_EDX;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x1e]);
  FUN_00402d14((int *)piVar1[0x1f]);
  func_0x0042f3ac(piVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403064(piVar1);
  }
  return;
}


