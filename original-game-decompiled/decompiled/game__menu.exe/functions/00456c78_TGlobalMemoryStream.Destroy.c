
/* ==== TGlobalMemoryStream.Destroy @ 00456c78 ==== 
 * signature: undefined __register TGlobalMemoryStream.Destroy(int * param_1, char param_2)
 * body: 00456c78-00456cb4
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TGlobalMemoryStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  GlobalUnlock((HGLOBAL)piVar1[5]);
  FUN_0041298c((int)piVar1,0,0);
  TMemoryStream_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


