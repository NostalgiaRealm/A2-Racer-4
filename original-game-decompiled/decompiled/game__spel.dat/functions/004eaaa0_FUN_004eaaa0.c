
/* ==== FUN_004eaaa0 @ 004eaaa0 ==== 
 * signature: undefined __thiscall FUN_004eaaa0(void * this, undefined1 * param_1, int param_2, int param_3)
 * body: 004eaaa0-004eac7e
 */

void __thiscall FUN_004eaaa0(void *this,undefined1 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [28];
  undefined1 local_74 [28];
  undefined1 local_58 [28];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057228f;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x60) == '\0') {
    ExceptionList = &local_c;
    puVar1 = FUN_0049df90(local_b0,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_004796b0(local_a0,puVar1,s_InputManager_not_initted_yet__Ca_005b7910)
    ;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_90,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_90,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar3 = FUN_004eb3f0(this,param_3);
  if (iVar3 == -1) {
    puVar1 = FUN_0049df90(local_a0,(byte *)s_Device__s_does_not_exist__005b78f4);
    local_4 = 2;
    puVar4 = FUN_0049df90(local_b0,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 3;
    puVar2 = (undefined4 *)FUN_0047c9a0(local_90,puVar4,(int)puVar1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004edac0(local_58,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_58,&DAT_005872d0);
  }
  iVar3 = FUN_004ea880(this,iVar3,param_2);
  if (iVar3 == 0) {
    puVar1 = FUN_0049df90(local_3c,(byte *)s_Command__s_of_device__s_does_not_005b78cc);
    local_4 = 5;
    puVar4 = FUN_0049df90(local_2c,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 6;
    puVar2 = (undefined4 *)FUN_0047c9a0(local_1c,puVar4,(int)puVar1);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004edac0(local_74,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_74,&DAT_005872d0);
  }
  FUN_004ea960(this,param_1);
  ExceptionList = local_c;
  return;
}


