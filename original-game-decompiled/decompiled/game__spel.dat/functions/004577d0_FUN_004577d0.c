
/* ==== FUN_004577d0 @ 004577d0 ==== 
 * signature: undefined __thiscall FUN_004577d0(void * this, undefined4 param_1)
 * body: 004577d0-00457817;0045781b-0045781d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00457818-0045781a
 */

void __thiscall FUN_004577d0(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x290) = param_1;
  if (*(int *)((int)this + 0x27c) != 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x25c) + 100))
                      (*(int **)((int)this + 0x25c),6,*(undefined4 *)((int)this + 0x290));
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
  }
  return;
}


