
/* ==== FUN_004a60f0 @ 004a60f0 ==== 
 * signature: undefined __stdcall FUN_004a60f0(int param_1, int param_2, undefined8 * param_3, undefined4 * param_4, float * param_5)
 * body: 004a60f0-004a636d
 */

void FUN_004a60f0(int param_1,int param_2,undefined8 *param_3,undefined4 *param_4,float *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  int local_2ec;
  undefined ***local_2e4 [4];
  undefined **local_2d4 [3];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [28];
  undefined1 local_29c [16];
  undefined1 local_28c [16];
  undefined1 local_27c [16];
  undefined **local_26c [28];
  undefined4 local_1fc;
  undefined **local_1d4 [28];
  undefined4 local_164;
  undefined **local_13c [28];
  undefined4 local_cc;
  undefined **local_a4 [28];
  undefined4 local_34;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f3d3;
  pvStack_c = ExceptionList;
  if (param_2 != 4) {
    ExceptionList = &pvStack_c;
    puVar2 = FUN_0049df90(local_27c,(byte *)s_Raycast_car_only_support_4_wheel_005af634);
    local_4 = 0;
    puVar3 = FUN_0049df90(local_28c,(byte *)s_Physics_exception_in___s___d__005af050);
    local_4._0_1_ = 1;
    puVar2 = FUN_0047c9a0(local_29c,puVar3,(int)puVar2);
    local_4._0_1_ = 2;
    FUN_00558826(local_2d4);
    local_4._0_1_ = 3;
    FUN_004028f0(local_2c8,'\0');
    local_4._0_1_ = 4;
    local_2d4[0] = &PTR_FUN_005771c8;
    FUN_004093c0(local_2c8,puVar2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2d4,&DAT_00583178);
  }
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_3 + 0x34) = 2;
  FUN_004feac0(local_26c,param_3);
  local_1fc = 0x60ad78ec;
  local_26c[0] = &PTR_FUN_005773b4;
  local_4 = 5;
  FUN_004feac0(local_13c,param_3 + 7);
  local_13c[0] = &PTR_FUN_005773b4;
  local_cc = 0x60ad78ec;
  local_4._0_1_ = 6;
  FUN_004feac0(local_1d4,param_3 + 0xe);
  local_1d4[0] = &PTR_FUN_005773b4;
  local_164 = 0x60ad78ec;
  local_4._0_1_ = 7;
  FUN_004feac0(local_a4,param_3 + 0x15);
  local_a4[0] = &PTR_FUN_005773b4;
  local_34 = 0x60ad78ec;
  local_2e4[1] = local_13c;
  local_2e4[0] = local_26c;
  local_2e4[2] = local_1d4;
  local_2e4[3] = local_a4;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004ff750(local_2b8,5.60519e-45,(int *)local_2e4);
  FUN_004ff730(local_2b8,*(int *)(param_1 + 0x10));
  local_2ec = 4;
  iVar4 = (int)local_2e4 - (int)param_5;
  do {
    iVar1 = *(int *)(iVar4 + (int)param_5);
    if ((*(int *)(iVar1 + 0x70) == 0x60ad78ec) ||
       ((undefined4 *)(iVar1 + 0x74) == (undefined4 *)0x0)) {
      param_4[4] = 0;
      *param_5 = 0.0;
    }
    else {
      puVar6 = (undefined4 *)(iVar1 + 0x74);
      puVar7 = param_4;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      fVar8 = (float10)(**(code **)**(undefined4 **)(*(int *)(iVar1 + 0x84) + 0x98))();
      *param_5 = (float)fVar8;
    }
    param_4 = param_4 + 8;
    param_5 = param_5 + 1;
    local_2ec = local_2ec + -1;
  } while (local_2ec != 0);
  ExceptionList = pvStack_c;
  return;
}


