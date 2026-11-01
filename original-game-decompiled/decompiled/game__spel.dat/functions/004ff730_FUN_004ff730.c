
/* ==== FUN_004ff730 @ 004ff730 ==== 
 * signature: undefined __thiscall FUN_004ff730(void * this, int param_1)
 * body: 004ff730-004ff74a
 */

void __thiscall FUN_004ff730(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x14);
  if (pvVar1 != (void *)0x0) {
    FUN_004ff620(this,*(int **)((int)pvVar1 + 700),pvVar1);
  }
  return;
}


