
/* ==== FUN_004f0820 @ 004f0820 ==== 
 * signature: undefined4 __thiscall FUN_004f0820(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004f0820-004f097f
 */

undefined4 __thiscall
FUN_004f0820(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [28];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [36];
  undefined4 uStack_18;
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00572bd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_004f1be0(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_004f2050(this,4,1,param_3);
    if ((char)uVar1 != '\0') {
      piVar2 = (int *)FUN_004f1d30((int)this);
      iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,&DAT_0054b190);
      if (iVar3 != 0) {
        puVar4 = FUN_0049df90(&stack0xffffff74,(byte *)s_Input_exception_in___s___d__005b77e4);
        local_c = (void *)0x0;
        puVar5 = (undefined4 *)
                 FUN_004796b0(auStack_7c,puVar4,s_DIError___Failed_to_set_mouse_da_005b886c);
        local_c = (void *)CONCAT31(local_c._1_3_,1);
        FUN_004edac0(auStack_4c,puVar5);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_4c,&DAT_005872d0);
      }
      piVar2 = (int *)FUN_004f1d30((int)this);
      iVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,param_2,6);
      if (iVar3 != 0) {
        puVar4 = FUN_0049df90(auStack_78,(byte *)s_Input_exception_in___s___d__005b77e4);
        uStack_18 = 2;
        puVar5 = (undefined4 *)
                 FUN_004796b0(auStack_68,puVar4,s_DIError___Failed_to_set_mouse_co_005b883c);
        uStack_18 = CONCAT31(uStack_18._1_3_,3);
        FUN_004edac0(auStack_3c,puVar5);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_3c,&DAT_005872d0);
      }
      FUN_004f0790(this);
      piVar2 = (int *)FUN_004f1d30((int)this);
      uVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2);
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return uVar1;
}


