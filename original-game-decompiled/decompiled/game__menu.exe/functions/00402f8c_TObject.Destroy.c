
/* ==== TObject.Destroy @ 00402f8c ==== 
 * signature: undefined __register TObject.Destroy(int * param_1, char param_2)
 * body: 00402f8c-00402f9a
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


