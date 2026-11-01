
/* ==== FUN_004ffa00 @ 004ffa00 ==== 
 * signature: undefined4 __thiscall FUN_004ffa00(void * this, int param_1)
 * body: 004ffa00-004ffa30
 */

undefined4 __thiscall FUN_004ffa00(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(ushort *)((int)this + 0x1e) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x20) + iVar1 * 4);
    do {
      if (*(int *)*puVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}


