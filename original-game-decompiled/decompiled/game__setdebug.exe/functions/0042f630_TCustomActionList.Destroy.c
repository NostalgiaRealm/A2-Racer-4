
/* ==== TCustomActionList.Destroy @ 0042f630 ==== 
 * signature: undefined TCustomActionList.Destroy(void)
 * body: 0042f630-0042f67d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomActionList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[10]);
  while (0 < (int)((undefined4 *)piVar1[9])[2]) {
    piVar2 = (int *)FUN_0040f10c((undefined4 *)piVar1[9]);
    FUN_00402d14(piVar2);
  }
  FUN_00402d14((int *)piVar1[9]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


