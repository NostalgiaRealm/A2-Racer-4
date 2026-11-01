
/* ==== FUN_004de310 @ 004de310 ==== 
 * signature: undefined __thiscall FUN_004de310(void * this, int param_1)
 * body: 004de310-004de356
 */

void __thiscall FUN_004de310(void *this,int param_1)

{
  uint uVar1;
  
  do {
    uVar1 = *(uint *)((int)this + 0x10);
    *(uint *)((int)this + 0x10) = uVar1 + 1;
    if ((*(int *)(param_1 + 8) == 0) ||
       ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2) <= uVar1)) {
      FUN_004de1a0();
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + uVar1 * 4) + 0x2c))(this);
  } while (*(int *)((int)this + 0x10) != -2);
  return;
}


