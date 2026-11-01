
/* ==== FUN_004f0df0 @ 004f0df0 ==== 
 * signature: undefined __thiscall FUN_004f0df0(void * this, int param_1, char param_2)
 * body: 004f0df0-004f0fda
 */

void __thiscall FUN_004f0df0(void *this,int param_1,char param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
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
  pcStack_8 = FUN_00572ca0;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x8c) < 0) || (0x1f < *(int *)((int)this + 0x8c))) {
    ExceptionList = &local_c;
    puVar4 = FUN_0049df90(local_6c,(byte *)s_Illegal_index_m_NrCommands__Buff_005b8c6c);
    local_4 = 0;
    puVar5 = FUN_0049df90(local_2c,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    puVar6 = (undefined4 *)FUN_0047c9a0(local_5c,puVar5,(int)puVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_a4,puVar6);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_a4,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar3 = FUN_004f0fe0(this,param_1);
  if (iVar3 == -1) {
    puVar4 = FUN_0049df90(local_4c,(byte *)s_Trying_to_add_a_command_that_doe_005b8cdc);
    local_4 = 3;
    puVar5 = FUN_0049df90(local_3c,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 4;
    puVar6 = (undefined4 *)FUN_0047c9a0(local_1c,puVar5,(int)puVar4);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004edac0(local_88,puVar6);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_88,&DAT_005872d0);
  }
  iVar2 = *(int *)(*(int *)((int)this + 8) + 4);
  fVar1 = *(float *)(iVar2 + 0x14 + iVar3 * 0x28);
  iVar2 = iVar2 + iVar3 * 0x28;
  if (*(char *)(iVar2 + 0x24) == '\0') {
    if (param_2 == '\0') {
      fVar1 = 0.0;
      goto LAB_004f0f2b;
    }
  }
  else {
    if (param_2 == '\0') {
      fVar1 = fVar1 - *(float *)(iVar2 + 0x20);
    }
    else {
      fVar1 = fVar1 + *(float *)(iVar2 + 0x1c);
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
      goto LAB_004f0f2b;
    }
    if (fVar1 <= 1.0) goto LAB_004f0f2b;
  }
  fVar1 = 1.0;
LAB_004f0f2b:
  *(float *)(iVar2 + 0x18) = fVar1;
  if (0.0 < fVar1) {
    *(int *)((int)this + *(int *)((int)this + 0x8c) * 4 + 0xc) = iVar3;
    *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + 1;
  }
  ExceptionList = local_c;
  return;
}


