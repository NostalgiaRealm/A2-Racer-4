
/* ==== TDataList.Destroy @ 0045e574 ==== 
 * signature: undefined __register TDataList.Destroy(int * param_1, char param_2)
 * body: 0045e574-0045e5b0
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDataList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0045e860((int)piVar1);
  FUN_00402f9c((int *)piVar1[3]);
  piVar1[3] = 0;
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


