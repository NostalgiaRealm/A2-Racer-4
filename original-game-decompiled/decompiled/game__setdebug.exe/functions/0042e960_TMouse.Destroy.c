
/* ==== TMouse.Destroy @ 0042e960 ==== 
 * signature: undefined TMouse.Destroy(void)
 * body: 0042e960-0042e98d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMouse_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0042ea0c(piVar1,(HWND)0x0);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


