
/* ==== FUN_004ef510 @ 004ef510 ==== 
 * signature: undefined __fastcall FUN_004ef510(int param_1)
 * body: 004ef510-004ef64f
 */

void __fastcall FUN_004ef510(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iStack_94;
  int *piStack_90;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [28];
  undefined1 auStack_38 [28];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00572a33;
  pvStack_c = ExceptionList;
  piStack_90 = (int *)0x4ef531;
  ExceptionList = &pvStack_c;
  piStack_90 = (int *)FUN_004f1dc0(param_1);
  iStack_94 = 0x4ef537;
  (**(code **)(*piStack_90 + 100))();
  iStack_94 = 0x4ef53e;
  piVar1 = (int *)FUN_004f1d30(param_1);
  iStack_94 = param_1 + 0xe0;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x50);
  if (iVar2 == -0x7ff8ffe2) {
    piVar1 = (int *)FUN_004f1d30(param_1);
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_004f1d30(param_1);
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x50,param_1 + 0xe0);
      if (iVar2 != 0) {
        puVar3 = FUN_0049df90((undefined1 *)&iStack_94,
                              (byte *)s_Input_exception_in___s___d__005b77e4);
        uStack_14 = 0;
        puVar4 = (undefined4 *)
                 FUN_004796b0(auStack_84,puVar3,s_DIError___Failed_to_get_joystick_005b8b98);
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
        FUN_004edac0(auStack_54,puVar4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_54,&DAT_005872d0);
      }
    }
  }
  else if (iVar2 != 0) {
    puVar3 = FUN_0049df90(auStack_74,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_14 = 2;
    puVar4 = (undefined4 *)
             FUN_004796b0(auStack_64,puVar3,s_DIError___Failed_to_get_joystick_005b8b98);
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    FUN_004edac0(auStack_38,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_38,&DAT_005872d0);
  }
  ExceptionList = pvStack_1c;
  return;
}


