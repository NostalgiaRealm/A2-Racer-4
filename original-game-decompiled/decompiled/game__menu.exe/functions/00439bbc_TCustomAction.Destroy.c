
/* ==== TCustomAction.Destroy @ 00439bbc ==== 
 * signature: undefined TCustomAction.Destroy(void)
 * body: 00439bbc-00439bf0
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  uint extraout_EDX;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x1e]);
  FUN_00402f9c((int *)piVar1[0x1f]);
  func_0x0043959c(piVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_004032ec(piVar1);
  }
  return;
}


