
/* ==== TControl.vmt_014 @ 0042dc74 ==== 
 * signature: undefined __register TControl.vmt_014(int * param_1, int * param_2)
 * body: 0042dc74-0042dd04
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_014(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 8;
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  uVar3 = extraout_ECX;
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,piVar1);
    uVar3 = extraout_ECX_00;
  }
  TComponent_vmt_014(param_1,param_2,uVar3);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfff7;
  if (param_1[9] != 0) {
    FUN_0042f720((int)param_1,0xb009,0,0);
    FUN_0042f720((int)param_1,0xb008,0,0);
    FUN_0042f720((int)param_1,0xb023,0,0);
    FUN_0042f720((int)param_1,0xb035,0,0);
    FUN_0042f720((int)param_1,0xb03d,0,0);
  }
  return;
}


