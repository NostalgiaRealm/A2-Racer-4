
/* ==== TCustomActionList.Destroy @ 00439820 ==== 
 * signature: undefined TCustomActionList.Destroy(void)
 * body: 00439820-0043986d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomActionList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[10]);
  while (0 < (int)((undefined4 *)piVar1[9])[2]) {
    piVar2 = (int *)FUN_00410398((undefined4 *)piVar1[9]);
    FUN_00402f9c(piVar2);
  }
  FUN_00402f9c((int *)piVar1[9]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


