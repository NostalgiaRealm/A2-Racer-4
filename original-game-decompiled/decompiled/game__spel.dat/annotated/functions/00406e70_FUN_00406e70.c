
/* ==== FUN_00406e70 @ 00406e70 ==== 
 * signature: undefined4 __thiscall FUN_00406e70(void * this, int param_1)
 * body: 00406e70-00406eae
 */

undefined4 __thiscall FUN_00406e70(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s___s___d_Illegal_entry___d__while_00590334);
  return *(undefined4 *)((int)this + param_1 * 0x18 + 0x14);
}


