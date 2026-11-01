
/* ==== TDaviSliderNeedle.Destroy @ 0046a7ec ==== 
 * signature: undefined TDaviSliderNeedle.Destroy(void)
 * body: 0046a7ec-0046a814
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviSliderNeedle_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  TDaviGraphicButton_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


