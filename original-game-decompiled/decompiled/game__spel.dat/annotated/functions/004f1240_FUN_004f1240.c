
/* ==== FUN_004f1240 @ 004f1240 ==== 
 * signature: undefined __thiscall FUN_004f1240(void * this, undefined1 param_1)
 * body: 004f1240-004f126a
 */

void __thiscall FUN_004f1240(void *this,undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 4))();
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 0x28;
      iVar1 = iVar1 + -1;
      *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + 4) + -4 + iVar2) = param_1;
    } while (iVar1 != 0);
  }
  return;
}


