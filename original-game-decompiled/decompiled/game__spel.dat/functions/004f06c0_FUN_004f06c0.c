
/* ==== FUN_004f06c0 @ 004f06c0 ==== 
 * signature: undefined __thiscall FUN_004f06c0(void * this, undefined4 param_1)
 * body: 004f06c0-004f0784
 */

void __thiscall FUN_004f06c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_retaddr;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined1 auStack_5c [28];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [7];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  pcStack_8 = FUN_00572ba0;
  pvStack_c = ExceptionList;
  local_40 = 0x18;
  local_3c = 0x10;
  local_38 = param_1;
  local_34[0] = 1;
  puStack_64 = (undefined4 *)0x4f06fd;
  ExceptionList = &pvStack_c;
  piStack_6c = (int *)FUN_004f1d30((int)this);
  puStack_64 = &local_40;
  uStack_68 = 4;
  iVar1 = (**(code **)(*piStack_6c + 0x14))();
  if (iVar1 != 0) {
    puVar2 = FUN_0049df90((undefined1 *)&piStack_6c,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_10 = 0;
    puVar3 = (undefined4 *)
             FUN_004796b0(auStack_5c,puVar2,s_DIError___Failed_to_get_joystick_005b8bec);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    FUN_004edac0(local_34,puVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_005872d0);
  }
  *puStack_4 = local_3c;
  *unaff_retaddr = local_38;
  ExceptionList = pvStack_18;
  return;
}


