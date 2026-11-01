
/* ==== FUN_0042b05f @ 0042b05f ==== 
 * signature: undefined __thiscall FUN_0042b05f(void * this, int param_1)
 * body: 0042b05f-0042b086;0042b08a-0042b099
 */

void __thiscall FUN_0042b05f(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 100)) {
    FUN_0042ae10((int *)((int)this + param_1 * 0x24));
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Maximum_connected_object_00596e38);
}


