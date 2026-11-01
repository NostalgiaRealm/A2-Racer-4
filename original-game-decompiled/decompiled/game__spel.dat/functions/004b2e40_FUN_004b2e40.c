
/* ==== FUN_004b2e40 @ 004b2e40 ==== 
 * signature: undefined __thiscall FUN_004b2e40(void * this, int param_1)
 * body: 004b2e40-004b2e96
 */

void __thiscall FUN_004b2e40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)this + 4);
  iVar2 = 2;
  iVar1 = DAT_0073b1b0;
  do {
    if (((*(int *)(iVar1 + 8 + piVar3[-1] * 0x48) == *(int *)(param_1 * 0x48 + 8 + iVar1)) &&
        (*(int *)(param_1 * 0x48 + 0x2c + iVar1) == 4)) && (*piVar3 != param_1)) {
      FUN_004ba4c0(param_1);
      *piVar3 = param_1;
      iVar1 = DAT_0073b1b0;
    }
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


