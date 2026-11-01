
/* ==== FUN_004fb1b0 @ 004fb1b0 ==== 
 * signature: undefined __thiscall FUN_004fb1b0(void * this, int param_1, float * param_2)
 * body: 004fb1b0-004fb210
 */

void __thiscall FUN_004fb1b0(void *this,int param_1,float *param_2)

{
  undefined4 *puVar1;
  
  *(int *)this = param_1;
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar1 = FUN_004fe470(*(void **)(*(int *)(param_1 + 0x18) + 0xa4),param_1);
    *(undefined4 **)(param_1 + 0x40) = puVar1;
  }
  if ((*(int *)(param_1 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(param_1 + 0x40) < *(int *)(*(int *)(param_1 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(param_1 + 0x40));
  }
  FUN_004fe850(*(void **)(param_1 + 0x40),param_2,(double *)((int)this + 8));
  return;
}


