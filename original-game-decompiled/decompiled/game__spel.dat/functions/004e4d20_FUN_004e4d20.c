
/* ==== FUN_004e4d20 @ 004e4d20 ==== 
 * signature: undefined __thiscall FUN_004e4d20(void * this, int * param_1)
 * body: 004e4d20-004e4d50
 */

void __thiscall FUN_004e4d20(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_004e36a0(this,param_1);
  uVar1 = FUN_004d4510(param_1);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  uVar1 = FUN_004e2d10(param_1);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  return;
}


