
/* ==== FUN_0040efb0 @ 0040efb0 ==== 
 * signature: undefined __thiscall FUN_0040efb0(void * this, int param_1)
 * body: 0040efb0-0040efdc
 */

void __thiscall FUN_0040efb0(void *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = (*(code *)**(undefined4 **)((int)this + 0x14))();
    if (param_1 < iVar1) {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 0x18) + 4) + param_1 * 0x30) = 0;
    }
  }
  return;
}


