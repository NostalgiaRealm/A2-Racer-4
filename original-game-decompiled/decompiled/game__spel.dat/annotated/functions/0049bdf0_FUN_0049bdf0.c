
/* ==== FUN_0049bdf0 @ 0049bdf0 ==== 
 * signature: undefined __thiscall FUN_0049bdf0(void * this, int param_1)
 * body: 0049bdf0-0049be23
 */

void __thiscall FUN_0049bdf0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar1 = *(int **)(*(int *)((int)this + 0x1c) + 4);
    piVar3 = piVar1;
    while (*piVar3 != param_1) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)((int)this + 0x14) <= iVar2) {
        return;
      }
    }
    piVar1[iVar2] = 0;
  }
  return;
}


