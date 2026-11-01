
/* ==== FUN_0045e660 @ 0045e660 ==== 
 * signature: undefined __thiscall FUN_0045e660(void * this, int param_1)
 * body: 0045e660-0045e773
 */

void __thiscall FUN_0045e660(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_7c [15];
  undefined4 uStack_40;
  float local_18 [3];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a9d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00460370(local_18);
  iVar1 = *(int *)((int)this + 0xa4);
  this_00 = operator_new(0xac);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)&stack0x00000008;
    puVar4 = auStack_7c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = FUN_0045e350(this_00,param_1);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0xa4) = puVar2;
  uStack_40 = 0x45e734;
  FUN_004a6980((uint)(puVar2 != (undefined4 *)0x0),
               (byte *)s__s___d__Not_enough_mem_for_new_E_005a5b28);
  *(void **)(*(int *)((int)this + 0xa4) + 0xa8) = this;
  *(int *)(*(int *)((int)this + 0xa4) + 0xa4) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)((int)this + 0xa4);
  }
  ExceptionList = local_c;
  return;
}


