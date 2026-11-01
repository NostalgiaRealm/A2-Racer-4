
/* ==== FUN_004eb7d0 @ 004eb7d0 ==== 
 * signature: undefined4 __thiscall FUN_004eb7d0(void * this, int param_1)
 * body: 004eb7d0-004eb88a
 */

undefined4 __thiscall FUN_004eb7d0(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005723f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004eb3f0(this,param_1);
  if (iVar1 == -1) {
    puVar2 = FUN_0049df90(local_58,(byte *)s_Device__s_does_not_exist__005b78f4);
    local_4 = 0;
    puVar3 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_38,puVar3,(int)puVar2);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_28,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(*(int *)(*(int *)((int)this + 8) + 4) + iVar1 * 4);
}


