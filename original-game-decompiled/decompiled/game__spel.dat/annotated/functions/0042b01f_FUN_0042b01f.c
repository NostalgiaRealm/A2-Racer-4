
/* ==== FUN_0042b01f @ 0042b01f ==== 
 * signature: undefined __thiscall FUN_0042b01f(void * this, int param_1, undefined4 param_2)
 * body: 0042b01f-0042b046;0042b04a-0042b05e
 */

void __thiscall FUN_0042b01f(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 100)) {
    FUN_0042ae00((void *)((int)this + param_1 * 0x24),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Maximum_connected_object_00596dd8);
}


