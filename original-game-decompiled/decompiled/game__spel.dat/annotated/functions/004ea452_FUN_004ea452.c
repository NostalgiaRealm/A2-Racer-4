
/* ==== FUN_004ea452 @ 004ea452 ==== 
 * signature: undefined __thiscall FUN_004ea452(void * this, int param_1)
 * body: 004ea452-004ea45f
 */

void __thiscall FUN_004ea452(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [48];
  undefined1 auStack_4c [56];
  undefined1 *puStack_14;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_005721e4;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff2c;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffff2c;
  if (-1 < param_1) {
    ExceptionList = &pvStack_10;
    iVar1 = (*(code *)**(undefined4 **)((int)this + 4))();
    puVar2 = puStack_14;
    if (param_1 < iVar1) {
      puVar4 = *(undefined4 **)(*(int *)(*(int *)((int)this + 8) + 4) + param_1 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
      FUN_004ecd90((undefined4 *)((int)this + 4),param_1,1);
      ExceptionList = pvStack_10;
      return;
    }
  }
  puStack_14 = puVar2;
  puVar2 = FUN_0049df90(auStack_8c,(byte *)s_Illegal_object_index_to_remove___005af54c);
  uStack_8._0_1_ = 1;
  puVar3 = FUN_0049df90(auStack_7c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  uStack_8._0_1_ = 2;
  puVar4 = (undefined4 *)FUN_0047c9a0(auStack_9c,puVar3,(int)puVar2);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  FUN_004a5260(auStack_4c,puVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(auStack_4c,&DAT_00583558);
}


