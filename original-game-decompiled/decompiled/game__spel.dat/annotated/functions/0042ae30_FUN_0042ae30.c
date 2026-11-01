
/* ==== FUN_0042ae30 @ 0042ae30 ==== 
 * signature: undefined __thiscall FUN_0042ae30(void * this, int * param_1)
 * body: 0042ae30-0042ae92
 */

void __thiscall FUN_0042ae30(void *this,int *param_1)

{
  if (*(int *)this != -1) {
    *param_1 = *(int *)((int)this + 0x14);
    param_1[1] = *(int *)((int)this + 0x18);
    param_1[2] = *(int *)((int)this + 0x1c);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


