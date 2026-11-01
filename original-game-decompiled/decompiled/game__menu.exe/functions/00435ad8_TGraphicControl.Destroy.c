
/* ==== TGraphicControl.Destroy @ 00435ad8 ==== 
 * signature: undefined __register TGraphicControl.Destroy(int * param_1, char param_2)
 * body: 00435ad8-00435b16
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TGraphicControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1 == DAT_004aa7b8) {
    FUN_0042bbfc((int *)0x0);
  }
  FUN_00402f9c((int *)piVar1[0x48]);
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


