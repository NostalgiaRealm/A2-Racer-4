
/* ==== TStringList.Destroy @ 0041051c ==== 
 * signature: undefined TStringList.Destroy(void)
 * body: 0041051c-00410575
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStringList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  TStrings_Destroy(piVar1,extraout_DL & 0xfc);
  if (piVar1[4] != 0) {
    FUN_00404260((VARIANTARG *)piVar1[3],"\x0e\vTStringItem\b",piVar1[4]);
  }
  piVar1[4] = 0;
  (**(code **)(*piVar1 + 0x28))(piVar1,0);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


