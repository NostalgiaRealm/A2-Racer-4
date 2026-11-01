
/* ==== TCollectionItem.Destroy @ 00410b7c ==== 
 * signature: undefined __register TCollectionItem.Destroy(int * param_1, char param_2)
 * body: 00410b7c-00410ba9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCollectionItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00410cc8(piVar1,(int *)0x0,extraout_ECX);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


