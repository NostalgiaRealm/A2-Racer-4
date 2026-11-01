
/* ==== TResourceStream.Destroy @ 00412c90 ==== 
 * signature: undefined TResourceStream.Destroy(void)
 * body: 00412c90-00412cc5
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TResourceStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00407098();
  FreeResource((HGLOBAL)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


