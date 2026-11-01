
/* ==== TCanvas.Destroy @ 00418bf8 ==== 
 * signature: undefined __register TCanvas.Destroy(int * param_1, char param_2)
 * body: 00418bf8-00418c52
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00410764(DAT_004ac6a8,(int)piVar1);
  FUN_00419558(piVar1,0);
  FUN_00402f9c((int *)piVar1[3]);
  FUN_00402f9c((int *)piVar1[4]);
  FUN_00402f9c((int *)piVar1[5]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xe));
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


