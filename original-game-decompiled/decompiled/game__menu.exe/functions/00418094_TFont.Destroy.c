
/* ==== TFont.Destroy @ 00418094 ==== 
 * signature: undefined TFont.Destroy(void)
 * body: 00418094-004180b9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFont_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00417750(DAT_004ac69c,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


