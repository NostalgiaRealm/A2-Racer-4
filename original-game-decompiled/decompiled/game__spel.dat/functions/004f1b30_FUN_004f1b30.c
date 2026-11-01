
/* ==== FUN_004f1b30 @ 004f1b30 ==== 
 * signature: undefined __stdcall FUN_004f1b30(undefined4 param_1)
 * body: 004f1b30-004f1bd5
 */

void FUN_004f1b30(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [28];
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00572d20;
  local_c = ExceptionList;
  if (DAT_0074b994 == 0) {
    ExceptionList = &local_c;
    iVar1 = DirectInputCreateA(param_1,0x500,&DAT_0074b994,0);
    if (iVar1 != 0) {
      puVar2 = FUN_0049df90(auStack_48,(byte *)s_Input_exception_in___s___d__005b77e4);
      uStack_4 = 0;
      puVar3 = (undefined4 *)
               FUN_004796b0(auStack_38,puVar2,s_DIError___Failed_to_create_DI_ob_005b8d28);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_004edac0(auStack_28,puVar3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(auStack_28,&DAT_005872d0);
    }
  }
  ExceptionList = local_c;
  DAT_0074b998 = DAT_0074b998 + 1;
  return;
}


