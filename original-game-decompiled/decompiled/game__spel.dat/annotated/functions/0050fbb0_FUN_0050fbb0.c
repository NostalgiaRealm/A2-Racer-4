
/* ==== FUN_0050fbb0 @ 0050fbb0 ==== 
 * signature: undefined __thiscall FUN_0050fbb0(void * this, int param_1)
 * body: 0050fbb0-0050fc2e
 */

void __thiscall FUN_0050fbb0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar2 = ((uint)(param_1 * 0x65) >> 8) + param_1 * 0x3e9 & *(int *)this - 1U;
  piVar4 = *(int **)(*(int *)((int)this + 0xc) + uVar2 * 4);
  piVar3 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    while (piVar4[5] != param_1) {
      piVar1 = (int *)*piVar4;
      piVar3 = piVar4;
      piVar4 = piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar3 == (int *)0x0) {
      *(int *)(*(int *)((int)this + 0xc) + uVar2 * 4) = *piVar4;
    }
    else {
      *piVar3 = *piVar4;
    }
    if (piVar4 == *(int **)(*(int *)((int)this + 8) + uVar2 * 4)) {
      FUN_0050fa50(this,(int)piVar4,uVar2);
    }
    FUN_0054b339(piVar4);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  }
  return;
}


