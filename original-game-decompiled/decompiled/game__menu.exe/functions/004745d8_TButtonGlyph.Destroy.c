
/* ==== TButtonGlyph.Destroy @ 004745d8 ==== 
 * signature: undefined TButtonGlyph.Destroy(void)
 * body: 004745d8-00474633
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TButtonGlyph_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[1]);
  FUN_00474634((int)piVar1);
  if (DAT_004ab458 != (int *)0x0) {
    uVar2 = FUN_00474538((int)DAT_004ab458);
    if ((char)uVar2 != '\0') {
      FUN_00402f9c(DAT_004ab458);
      DAT_004ab458 = (int *)0x0;
    }
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


