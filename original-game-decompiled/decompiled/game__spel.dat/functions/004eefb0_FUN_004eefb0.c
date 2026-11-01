
/* ==== FUN_004eefb0 @ 004eefb0 ==== 
 * signature: undefined __fastcall FUN_004eefb0(int param_1)
 * body: 004eefb0-004ef066
 */

void __fastcall FUN_004eefb0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined1 auStack_58 [28];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00572970;
  pvStack_c = ExceptionList;
  local_3c = 0x14;
  local_38 = 0x10;
  local_34 = 0;
  local_30 = 0;
  local_2c = 1;
  puStack_60 = (undefined4 *)0x4eeff5;
  ExceptionList = &pvStack_c;
  piStack_68 = (int *)FUN_004f1d30(param_1);
  puStack_60 = &local_3c;
  uStack_64 = 2;
  iVar1 = (**(code **)(*piStack_68 + 0x18))();
  if (iVar1 != 0) {
    puVar2 = FUN_0049df90((undefined1 *)&piStack_68,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_10 = 0;
    puVar3 = (undefined4 *)
             FUN_004796b0(auStack_58,puVar2,s_DIError___Failed_to_set_mouse_pr_005b8810);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    FUN_004edac0(&local_34,puVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_005872d0);
  }
  ExceptionList = pvStack_18;
  return;
}


