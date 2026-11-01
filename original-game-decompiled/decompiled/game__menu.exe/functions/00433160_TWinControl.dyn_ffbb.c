
/* ==== TWinControl.dyn_ffbb @ 00433160 ==== 
 * signature: undefined TWinControl.dyn_ffbb(void)
 * body: 00433160-004331af
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffbb(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040f7d8(param_3,param_4 & 0xffff);
  iVar2 = FUN_0042f720(param_1,0xb038,param_2,uVar1);
  if ((-1 < iVar2) && (*(short *)(param_1 + 0x18a) != 0)) {
    (**(code **)(param_1 + 0x188))(*(undefined4 *)(param_1 + 0x18c),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}


