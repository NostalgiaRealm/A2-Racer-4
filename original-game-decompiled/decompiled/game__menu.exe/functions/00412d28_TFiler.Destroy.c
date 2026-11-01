
/* ==== TFiler.Destroy @ 00412d28 ==== 
 * signature: undefined __register TFiler.Destroy(int * param_1, char param_2)
 * body: 00412d28-00412d4f
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFiler_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[2] != 0) {
    FUN_00402794(piVar1[2]);
  }
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


