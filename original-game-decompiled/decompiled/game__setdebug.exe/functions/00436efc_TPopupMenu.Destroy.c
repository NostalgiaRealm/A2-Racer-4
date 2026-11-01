
/* ==== TPopupMenu.Destroy @ 00436efc ==== 
 * signature: undefined TPopupMenu.Destroy(void)
 * body: 00436efc-00436f2c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPopupMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00436e6c(DAT_004477b4,(int)piVar1);
  TMenu_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


