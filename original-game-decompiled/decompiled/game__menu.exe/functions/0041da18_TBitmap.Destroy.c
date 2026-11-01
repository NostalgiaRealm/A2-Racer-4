
/* ==== TBitmap.Destroy @ 0041da18 ==== 
 * signature: undefined TBitmap.Destroy(void)
 * body: 0041da18-0041da53
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBitmap_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0041e0c4((int)piVar1);
  FUN_0041cf14((int *)piVar1[8]);
  FUN_00402f9c((int *)piVar1[9]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


