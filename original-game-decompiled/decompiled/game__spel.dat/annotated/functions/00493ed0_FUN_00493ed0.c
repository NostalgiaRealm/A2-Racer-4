
/* ==== FUN_00493ed0 @ 00493ed0 ==== 
 * signature: undefined __thiscall FUN_00493ed0(void * this, undefined4 param_1)
 * body: 00493ed0-00493f0d
 */

void __thiscall FUN_00493ed0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004928c0(*(void **)((int)this + 0x18),param_1);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x1c))();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_004928c0(*(void **)(*(int *)(*(int *)((int)this + 0x20) + 4) + iVar2 * 4),param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


