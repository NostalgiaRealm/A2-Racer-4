
/* ==== FUN_004ee040 @ 004ee040 ==== 
 * signature: int __fastcall FUN_004ee040(int param_1)
 * body: 004ee040-004ee0fe
 */

int __fastcall FUN_004ee040(int param_1)

{
  int iVar1;
  void *this;
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
  pcStack_8 = FUN_00572828;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x38);
  if ((-1 < iVar1) && (iVar1 < 5)) {
    this = *(void **)(param_1 + 4 + iVar1 * 8);
    ExceptionList = &local_c;
    FUN_004a5620(this,*(undefined4 **)((int)this + 8),1,(undefined4 *)&stack0x00000004);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    ExceptionList = local_c;
    return iVar1;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_0049df90(local_58,(byte *)s_Illegal_index_m_NrCmdCombination_005b8650);
  local_4 = 0;
  puVar3 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 1;
  puVar4 = (undefined4 *)FUN_0047c9a0(local_38,puVar3,(int)puVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(local_28,puVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_005872d0);
}


