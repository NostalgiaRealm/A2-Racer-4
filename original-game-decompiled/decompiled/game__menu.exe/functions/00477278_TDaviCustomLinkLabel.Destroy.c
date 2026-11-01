
/* ==== TDaviCustomLinkLabel.Destroy @ 00477278 ==== 
 * signature: undefined TDaviCustomLinkLabel.Destroy(void)
 * body: 00477278-004772b6
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviCustomLinkLabel_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x4e]);
  FUN_00402f9c((int *)piVar1[0x4f]);
  TGraphicControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


