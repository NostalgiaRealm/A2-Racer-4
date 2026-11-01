
/* ==== FUN_004697c0 @ 004697c0 ==== 
 * signature: undefined __thiscall FUN_004697c0(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004697c0-0046980c
 */

void __thiscall FUN_004697c0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0xc) <= param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s__s___d__Illegal_index_frame__Fra_005a7a24);
  *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 8) = param_2;
  *(undefined4 *)(*(int *)((int)this + 8) + 4 + param_1 * 8) = param_3;
  return;
}


