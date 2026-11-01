
/* ==== FUN_004f1e50 @ 004f1e50 ==== 
 * signature: undefined __fastcall FUN_004f1e50(int param_1)
 * body: 004f1e50-004f204d
 */

void __fastcall FUN_004f1e50(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_84 [12];
  undefined1 auStack_78 [4];
  undefined1 local_74 [24];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 local_44 [20];
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572dd9;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0xa4) != 0) {
    ExceptionList = &pvStack_c;
    puVar1 = FUN_0049df90(local_84,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_004796b0(local_74,puVar1,s_DirectInput_device_already_initt_005b8eb4)
    ;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_44,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_44,&DAT_005872d0);
  }
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004f1ca0();
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (iVar4 != 0) {
    puVar1 = FUN_0049df90(local_84,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_14 = 2;
    puVar2 = (undefined4 *)
             FUN_004796b0(&stack0xffffff6c,puVar1,s_DInput__Could_not_create_device__005b8e90);
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    FUN_004edac0(auStack_54,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_54,&DAT_005872d0);
  }
  *(undefined4 *)(param_1 + 0xac) = 0x2c;
  piVar3 = (int *)FUN_004f1d30(param_1);
  iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,(undefined4 *)(param_1 + 0xac));
  if (iVar4 != 0) {
    puVar1 = FUN_0049df90(&stack0xffffff74,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_1c = 4;
    puVar2 = (undefined4 *)
             FUN_004796b0(&stack0xffffff64,puVar1,s_DInput__Could_not_get_device_cap_005b8e64);
    uStack_1c = CONCAT31(uStack_1c._1_3_,5);
    FUN_004edac0(auStack_5c,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_5c,&DAT_005872d0);
  }
  puVar2 = (undefined4 *)FUN_004f1d30(param_1);
  iVar4 = (**(code **)*puVar2)(puVar2,&DAT_00578db0,param_1 + 0xa8);
  if (iVar4 != 0) {
    puVar1 = FUN_0049df90(&stack0xffffff78,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_28 = 6;
    puVar2 = (undefined4 *)
             FUN_004796b0(auStack_78,puVar1,s_DIError___Could_not_get_IDirectI_005b8e2c);
    uStack_28 = CONCAT31(uStack_28._1_3_,7);
    FUN_004edac0(auStack_4c,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_4c,&DAT_005872d0);
  }
  ExceptionList = pvStack_30;
  return;
}


