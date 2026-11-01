
/* ==== TBasicActionLink.Destroy @ 00415d90 ==== 
 * signature: undefined TBasicActionLink.Destroy(void)
 * body: 00415d90-00415dc2
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBasicActionLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[4] != 0) {
    FUN_00415f78(piVar1[4],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


