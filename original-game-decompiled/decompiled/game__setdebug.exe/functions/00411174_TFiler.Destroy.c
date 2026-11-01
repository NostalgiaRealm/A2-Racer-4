
/* ==== TFiler.Destroy @ 00411174 ==== 
 * signature: undefined __register TFiler.Destroy(int * param_1, char param_2)
 * body: 00411174-0041119b
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFiler_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[2] != 0) {
    FUN_004026d0(piVar1[2]);
  }
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


