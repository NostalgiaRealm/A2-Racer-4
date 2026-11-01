
/* ==== TPaletteItem.Destroy @ 00454e34 ==== 
 * signature: undefined TPaletteItem.Destroy(void)
 * body: 00454e34-00454e65
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPaletteItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  DeleteObject((HGDIOBJ)piVar1[4]);
  TCollectionItem_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


