
/* ==== FUN_004e36a0 @ 004e36a0 ==== 
 * signature: undefined __thiscall FUN_004e36a0(void * this, int * param_1)
 * body: 004e36a0-004e36d0
 */

void __thiscall FUN_004e36a0(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_004e4030(this,param_1);
  uVar1 = FUN_004e2d10(param_1);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_004e2d10(param_1);
  *(undefined4 *)((int)this + 8) = uVar1;
  return;
}


