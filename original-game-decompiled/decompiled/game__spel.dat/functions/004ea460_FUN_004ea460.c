
/* ==== FUN_004ea460 @ 004ea460 ==== 
 * signature: undefined __thiscall FUN_004ea460(void * this, int param_1)
 * body: 004ea460-004ea531
 */

void __thiscall FUN_004ea460(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [48];
  undefined1 local_4c [56];
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_005721e4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffff2c;
  if (-1 < param_1) {
    ExceptionList = &local_10;
    iVar1 = (*(code *)**(undefined4 **)((int)this + 4))();
    puVar2 = local_14;
    if (param_1 < iVar1) {
      puVar4 = *(undefined4 **)(*(int *)(*(int *)((int)this + 8) + 4) + param_1 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
      FUN_004ecd90((undefined4 *)((int)this + 4),param_1,1);
      ExceptionList = local_10;
      return;
    }
  }
  local_14 = puVar2;
  puVar2 = FUN_0049df90(local_8c,(byte *)s_Illegal_object_index_to_remove___005af54c);
  local_8._0_1_ = 1;
  puVar3 = FUN_0049df90(local_7c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  local_8._0_1_ = 2;
  puVar4 = (undefined4 *)FUN_0047c9a0(local_9c,puVar3,(int)puVar2);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004a5260(local_4c,puVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_4c,&DAT_00583558);
}


