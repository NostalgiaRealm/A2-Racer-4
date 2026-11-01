
/* ==== TBasicAction.Destroy @ 00415e74 ==== 
 * signature: undefined __register TBasicAction.Destroy(int * param_1, char param_2)
 * body: 00415e74-00415ebd
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBasicAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_00410398((undefined4 *)piVar1[0x10]);
    FUN_00415f78((int)piVar1,iVar2);
  }
  FUN_00402f9c((int *)piVar1[0x10]);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


