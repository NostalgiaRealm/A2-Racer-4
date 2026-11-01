
/* ==== FUN_0054fa36 @ 0054fa36 ==== 
 * signature: undefined __thiscall FUN_0054fa36(void * this, uint param_1)
 * body: 0054fa36-0054fa66
 */

void __thiscall FUN_0054fa36(void *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(param_1,0);
  uVar2 = FUN_0054eb50((void *)((int)this + 8),(int)cVar1,(void *)((int)this + 8));
  param_1 = uVar2 & 0xff;
  (**(code **)(*(int *)this + 0x28))(param_1);
  return;
}


