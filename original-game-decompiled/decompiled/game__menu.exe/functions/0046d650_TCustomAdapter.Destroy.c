
/* ==== TCustomAdapter.Destroy @ 0046d650 ==== 
 * signature: undefined TCustomAdapter.Destroy(void)
 * body: 0046d650-0046d67b
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomAdapter_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0046d70c((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


