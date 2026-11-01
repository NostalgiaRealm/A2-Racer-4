
/* ==== FUN_0041c610 @ 0041c610 ==== 
 * signature: uint __thiscall FUN_0041c610(void * this, int * param_1)
 * body: 0041c610-0041c654
 */

uint __thiscall FUN_0041c610(void *this,int *param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint3 uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 < 1) {
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    return in_EAX & 0xffffff00;
  }
  iVar2 = *(int *)((int)this + 8) + 1;
  iVar4 = iVar2 % iVar1;
  *(int *)((int)this + 8) = iVar4;
  if (iVar4 < 0) {
    return iVar2 / iVar1 & 0xffffff00;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0xc) + iVar4 * 4);
  uVar3 = (uint3)((uint)*(int *)((int)this + 0xc) >> 8);
  if (iVar1 < 0) {
    return (uint)uVar3 << 8;
  }
  *param_1 = iVar1;
  return CONCAT31(uVar3,1);
}


