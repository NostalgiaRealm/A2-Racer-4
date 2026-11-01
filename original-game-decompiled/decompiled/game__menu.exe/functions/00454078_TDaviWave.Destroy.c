
/* ==== TDaviWave.Destroy @ 00454078 ==== 
 * signature: undefined __register TDaviWave.Destroy(int * param_1, char param_2)
 * body: 00454078-004540a7
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviWave_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00454164((int)piVar1);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


