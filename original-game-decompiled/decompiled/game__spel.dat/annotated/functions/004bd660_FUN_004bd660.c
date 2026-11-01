
/* ==== FUN_004bd660 @ 004bd660 ==== 
 * signature: undefined4 __thiscall FUN_004bd660(void * this, int param_1)
 * body: 004bd660-004bd683;004bd687-004bd74c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bd684-004bd686
 */

undefined4 __thiscall FUN_004bd660(void *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____trying_to_allocate_nega_005b2534);
  }
  FUN_004bd780((int)this);
  if (*(int *)this == 1) {
    pvVar1 = operator_new(param_1 << 5);
    if (pvVar1 != (void *)0x0) {
      *(void **)((int)this + 0x78) = pvVar1;
      *(int *)((int)this + 0x7c) = param_1;
      *(undefined4 *)((int)this + 4) = 1;
      return 0;
    }
    *(int *)((int)this + 0x7c) = param_1;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 4) = 1;
  }
  else if (*(int *)this == 2) {
    pvVar1 = operator_new(param_1 << 5);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    *(void **)((int)this + 0x80) = pvVar1;
    *(int *)((int)this + 0x84) = param_1;
    *(undefined4 *)((int)this + 4) = 2;
    pvVar1 = operator_new(param_1 * 0xc);
    if (pvVar1 == (void *)0x0) {
      *(int *)((int)this + 0x8c) = param_1;
      *(undefined4 *)((int)this + 0x88) = 0;
      return 0;
    }
    *(void **)((int)this + 0x88) = pvVar1;
    *(int *)((int)this + 0x8c) = param_1;
    return 0;
  }
  return 0;
}


