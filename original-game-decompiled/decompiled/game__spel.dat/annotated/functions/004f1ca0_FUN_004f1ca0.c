
/* ==== FUN_004f1ca0 @ 004f1ca0 ==== 
 * signature: undefined __stdcall FUN_004f1ca0(void)
 * body: 004f1ca0-004f1d21
 */

void FUN_004f1ca0(void)

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
  pcStack_8 = FUN_00572d40;
  local_c = ExceptionList;
  if (DAT_0074b994 == 0) {
    ExceptionList = &local_c;
    puVar1 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_004796b0(local_38,puVar1,s_DirectInput_object_not_created_y_005b8d80)
    ;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,puVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


