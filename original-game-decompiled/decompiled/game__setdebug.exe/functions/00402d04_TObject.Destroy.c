
/* ==== TObject.Destroy @ 00402d04 ==== 
 * signature: undefined __register TObject.Destroy(int * param_1, char param_2)
 * body: 00402d04-00402d12
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


