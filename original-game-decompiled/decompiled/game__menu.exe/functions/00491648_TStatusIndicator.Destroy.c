
/* ==== TStatusIndicator.Destroy @ 00491648 ==== 
 * signature: undefined __register TStatusIndicator.Destroy(int * param_1, char param_2)
 * body: 00491648-00491680
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStatusIndicator_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0040c968(piVar1 + 1);
  FUN_0040c968(piVar1 + 2);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


