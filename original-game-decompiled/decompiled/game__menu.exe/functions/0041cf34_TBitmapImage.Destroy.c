
/* ==== TBitmapImage.Destroy @ 0041cf34 ==== 
 * signature: undefined TBitmapImage.Destroy(void)
 * body: 0041cf34-0041cf8d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBitmapImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[5] != 0) {
    FUN_0041cca0(piVar1[5]);
    DeleteObject((HGDIOBJ)piVar1[5]);
    piVar1[5] = 0;
  }
  (**(code **)*piVar1)();
  if ((HANDLE)piVar1[0x19] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar1[0x19]);
  }
  FUN_0040c968(piVar1 + 0x1b);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


