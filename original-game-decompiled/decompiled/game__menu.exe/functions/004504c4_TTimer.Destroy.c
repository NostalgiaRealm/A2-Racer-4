
/* ==== TTimer.Destroy @ 004504c4 ==== 
 * signature: undefined TTimer.Destroy(void)
 * body: 004504c4-004504fb
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TTimer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  *(undefined1 *)(piVar1 + 0xe) = 0;
  FUN_00450570((int)piVar1);
  FUN_004446f0((HWND)piVar1[10]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


