
/* ==== FUN_00469810 @ 00469810 ==== 
 * signature: undefined __thiscall FUN_00469810(void * this, undefined4 * param_1, int param_2)
 * body: 00469810-0046985a
 */

void __thiscall FUN_00469810(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)((int)this + 0xc) <= param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s__s___d__Illegal_index_frame__Fra_005a7a70);
  iVar1 = *(int *)((int)this + 8);
  *param_1 = *(undefined4 *)(iVar1 + param_2 * 8);
  param_1[1] = *(undefined4 *)(iVar1 + 4 + param_2 * 8);
  return;
}


