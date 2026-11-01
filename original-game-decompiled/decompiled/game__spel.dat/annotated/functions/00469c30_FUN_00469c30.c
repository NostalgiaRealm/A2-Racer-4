
/* ==== FUN_00469c30 @ 00469c30 ==== 
 * signature: int __thiscall FUN_00469c30(void * this, int param_1)
 * body: 00469c30-00469c56
 */

int __thiscall FUN_00469c30(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x408)) {
    piVar2 = (int *)((int)this + 8);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)((int)this + 0x408));
  }
  return -1;
}


