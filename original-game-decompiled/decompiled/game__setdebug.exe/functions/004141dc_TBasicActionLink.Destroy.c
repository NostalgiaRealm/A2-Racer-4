
/* ==== TBasicActionLink.Destroy @ 004141dc ==== 
 * signature: undefined TBasicActionLink.Destroy(void)
 * body: 004141dc-0041420e
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBasicActionLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[4] != 0) {
    FUN_004143c4(piVar1[4],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


