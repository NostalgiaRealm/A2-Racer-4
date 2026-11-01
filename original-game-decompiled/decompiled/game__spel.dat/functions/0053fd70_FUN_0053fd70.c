
/* ==== FUN_0053fd70 @ 0053fd70 ==== 
 * signature: undefined __thiscall FUN_0053fd70(void * this, int param_1)
 * body: 0053fd70-0053fdd2
 */

void __thiscall FUN_0053fd70(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 4) + 0x36);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    iVar1 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x38) + uVar3 * 4);
    if ((*(int *)(iVar1 + 0x2c) == param_1) || (*(int *)(iVar1 + 0x30) == param_1)) {
      uVar4 = (uint)*(ushort *)(iVar1 + 2);
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        FUN_0053e860(*(void **)((int)this + 4),*(int **)(*(int *)(iVar1 + 4) + uVar4 * 4));
      }
    }
  }
  piVar2 = *(int **)((int)this + 4);
  if ((*(short *)((int)piVar2 + 0x3e) == 0) && (piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x18))(1);
  }
  return;
}


