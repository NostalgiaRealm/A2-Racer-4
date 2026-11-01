
/* ==== TDaviButton.set_NumGlyphs @ 00476920 ==== 
 * signature: undefined __register TDaviButton.set_NumGlyphs(int * param_1, byte param_2)
 * body: 00476920-0047694a
 * note: Name source: Delphi RTTI property accessor
 */

/* WARNING: Removing unreachable block (ram,0x00476927) */
/* Name source: Delphi RTTI property accessor */

void TDaviButton_set_NumGlyphs(int *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[0x81] + 0x20)) {
    FUN_00474724(param_1[0x81],param_2);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


