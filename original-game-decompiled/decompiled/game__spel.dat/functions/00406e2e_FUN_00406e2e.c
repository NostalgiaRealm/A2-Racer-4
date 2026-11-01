
/* ==== FUN_00406e2e @ 00406e2e ==== 
 * signature: undefined4 __thiscall FUN_00406e2e(void * this, int param_1)
 * body: 00406e2e-00406e6e
 */

undefined4 __thiscall FUN_00406e2e(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s___s___d_Illegal_entry___d__while_005902d0);
  return *(undefined4 *)((int)this + param_1 * 0x18 + 0x10);
}


