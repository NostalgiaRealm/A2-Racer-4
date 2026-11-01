
/* ==== TCollection.Destroy @ 00410d68 ==== 
 * signature: undefined TCollection.Destroy(void)
 * body: 00410d68-00410da8
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCollection_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  piVar1[3] = 1;
  if (piVar1[2] != 0) {
    FUN_00410e64(piVar1);
  }
  FUN_00402f9c((int *)piVar1[2]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


