
/* ==== FUN_004d10d0 @ 004d10d0 ==== 
 * signature: int * __thiscall FUN_004d10d0(void * this, int * param_1)
 * body: 004d10d0-004d10e5
 */

int * __thiscall FUN_004d10d0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)this = iVar1;
  FUN_004d10c0(iVar1);
  return this;
}


