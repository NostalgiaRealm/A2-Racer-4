
/* ==== TMemoryStream.Destroy @ 004129f0 ==== 
 * signature: undefined __register TMemoryStream.Destroy(int * param_1, char param_2)
 * body: 004129f0-00412a1b
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMemoryStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00412a1c(piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


