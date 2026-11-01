
/* ==== TDaviAnimationLoaderItem.Destroy @ 0045acf8 ==== 
 * signature: undefined TDaviAnimationLoaderItem.Destroy(void)
 * body: 0045acf8-0045ad28
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviAnimationLoaderItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0040c968(piVar1 + 3);
  TCollectionItem_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


