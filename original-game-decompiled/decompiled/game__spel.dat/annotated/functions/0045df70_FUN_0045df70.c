
/* ==== FUN_0045df70 @ 0045df70 ==== 
 * signature: undefined __thiscall FUN_0045df70(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 0045df70-0045dfe0
 */

void __thiscall
FUN_0045df70(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  void *this_00;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x68);
  this_00 = operator_new(0x70);
  if (this_00 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0045ded0(this_00,param_1,param_2,param_3,param_4);
  }
  *(int *)((int)this + 0x68) = iVar2;
  FUN_004a6980((uint)(iVar2 != 0),(byte *)s__s___d__Not_enough_mem_for_new_p_005a5978);
  *(void **)(*(int *)((int)this + 0x68) + 0x6c) = this;
  *(int *)(*(int *)((int)this + 0x68) + 0x68) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)((int)this + 0x68);
  }
  return;
}


