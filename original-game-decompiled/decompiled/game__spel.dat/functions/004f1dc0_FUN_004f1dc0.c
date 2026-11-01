
/* ==== FUN_004f1dc0 @ 004f1dc0 ==== 
 * signature: undefined __fastcall FUN_004f1dc0(int param_1)
 * body: 004f1dc0-004f1e42
 */

void __fastcall FUN_004f1dc0(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572d80;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xa8) == 0) {
    ExceptionList = &local_c;
    puVar1 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar2 = (undefined4 *)
             FUN_004796b0(local_38,puVar1,s_DirectInput_device2_not_created_y_005b8e04);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


