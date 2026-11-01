
/* ==== TGameIni.Destroy @ 0048a2bc ==== 
 * signature: undefined TGameIni.Destroy(void)
 * body: 0048a2bc-0048a2fc
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TGameIni_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0045e860(piVar1[7]);
  FUN_0040c968(piVar1 + 7);
  FUN_0040c968(piVar1 + 6);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


