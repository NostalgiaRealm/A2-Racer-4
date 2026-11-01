
/* ==== FUN_004ed920 @ 004ed920 ==== 
 * signature: undefined1 __thiscall FUN_004ed920(void * this, int param_1, int param_2)
 * body: 004ed920-004eda09
 */

undefined1 __thiscall FUN_004ed920(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572788;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)((int)this + 8) + 4) + *(int *)((int)this + param_1 * 4 + 0xc) * 0x28;
  ExceptionList = &local_c;
  iVar2 = FUN_004ed8c0(this,iVar1);
  if (iVar2 == -1) {
    puVar3 = FUN_0049df90(local_58,(byte *)s_Key_named__s_not_found_in_keyboa_005b85b0);
    local_4 = 0;
    puVar4 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    puVar5 = (undefined4 *)FUN_0047c9a0(local_38,puVar4,(int)puVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_28,puVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  if (param_2 != 0) {
    *(bool *)param_2 = 0.0 < *(float *)(iVar1 + 0x14);
  }
  ExceptionList = local_c;
  return (&DAT_005b7a20)[iVar2 * 0xc];
}


