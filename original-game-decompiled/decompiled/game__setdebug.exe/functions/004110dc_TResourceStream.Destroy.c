
/* ==== TResourceStream.Destroy @ 004110dc ==== 
 * signature: undefined TResourceStream.Destroy(void)
 * body: 004110dc-00411111
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TResourceStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00406984();
  FreeResource((HGLOBAL)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


