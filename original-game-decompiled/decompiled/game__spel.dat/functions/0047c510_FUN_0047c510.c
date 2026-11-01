
/* ==== FUN_0047c510 @ 0047c510 ==== 
 * signature: undefined __thiscall FUN_0047c510(void * this, undefined4 * param_1)
 * body: 0047c510-0047c555
 */

void __thiscall FUN_0047c510(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_007126a6 != '\0') {
    iVar1 = (*(code *)**(undefined4 **)((int)this + 0x74))();
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + iVar2 * 4) + 0x28))
                  (param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_0047bdc0(this,param_1);
  }
  return;
}


