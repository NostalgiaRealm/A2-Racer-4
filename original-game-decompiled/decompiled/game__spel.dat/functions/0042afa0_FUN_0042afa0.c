
/* ==== FUN_0042afa0 @ 0042afa0 ==== 
 * signature: undefined __thiscall FUN_0042afa0(void * this, int param_1, int * param_2)
 * body: 0042afa0-0042afc6;0042afca-0042afde
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042afc7-0042afc9
 */

void __thiscall FUN_0042afa0(void *this,int param_1,int *param_2)

{
  if ((-1 < param_1) && (param_1 < 100)) {
    FUN_0042ac80((void *)((int)this + param_1 * 0x24),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Maximum_connected_object_00596d18);
}


