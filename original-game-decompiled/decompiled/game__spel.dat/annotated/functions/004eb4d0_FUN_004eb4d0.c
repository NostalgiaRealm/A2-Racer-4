
/* ==== FUN_004eb4d0 @ 004eb4d0 ==== 
 * signature: undefined __thiscall FUN_004eb4d0(void * this, int param_1, int param_2, float * param_3)
 * body: 004eb4d0-004eb733
 */

void __thiscall FUN_004eb4d0(void *this,int param_1,int param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [28];
  undefined1 local_64 [28];
  undefined1 local_48 [28];
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005723d2;
  pvStack_c = ExceptionList;
  if (*(char *)((int)this + 0x60) == '\0') {
    ExceptionList = &pvStack_c;
    puVar1 = FUN_0049df90(local_a0,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_004796b0(local_90,puVar1,s_InputManager_not_initted_yet__Ca_005b7910)
    ;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_80,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_80,&DAT_005872d0);
  }
  ExceptionList = &pvStack_c;
  iVar3 = FUN_004eb3f0(this,param_2);
  if (iVar3 == -1) {
    puVar1 = FUN_0049df90(local_90,(byte *)s_Device__s_does_not_exist__005b78f4);
    local_4 = 2;
    puVar4 = FUN_0049df90(local_a0,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 3;
    puVar2 = (undefined4 *)FUN_0047c9a0(local_80,puVar4,(int)puVar1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004edac0(local_64,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_64,&DAT_005872d0);
  }
  iVar5 = FUN_004ea880(this,iVar3,param_1);
  if (iVar5 == 0) {
    puVar1 = FUN_0049df90(local_80,(byte *)s_Command__s_of_device__s_does_not_005b78cc);
    local_4 = 5;
    puVar4 = FUN_0049df90(local_90,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 6;
    puVar2 = (undefined4 *)FUN_0047c9a0(local_a0,puVar4,(int)puVar1);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004edac0(local_64,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_64,&DAT_005872d0);
  }
  if (*(int *)(iVar5 + 4) == 0) {
    puVar1 = FUN_0049df90(local_2c,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 8;
    puVar2 = (undefined4 *)FUN_004796b0(local_1c,puVar1,s_m_InputCommand____NULL_005b79b0);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004edac0(local_48,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_48,&DAT_005872d0);
  }
  uVar6 = FUN_004edd30(*(int *)(iVar5 + 4));
  if (param_3 != (float *)0x0) {
    fVar7 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)((int)this + 8) + 4) + iVar3 * 4) +
                                 0x14))(uVar6);
    *param_3 = (float)fVar7;
  }
  (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 8) + 4) + iVar3 * 4) + 0x10))(uVar6);
  ExceptionList = pvStack_10;
  return;
}


