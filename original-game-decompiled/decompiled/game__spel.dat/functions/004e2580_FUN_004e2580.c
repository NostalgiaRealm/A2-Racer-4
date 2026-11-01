
/* ==== FUN_004e2580 @ 004e2580 ==== 
 * signature: undefined __thiscall FUN_004e2580(void * this, void * param_1)
 * body: 004e2580-004e25ce
 */

void __thiscall FUN_004e2580(void *this,void *param_1)

{
  short sVar1;
  
  FUN_004d43a0(param_1,*(byte *)this);
  if ((*(short *)this != 0xff) && (sVar1 = 0, 0 < *(short *)this)) {
    do {
      FUN_004d43a0(param_1,*(byte *)((int)this + sVar1 * 4 + 4));
      FUN_004d73f0(param_1);
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)this);
  }
  return;
}


