
/* ==== FUN_004030b0 @ 004030b0 ==== 
 * signature: undefined __thiscall FUN_004030b0(void * this, int param_1)
 * body: 004030b0-004030eb
 */

void __thiscall FUN_004030b0(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < -1) || (0x31 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s__s___d__Illegal_car_type_index_g_0058ea14);
  *(int *)((int)this + 0x20) = param_1;
  return;
}


