
/* ==== TStrings.Destroy @ 00411294 ==== 
 * signature: undefined __register TStrings.Destroy(int * param_1, char param_2)
 * body: 00411294-004112c1
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStrings_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00411e3c((int)piVar1,(int *)0x0);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


