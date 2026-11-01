
/* ==== FUN_0041c570 @ 0041c570 ==== 
 * signature: int __thiscall FUN_0041c570(void * this, int param_1)
 * body: 0041c570-0041c59f
 */

int __thiscall FUN_0041c570(void *this,int param_1)

{
  uint3 uVar2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == *(int *)this) {
    return (uint)uVar2 << 8;
  }
  if (param_1 == -1) {
    return (uint)uVar2 << 8;
  }
  *(int *)(*(int *)((int)this + 0xc) + iVar1 * 4) = param_1;
  iVar1 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


