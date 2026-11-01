
/* ==== FUN_004f0c60 @ 004f0c60 ==== 
 * signature: undefined __thiscall FUN_004f0c60(void * this, int param_1, undefined4 param_2)
 * body: 004f0c60-004f0de1
 */

void __thiscall FUN_004f0c60(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_a4 [28];
  undefined1 local_88 [28];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572c60;
  local_c = ExceptionList;
  if ((-1 < *(int *)((int)this + 0x8c)) && (*(int *)((int)this + 0x8c) < 0x20)) {
    ExceptionList = &local_c;
    iVar1 = FUN_004f0fe0(this,param_1);
    if (iVar1 == -1) {
      puVar2 = FUN_0049df90(local_4c,(byte *)s_Trying_to_add_a_command_that_doe_005b8cdc);
      local_4 = 3;
      puVar3 = FUN_0049df90(local_3c,(byte *)s_Input_exception_in___s___d__005b77e4);
      local_4._0_1_ = 4;
      puVar4 = (undefined4 *)FUN_0047c9a0(local_1c,puVar3,(int)puVar2);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004edac0(local_88,puVar4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_88,&DAT_005872d0);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)this + 8) + 4) + 0x18 + iVar1 * 0x28) = param_2;
    *(int *)((int)this + *(int *)((int)this + 0x8c) * 4 + 0xc) = iVar1;
    *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + 1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_0049df90(local_6c,(byte *)s_Illegal_index_m_NrCommands__Buff_005b8c6c);
  local_4 = 0;
  puVar3 = FUN_0049df90(local_2c,(byte *)s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 1;
  puVar4 = (undefined4 *)FUN_0047c9a0(local_5c,puVar3,(int)puVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(local_a4,puVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a4,&DAT_005872d0);
}


