
/* ==== FUN_0042b0e0 @ 0042b0e0 ==== 
 * signature: undefined __thiscall FUN_0042b0e0(void * this, undefined4 * param_1, int param_2)
 * body: 0042b0e0-0042b109;0042b10d-0042b13c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042b10a-0042b10c
 */

void __thiscall FUN_0042b0e0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int local_c [3];
  
  if ((-1 < param_2) && (param_2 < 100)) {
    puVar1 = (undefined4 *)FUN_0042ae30((void *)((int)this + param_2 * 0x24),local_c);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Maximum_connected_object_00596ef8);
}


