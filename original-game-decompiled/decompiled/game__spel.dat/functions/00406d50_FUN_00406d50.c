
/* ==== FUN_00406d50 @ 00406d50 ==== 
 * signature: undefined __thiscall FUN_00406d50(void * this, int param_1, undefined4 param_2)
 * body: 00406d50-00406d97
 */

void __thiscall FUN_00406d50(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s___s___d_Illegal_entry___d__while_005901b0);
  FUN_004069d0((void *)((int)this + param_1 * 0x18),param_2);
  return;
}


