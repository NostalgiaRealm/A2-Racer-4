
/* ==== FUN_004e0240 @ 004e0240 ==== 
 * signature: undefined __thiscall FUN_004e0240(void * this, int param_1, int param_2)
 * body: 004e0240-004e027e
 */

void __thiscall FUN_004e0240(void *this,int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 0x44))();
  if (cVar1 != '\0') {
    FUN_004d9780(*(int *)(param_1 + 0xc) + *(int *)((int)this + 0x2c),param_2);
    return;
  }
  FUN_004d9780(*(undefined4 *)((int)this + 0x2c),param_2);
  return;
}


