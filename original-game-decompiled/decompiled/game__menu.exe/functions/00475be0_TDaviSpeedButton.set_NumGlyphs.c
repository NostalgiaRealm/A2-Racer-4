
/* ==== TDaviSpeedButton.set_NumGlyphs @ 00475be0 ==== 
 * signature: undefined TDaviSpeedButton.set_NumGlyphs(void)
 * body: 00475be0-00475c0a
 * note: Name source: Delphi RTTI property accessor
 */

/* WARNING: Removing unreachable block (ram,0x00475be7) */
/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_NumGlyphs(int *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[0x4d] + 0x20)) {
    FUN_00474724(param_1[0x4d],param_2);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


