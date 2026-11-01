
/* ==== TGraphicControl.Destroy @ 0042b968 ==== 
 * signature: undefined __register TGraphicControl.Destroy(int * param_1, char param_2)
 * body: 0042b968-0042b9a6
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TGraphicControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1 == DAT_004466e4) {
    FUN_00421cbc((int *)0x0);
  }
  FUN_00402d14((int *)piVar1[0x48]);
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


