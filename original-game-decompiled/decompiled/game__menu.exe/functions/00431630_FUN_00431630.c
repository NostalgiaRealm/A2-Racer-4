
/* ==== FUN_00431630 @ 00431630 ==== 
 * signature: undefined __register FUN_00431630(int * param_1, int * param_2, undefined4 param_3)
 * body: 00431630-00431701
 */

void FUN_00431630(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00403178(param_2,param_1,param_3);
  FUN_0042f720((int)param_1,0xb02c,param_2,1);
  FUN_0043159c((int)param_1,param_2);
  if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
    FUN_0042f720((int)param_2,0xb009,0,0);
    FUN_0042f720((int)param_2,0xb008,0,0);
    FUN_0042f720((int)param_2,0xb023,0,0);
    FUN_0042f720((int)param_2,0xb03d,0,0);
    uVar2 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
    if ((char)uVar2 == '\0') {
      bVar1 = FUN_00434cdc((int)param_1);
      if (bVar1) {
        (**(code **)(*param_2 + 0x74))();
      }
    }
    else {
      FUN_0042f720((int)param_2,0xb011,0,0);
      FUN_00431f54(param_1);
    }
    FUN_00431290(param_1,param_2);
  }
  FUN_0042f720((int)param_1,0xb036,param_2,1);
  return;
}


