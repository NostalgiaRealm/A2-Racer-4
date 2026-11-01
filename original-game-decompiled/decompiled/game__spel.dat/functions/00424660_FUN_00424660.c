
/* ==== FUN_00424660 @ 00424660 ==== 
 * signature: int __thiscall FUN_00424660(void * this, int param_1)
 * body: 00424660-00424696;0042469a-004246ad
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00424697-00424699
 */

int __thiscall FUN_00424660(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004245f0(this,param_1);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Cannot_find_vehicle_name_00595b34);
  }
  return *(int *)(*(int *)((int)this + 4) + 4) + iVar1 * 0x60;
}


