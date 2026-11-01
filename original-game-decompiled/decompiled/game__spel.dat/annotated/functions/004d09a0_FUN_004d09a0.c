
/* ==== FUN_004d09a0 @ 004d09a0 ==== 
 * signature: int * __thiscall FUN_004d09a0(void * this, byte param_1)
 * body: 004d09a0-004d09ce
 */

int * __thiscall FUN_004d09a0(void *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + -8);
  *(undefined ***)(*(int *)(*piVar1 + 4) + -8 + (int)this) = &PTR_FUN_00578eac;
  FUN_004cfb70(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(piVar1);
  }
  return piVar1;
}


