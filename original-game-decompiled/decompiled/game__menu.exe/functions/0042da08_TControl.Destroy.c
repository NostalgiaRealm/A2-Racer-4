
/* ==== TControl.Destroy @ 0042da08 ==== 
 * signature: undefined __register TControl.Destroy(int * param_1, char param_2)
 * body: 0042da08-0042dabf
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TControl_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  undefined4 auStack_18 [4];
  
  piVar2 = FUN_004032fc(param_1,param_2);
  FUN_0044c2e0(*(int *)PTR_DAT_004ab8ac,(int)piVar2);
  iVar1 = piVar2[0x24];
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x20) & 8) != 0)) {
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
  }
  else {
    FUN_0042f720(iVar1,0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
    FUN_0042e13c((int)piVar2,auStack_18);
    FUN_00403178(piVar2,0xffffffff,auStack_18);
    piVar2[0x24] = 0;
  }
  FUN_00402f9c((int *)piVar2[0x17]);
  piVar2[0x17] = 0;
  FUN_00402f9c((int *)piVar2[0x19]);
  FUN_00402f9c((int *)piVar2[0x16]);
  FUN_00408d6c(piVar2[0x15]);
  TComponent_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


