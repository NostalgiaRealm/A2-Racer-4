
/* ==== TDaviSoundBuffer.Destroy @ 00481ce4 ==== 
 * signature: undefined TDaviSoundBuffer.Destroy(void)
 * body: 00481ce4-00481d23
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviSoundBuffer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[1] != 0) {
    (**(code **)(*(int *)piVar1[1] + 0x48))();
    FUN_00405860(piVar1 + 1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


