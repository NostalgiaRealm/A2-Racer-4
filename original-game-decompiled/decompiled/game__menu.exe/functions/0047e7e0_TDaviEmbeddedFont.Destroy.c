
/* ==== TDaviEmbeddedFont.Destroy @ 0047e7e0 ==== 
 * signature: undefined TDaviEmbeddedFont.Destroy(void)
 * body: 0047e7e0-0047e825
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviEmbeddedFont_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0047ebe4((int)piVar1);
  if (piVar1[0xc] != 0) {
    FUN_00402794(piVar1[0xc]);
    piVar1[0xc] = 0;
    piVar1[0xb] = 0;
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


