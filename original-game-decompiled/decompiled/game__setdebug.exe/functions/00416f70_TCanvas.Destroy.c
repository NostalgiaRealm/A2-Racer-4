
/* ==== TCanvas.Destroy @ 00416f70 ==== 
 * signature: undefined __register TCanvas.Destroy(int * param_1, char param_2)
 * body: 00416f70-00416fca
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040f3a0(DAT_004476a0,(int)piVar1);
  FUN_004174b0(piVar1,0);
  FUN_00402d14((int *)piVar1[3]);
  FUN_00402d14((int *)piVar1[4]);
  FUN_00402d14((int *)piVar1[5]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xe));
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


