
/* ==== FUN_00489b70 @ 00489b70 ==== 
 * signature: undefined __thiscall FUN_00489b70(void * this, int * param_1)
 * body: 00489b70-00489bc6
 */

void __thiscall FUN_00489b70(void *this,int *param_1)

{
  if (*(int **)((int)this + 0x274) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x274) + 0x20))(0);
  }
  *(undefined4 *)((int)this + 0x278) = 0xffffffff;
  *(int **)((int)this + 0x274) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x20))(1);
    FUN_00489800(*(int *)((int)this + 0x27c));
    *(int *)((int)this + 0x278) = *(int *)((int)this + 0x260) + 6000;
  }
  return;
}


