
/* ==== FUN_0045dff0 @ 0045dff0 ==== 
 * signature: undefined __thiscall FUN_0045dff0(void * this, int param_1)
 * body: 0045dff0-0045e038
 */

void __thiscall FUN_0045dff0(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_004a6980((uint)(param_1 != 0),(byte *)s__s___d__Can_not_insert_particle___005a59c8);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x68);
    *(void **)(param_1 + 0x6c) = this;
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(int *)((int)this + 0x68) = param_1;
    if (*(void **)(param_1 + 0x68) != (void *)0x0) {
      FUN_0045e100(*(void **)(param_1 + 0x68),param_1);
    }
  }
  return;
}


