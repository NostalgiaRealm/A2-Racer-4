
/* ==== TBitmapCanvas.Destroy @ 0041a534 ==== 
 * signature: undefined TBitmapCanvas.Destroy(void)
 * body: 0041a534-0041a55f
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBitmapCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041a560(piVar1);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


