
/* ==== FUN_0042b09a @ 0042b09a ==== 
 * signature: undefined __thiscall FUN_0042b09a(void * this, int param_1)
 * body: 0042b09a-0042b09f
 */

void __thiscall FUN_0042b09a(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 100)) {
    FUN_0042ae20((undefined4 *)((int)this + param_1 * 0x24));
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Maximum_connected_object_00596e98);
}


