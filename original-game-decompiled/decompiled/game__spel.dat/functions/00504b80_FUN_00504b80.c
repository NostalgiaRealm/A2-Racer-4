
/* ==== FUN_00504b80 @ 00504b80 ==== 
 * signature: undefined4 __thiscall FUN_00504b80(void * this, int param_1)
 * body: 00504b80-00504bab
 */

undefined4 __thiscall FUN_00504b80(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(ushort *)((int)this + 0x1a) - 1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)((int)this + 0x1c) + iVar1 * 4);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}


