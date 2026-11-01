
/* ==== FUN_0041c5a0 @ 0041c5a0 ==== 
 * signature: undefined4 __thiscall FUN_0041c5a0(void * this, int param_1, int param_2)
 * body: 0041c5a0-0041c5e0
 */

undefined4 __thiscall FUN_0041c5a0(void *this,int param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((param_2 != -1) && (-1 < param_1)) && (param_1 < *(int *)this)) {
    iVar1 = FUN_0041c5f0(this,param_1);
    if ((char)iVar1 == '\0') {
      *(int *)(*(int *)((int)this + 0xc) + param_1 * 4) = param_2;
      iVar1 = *(int *)((int)this + 4) + 1;
      *(int *)((int)this + 4) = iVar1;
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


