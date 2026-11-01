
/* ==== FUN_004e4660 @ 004e4660 ==== 
 * signature: undefined __thiscall FUN_004e4660(void * this, int * param_1)
 * body: 004e4660-004e4690
 */

void __thiscall FUN_004e4660(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_004e3790(this,param_1);
  uVar1 = FUN_004d4510(param_1);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = dso_read_operand(param_1);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  return;
}


