
/* ==== FUN_004eafb0 @ 004eafb0 ==== 
 * signature: undefined __thiscall FUN_004eafb0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4)
 * body: 004eafb0-004eb168
 */

void __thiscall
FUN_004eafb0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  void *this_00;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_a0;
  undefined1 auStack_94 [28];
  undefined1 local_78 [28];
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004ea810(this,param_1);
  if (iVar2 == -1) {
    puVar3 = FUN_0049df90(local_3c,(byte *)s_Action__s_does_not_exist__005b7964);
    local_4 = 0;
    puVar4 = FUN_0049df90(local_5c,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    puVar5 = (undefined4 *)FUN_0047c9a0(local_1c,puVar4,(int)puVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_78,puVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_78,&DAT_005872d0);
  }
  local_a0 = 0;
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x54) + 4) + 0x38 + iVar2 * 0x3c);
  if (0 < iVar1) {
    do {
      puVar5 = (undefined4 *)
               FUN_004ee110((void *)(*(int *)(*(int *)((int)this + 0x54) + 4) + iVar2 * 0x3c),
                            local_a0);
      iVar6 = (**(code **)*puVar5)();
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          this_00 = *(void **)(*(int *)(*(int *)(puVar5[1] + 4) + iVar7 * 4) + 4);
          if (this_00 == (void *)0x0) {
            puVar3 = FUN_0049df90(auStack_2c,(byte *)s_Input_exception_in___s___d__005b77e4);
            local_4 = 3;
            puVar5 = (undefined4 *)FUN_004796b0(auStack_4c,puVar3,s_m_InputCommand____NULL_005b79b0)
            ;
            local_4 = CONCAT31(local_4._1_3_,4);
            FUN_004edac0(auStack_94,puVar5);
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(auStack_94,&DAT_005872d0);
          }
          FUN_004eddb0(this_00,param_2,param_3,param_4);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < iVar1);
  }
  ExceptionList = local_c;
  return;
}


