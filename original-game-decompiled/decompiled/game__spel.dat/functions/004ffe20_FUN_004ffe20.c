
/* ==== FUN_004ffe20 @ 004ffe20 ==== 
 * signature: undefined __thiscall FUN_004ffe20(void * this, int param_1)
 * body: 004ffe20-004ffe45
 */

void __thiscall FUN_004ffe20(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(ushort *)((int)this + 0x1e) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x20) + iVar1 * 4);
    do {
      if (*(int *)*puVar2 == param_1) {
        return;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  return;
}


