
/* ==== TClipboardFormats.Destroy @ 0041b1fc ==== 
 * signature: undefined TClipboardFormats.Destroy(void)
 * body: 0041b1fc-0041b224
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TClipboardFormats_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[1]);
  FUN_00402f9c((int *)piVar1[2]);
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


