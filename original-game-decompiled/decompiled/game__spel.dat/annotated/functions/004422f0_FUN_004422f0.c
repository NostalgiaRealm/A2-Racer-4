
/* ==== FUN_004422f0 @ 004422f0 ==== 
 * signature: undefined __thiscall FUN_004422f0(void * this, int param_1, int param_2)
 * body: 004422f0-00442334
 */

void __thiscall FUN_004422f0(void *this,int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_004420b0(this);
  }
  else {
    FUN_004421f0(this);
  }
  *(int *)((int)this + 0xe0) = param_1;
  *(int *)((int)this + 0xe8) = param_2;
  FUN_00442080(this);
  FUN_00442340(this);
  *(undefined4 *)((int)this + 0xe4) = 1;
  return;
}


