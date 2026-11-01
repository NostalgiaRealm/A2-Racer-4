
/* ==== FUN_004f6ce0 @ 004f6ce0 ==== 
 * signature: undefined __thiscall FUN_004f6ce0(void * this, int * param_1)
 * body: 004f6ce0-004f6d06
 */

void __thiscall FUN_004f6ce0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar1;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    *(short *)((int)this + 0x3e) = *(short *)((int)this + 0x3e) + -1;
    return;
  }
  *(short *)((int)this + 0x3e) = *(short *)((int)this + 0x3e) + -1;
  *(int *)((int)this + 0x20) = iVar2;
  return;
}


