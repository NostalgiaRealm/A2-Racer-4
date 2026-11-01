
/* ==== TBitmapImage.Destroy @ 0041a710 ==== 
 * signature: undefined TBitmapImage.Destroy(void)
 * body: 0041a710-0041a769
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBitmapImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[5] != 0) {
    FUN_0041a47c(piVar1[5]);
    DeleteObject((HGDIOBJ)piVar1[5]);
    piVar1[5] = 0;
  }
  (**(code **)*piVar1)();
  if ((HANDLE)piVar1[0x19] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar1[0x19]);
  }
  FUN_0040bc78(piVar1 + 0x1b);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


