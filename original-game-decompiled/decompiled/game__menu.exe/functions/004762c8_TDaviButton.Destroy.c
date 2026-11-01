
/* ==== TDaviButton.Destroy @ 004762c8 ==== 
 * signature: undefined TDaviButton.Destroy(void)
 * body: 004762c8-00476302
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviButton_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  FUN_00402f9c((int *)piVar1[0x81]);
  FUN_00402f9c((int *)piVar1[0x80]);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


