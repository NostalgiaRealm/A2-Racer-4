
/* ==== FUN_004e2480 @ 004e2480 ==== 
 * signature: short * __thiscall FUN_004e2480(void * this, int * param_1)
 * body: 004e2480-004e24d5
 */

short * __thiscall FUN_004e2480(void *this,int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    *(undefined2 *)this = 0;
    cVar1 = (**(code **)(*param_1 + 0x18))();
    while (cVar1 == '\0') {
      *(short *)((int)this + *(short *)this * 2 + 0x18) = (short)param_1[9];
      *(int *)((int)this + *(short *)this * 4 + 4) = param_1[1];
      *(short *)this = *(short *)this + 1;
      param_1 = (int *)param_1[2];
      cVar1 = (**(code **)(*param_1 + 0x18))();
    }
    return this;
  }
  *(undefined2 *)this = 0xff;
  return this;
}


