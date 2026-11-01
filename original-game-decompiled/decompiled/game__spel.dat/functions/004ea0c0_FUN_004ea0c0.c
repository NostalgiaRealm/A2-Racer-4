
/* ==== FUN_004ea0c0 @ 004ea0c0 ==== 
 * signature: undefined __stdcall FUN_004ea0c0(void)
 * body: 004ea0c0-004ea178
 */

void FUN_004ea0c0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057212b;
  local_c = ExceptionList;
  if (DAT_0074b968 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x6c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_0074b968 = (undefined4 *)0x0;
    }
    else {
      DAT_0074b968 = FUN_004e9cc0(puVar1);
    }
    local_4 = 0xffffffff;
    if (DAT_0074b968 == (undefined4 *)0x0) {
      puVar2 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
      local_4 = 1;
      puVar1 = (undefined4 *)
               FUN_004796b0(local_38,puVar2,s_Not_enough_memory_for_CInputMana_005b77bc);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004edac0(local_28,puVar1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_005872d0);
    }
  }
  ExceptionList = local_c;
  return;
}


