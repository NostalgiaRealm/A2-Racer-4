
/* ==== FUN_004e40e0 @ 004e40e0 ==== 
 * signature: undefined __thiscall FUN_004e40e0(void * this, int * param_1)
 * body: 004e40e0-004e4110
 */

void __thiscall FUN_004e40e0(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_004e4660(this,param_1);
  uVar1 = dso_read_operand(param_1);
  *(undefined4 *)((int)this + 0x18) = uVar1;
  FUN_004dbf50(param_1,(undefined4 *)((int)this + 0x14));
  return;
}


