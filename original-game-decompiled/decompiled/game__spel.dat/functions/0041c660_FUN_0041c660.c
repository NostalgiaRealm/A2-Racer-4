
/* ==== FUN_0041c660 @ 0041c660 ==== 
 * signature: uint __thiscall FUN_0041c660(void * this, int param_1)
 * body: 0041c660-0041c6cc
 */

uint __thiscall FUN_0041c660(void *this,int param_1)

{
  uint in_EAX;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (*(LPVOID *)((int)this + 0xc) != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)this + 0xc));
  }
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0xc) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar2 = 0;
  *(int *)this = param_1;
  if (0 < param_1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 0xc) + -4 + iVar2 * 4) = 0xffffffff;
    } while (iVar2 < *(int *)this);
  }
  uVar3 = FUN_00558625();
  *(int *)((int)this + 8) = (int)uVar3 % *(int *)this;
  return CONCAT31((int3)((uint)((int)uVar3 / *(int *)this) >> 8),1);
}


