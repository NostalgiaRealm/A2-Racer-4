
/* ==== TControl.Destroy @ 00423ac8 ==== 
 * signature: undefined __register TControl.Destroy(int * param_1, char param_2)
 * body: 00423ac8-00423b7f
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TControl_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  undefined4 auStack_18 [4];
  
  piVar2 = FUN_00403074(param_1,param_2);
  FUN_00441340(*(int *)PTR_DAT_00446c80,(int)piVar2);
  iVar1 = piVar2[0x24];
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x20) & 8) != 0)) {
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
  }
  else {
    FUN_00425780(iVar1,0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
    FUN_004241fc((int)piVar2,auStack_18);
    FUN_00402ef0(piVar2,0xffffffff,auStack_18);
    piVar2[0x24] = 0;
  }
  FUN_00402d14((int *)piVar2[0x17]);
  piVar2[0x17] = 0;
  FUN_00402d14((int *)piVar2[0x19]);
  FUN_00402d14((int *)piVar2[0x16]);
  FUN_00408254(piVar2[0x15]);
  TComponent_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar2);
  }
  return;
}


