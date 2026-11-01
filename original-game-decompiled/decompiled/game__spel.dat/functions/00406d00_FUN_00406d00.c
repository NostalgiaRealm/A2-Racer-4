
/* ==== FUN_00406d00 @ 00406d00 ==== 
 * signature: undefined __thiscall FUN_00406d00(void * this, int param_1, void * param_2)
 * body: 00406d00-00406d47
 */

void __thiscall FUN_00406d00(void *this,int param_1,void *param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s___s___d_Illegal_entry___d__while_00590154);
  FUN_004068a0((void *)((int)this + param_1 * 0x18),param_2);
  return;
}


