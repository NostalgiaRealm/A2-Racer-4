
/* ==== TDataObject.Destroy @ 0045e408 ==== 
 * signature: undefined __register TDataObject.Destroy(int * param_1, char param_2)
 * body: 0045e408-0045e440
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDataObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0x40))();
  FUN_0040c968(piVar1 + 1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


