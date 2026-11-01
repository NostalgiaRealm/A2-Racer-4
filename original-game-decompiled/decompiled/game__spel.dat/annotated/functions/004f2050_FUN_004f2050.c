
/* ==== FUN_004f2050 @ 004f2050 ==== 
 * signature: undefined4 __thiscall FUN_004f2050(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004f2050-004f210b
 */

undefined4 __thiscall
FUN_004f2050(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_5c;
  code *pcStack_58;
  void *pvStack_54;
  undefined4 uStack_50;
  undefined1 auStack_3c [28];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00572e00;
  pvStack_c = ExceptionList;
  DAT_0074b98c = param_3;
  DAT_0074b990 = 0;
  uStack_50 = 0x4f2083;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004f1ca0();
  uStack_50 = param_2;
  pcStack_58 = FUN_004f1a50;
  uStack_5c = param_1;
  pvStack_54 = this;
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1);
  if (iVar2 != 0) {
    puVar3 = FUN_0049df90((undefined1 *)&uStack_5c,(byte *)s_Input_exception_in___s___d__005b77e4);
    uStack_18 = 0;
    puVar4 = (undefined4 *)
             FUN_004796b0(&stack0xffffffb4,puVar3,s_DIError___Failed_to_enumerate_DI_005b8ed8);
    uStack_18 = CONCAT31(uStack_18._1_3_,1);
    FUN_004edac0(auStack_3c,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_3c,&DAT_005872d0);
  }
  ExceptionList = pvStack_20;
  return CONCAT31((int3)((uint)*(int *)((int)this + 0xa4) >> 8),*(int *)((int)this + 0xa4) != 0);
}


