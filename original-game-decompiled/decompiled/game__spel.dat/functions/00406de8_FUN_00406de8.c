
/* ==== FUN_00406de8 @ 00406de8 ==== 
 * signature: int __thiscall FUN_00406de8(void * this, int param_1)
 * body: 00406de8-00406e2d
 */

int __thiscall FUN_00406de8(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s___s___d_Illegal_entry___d__while_00590274);
  return (int)(void *)((int)this + param_1 * 0x18);
}


