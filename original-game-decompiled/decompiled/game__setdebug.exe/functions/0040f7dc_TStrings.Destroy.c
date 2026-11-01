
/* ==== TStrings.Destroy @ 0040f7dc ==== 
 * signature: undefined __register TStrings.Destroy(int * param_1, char param_2)
 * body: 0040f7dc-0040f809
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStrings_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_004102ac((int)piVar1,(int *)0x0);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


