
/* ==== FUN_004f0a60 @ 004f0a60 ==== 
 * signature: undefined __thiscall FUN_004f0a60(void * this, undefined4 * param_1)
 * body: 004f0a60-004f0af8
 */

void __thiscall FUN_004f0a60(void *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572bf0;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xa4) == 0) {
    ExceptionList = &local_c;
    puVar1 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_004796b0(local_38,puVar1,s_Trying_to_get_DevCaps_while_DiOb_005b8c1c)
    ;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  puVar2 = (undefined4 *)((int)this + 0xac);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


