
/* ==== TChangeLink.Destroy @ 00431238 ==== 
 * signature: undefined TChangeLink.Destroy(void)
 * body: 00431238-0043126a
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TChangeLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_00430bc0(piVar1[1],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


