
/* ==== FUN_004ee570 @ 004ee570 ==== 
 * signature: undefined __fastcall FUN_004ee570(int param_1)
 * body: 004ee570-004ee6a2
 */

void __fastcall FUN_004ee570(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iStack_90;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [28];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005728f3;
  pvStack_c = ExceptionList;
  iStack_90 = 0x4ee591;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004f1d30(param_1);
  iStack_90 = param_1 + 0xe0;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x10);
  if (iVar2 == -0x7ff8ffe2) {
    piVar1 = (int *)FUN_004f1d30(param_1);
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_004f1d30(param_1);
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x10,param_1 + 0xe0);
      if (iVar2 != 0) {
        puVar3 = FUN_0049df90((undefined1 *)&iStack_90,
                              (byte *)s_Input_exception_in___s___d__005b77e4);
        uStack_10 = 0;
        puVar4 = (undefined4 *)
                 FUN_004796b0(auStack_80,puVar3,s_DIError___Failed_to_get_Mouse_da_005b87c4);
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
        FUN_004edac0(auStack_50,puVar4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_50,&DAT_005872d0);
      }
    }
  }
  else if (iVar2 != 0) {
    puVar3 = FUN_0049df90(auStack_70,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_10 = 2;
    puVar4 = (undefined4 *)
             FUN_004796b0(auStack_60,puVar3,s_DIError___Failed_to_get_Mouse_da_005b87c4);
    uStack_10 = CONCAT31(uStack_10._1_3_,3);
    FUN_004edac0(auStack_34,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_34,&DAT_005872d0);
  }
  ExceptionList = pvStack_18;
  return;
}


