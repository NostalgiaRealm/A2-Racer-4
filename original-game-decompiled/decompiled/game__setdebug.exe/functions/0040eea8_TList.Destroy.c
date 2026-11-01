
/* ==== TList.Destroy @ 0040eea8 ==== 
 * signature: undefined __register TList.Destroy(int * param_1, char param_2)
 * body: 0040eea8-0040eec7
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  (**(code **)(*piVar1 + 8))();
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


