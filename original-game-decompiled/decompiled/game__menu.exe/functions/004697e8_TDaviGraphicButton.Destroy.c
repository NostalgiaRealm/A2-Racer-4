
/* ==== TDaviGraphicButton.Destroy @ 004697e8 ==== 
 * signature: undefined __register TDaviGraphicButton.Destroy(int * param_1, char param_2)
 * body: 004697e8-0046982c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviGraphicButton_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x80]);
  TDaviGraphicButton_set_Definition((int)piVar1,0);
  piVar1[0x85] = 0;
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


