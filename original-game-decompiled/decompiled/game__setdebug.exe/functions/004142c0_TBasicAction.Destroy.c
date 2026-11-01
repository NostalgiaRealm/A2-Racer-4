
/* ==== TBasicAction.Destroy @ 004142c0 ==== 
 * signature: undefined __register TBasicAction.Destroy(int * param_1, char param_2)
 * body: 004142c0-00414309
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TBasicAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_0040f10c((undefined4 *)piVar1[0x10]);
    FUN_004143c4((int)piVar1,iVar2);
  }
  FUN_00402d14((int *)piVar1[0x10]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


