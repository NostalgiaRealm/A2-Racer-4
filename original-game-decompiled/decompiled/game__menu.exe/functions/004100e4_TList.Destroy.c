
/* ==== TList.Destroy @ 004100e4 ==== 
 * signature: undefined __register TList.Destroy(int * param_1, char param_2)
 * body: 004100e4-00410103
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  (**(code **)(*piVar1 + 8))();
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


