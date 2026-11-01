
/* ==== FUN_004d6840 @ 004d6840 ==== 
 * signature: int * __thiscall FUN_004d6840(void * this, byte param_1)
 * body: 004d6840-004d686e
 */

int * __thiscall FUN_004d6840(void *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + -4);
  *(undefined ***)(*(int *)(*piVar1 + 4) + -4 + (int)this) = &PTR_FUN_00578eb4;
  FUN_004cfb70(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(piVar1);
  }
  return piVar1;
}


