
/* ==== FUN_004e32b0 @ 004e32b0 ==== 
 * signature: undefined __thiscall FUN_004e32b0(void * this, int * param_1, int param_2)
 * body: 004e32b0-004e32e2
 */

void __thiscall FUN_004e32b0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d4510(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  FUN_004dcc10(param_1,(int)this + 8,param_2);
  FUN_004d7490(param_1,(int)this + 0xc);
  return;
}


