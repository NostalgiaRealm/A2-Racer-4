
/* ==== FUN_0041bd00 @ 0041bd00 ==== 
 * signature: undefined FUN_0041bd00(void)
 * body: 0041bd00-0041bd03
 */

void FUN_0041bd00(int *param_1,char param_2)

{
  int *piVar1;
  HDC hdc;
  HENHMETAFILE pHVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  piVar1 = FUN_004032fc(param_1,param_2);
  hdc = (HDC)FUN_004194d8(piVar1);
  FUN_00419558(piVar1,0);
  pHVar2 = CloseEnhMetaFile(hdc);
  FUN_0041c554((int *)piVar1[0x16],pHVar2,extraout_ECX);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


