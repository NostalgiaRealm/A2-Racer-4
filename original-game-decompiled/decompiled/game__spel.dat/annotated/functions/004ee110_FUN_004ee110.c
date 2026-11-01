
/* ==== FUN_004ee110 @ 004ee110 ==== 
 * signature: int __thiscall FUN_004ee110(void * this, int param_1)
 * body: 004ee110-004ee1b2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ee1b3-004ee1bf
 */

int __thiscall FUN_004ee110(void *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572858;
  local_c = ExceptionList;
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x38))) {
    return (int)(void *)((int)this + param_1 * 8);
  }
  ExceptionList = &local_c;
  puVar1 = FUN_0049df90(local_58,(byte *)s_Input_group_does_not_exist__a_Co_005b86a4);
  local_4 = 0;
  puVar2 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 1;
  puVar3 = (undefined4 *)FUN_0047c9a0(local_38,puVar2,(int)puVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(local_28,puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_005872d0);
}


