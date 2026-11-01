
/* ==== TPopupMenu.Destroy @ 00441698 ==== 
 * signature: undefined TPopupMenu.Destroy(void)
 * body: 00441698-004416c8
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPopupMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00441608(DAT_004ac7c4,(int)piVar1);
  TMenu_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


