
/* ==== FUN_004e46a0 @ 004e46a0 ==== 
 * signature: undefined __thiscall FUN_004e46a0(void * this, int param_1)
 * body: 004e46a0-004e471d
 */

void __thiscall FUN_004e46a0(void *this,int param_1)

{
  int iVar1;
  undefined1 local_18 [24];
  
  if (*(int *)((int)this + 0xc) == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 8))(local_18,param_1);
    iVar1 = *(int *)(iVar1 + 0x10);
    FUN_004cf650((undefined4 *)&stack0xffffffe0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 8);
      return;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 8))(local_18,param_1);
    iVar1 = *(int *)(iVar1 + 0x10);
    FUN_004cf650((undefined4 *)&stack0xffffffe0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 8);
    }
  }
  return;
}


