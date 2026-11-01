
/* ==== FUN_004e3280 @ 004e3280 ==== 
 * signature: undefined __thiscall FUN_004e3280(void * this, int * param_1, int param_2)
 * body: 004e3280-004e32a8
 */

void __thiscall FUN_004e3280(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d4510(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  FUN_004dcc10(param_1,(int)this + 8,param_2);
  return;
}


