
/* ==== TFont.Destroy @ 0041640c ==== 
 * signature: undefined TFont.Destroy(void)
 * body: 0041640c-00416431
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFont_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00415ac8(DAT_00447694,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


