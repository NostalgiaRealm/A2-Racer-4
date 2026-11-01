
/* ==== FUN_0049bda0 @ 0049bda0 ==== 
 * signature: undefined __thiscall FUN_0049bda0(void * this, int param_1)
 * body: 0049bda0-0049bdeb
 */

void __thiscall FUN_0049bda0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar1 = *(int **)(*(int *)((int)this + 0x1c) + 4);
    piVar3 = piVar1;
    while (*piVar3 != param_1) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)((int)this + 0x14) <= iVar4) {
        return;
      }
    }
    puVar2 = (undefined4 *)piVar1[iVar4];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + iVar4 * 4) = 0;
  }
  return;
}


