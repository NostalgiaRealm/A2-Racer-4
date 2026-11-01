
/* ==== FUN_00427690 @ 00427690 ==== 
 * signature: undefined __register FUN_00427690(int * param_1, int * param_2, undefined4 param_3)
 * body: 00427690-00427761
 */

void FUN_00427690(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00402ef0(param_2,param_1,param_3);
  FUN_00425780((int)param_1,0xb02c,param_2,1);
  FUN_004275fc((int)param_1,param_2);
  if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
    FUN_00425780((int)param_2,0xb009,0,0);
    FUN_00425780((int)param_2,0xb008,0,0);
    FUN_00425780((int)param_2,0xb023,0,0);
    FUN_00425780((int)param_2,0xb03d,0,0);
    uVar2 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_vmt_000_00420fa8);
    if ((char)uVar2 == '\0') {
      bVar1 = FUN_0042abb0((int)param_1);
      if (bVar1) {
        (**(code **)(*param_2 + 0x74))();
      }
    }
    else {
      FUN_00425780((int)param_2,0xb011,0,0);
      FUN_00427fb4(param_1);
    }
    FUN_004272f0(param_1,param_2);
  }
  FUN_00425780((int)param_1,0xb036,param_2,1);
  return;
}


