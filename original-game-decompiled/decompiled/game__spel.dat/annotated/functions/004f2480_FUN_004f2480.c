
/* ==== FUN_004f2480 @ 004f2480 ==== 
 * signature: undefined __thiscall FUN_004f2480(void * this, int * param_1)
 * body: 004f2480-004f24a0
 */

void __thiscall FUN_004f2480(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  if (piVar1 == (int *)0x0) {
    *(int *)((int)this + 0x88) = iVar2;
  }
  else {
    *piVar1 = iVar2;
  }
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar1;
  }
  return;
}


