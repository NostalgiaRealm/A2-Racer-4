
/* ==== FUN_0047ac90 @ 0047ac90 ==== 
 * signature: undefined __thiscall FUN_0047ac90(void * this, int param_1)
 * body: 0047ac90-0047acf0
 */

void __thiscall FUN_0047ac90(void *this,int param_1)

{
  void *pvVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = param_1;
    pvVar1 = operator_new(param_1 * 0xc);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    *(void **)((int)this + 0xc) = pvVar1;
    pvVar1 = operator_new(param_1 * 0xc);
    if (pvVar1 != (void *)0x0) {
      *(void **)((int)this + 0x10) = pvVar1;
      return;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}


