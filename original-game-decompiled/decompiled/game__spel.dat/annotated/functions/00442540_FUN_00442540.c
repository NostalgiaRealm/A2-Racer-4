
/* ==== FUN_00442540 @ 00442540 ==== 
 * signature: undefined __thiscall FUN_00442540(void * this, int param_1, int param_2)
 * body: 00442540-00442646
 */

void __thiscall FUN_00442540(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  iVar2 = DAT_00715f00 + 0x34 + iVar1 * 0x994;
  local_18 = *(float *)(DAT_00715f00 + 0x34 + iVar1 * 0x994);
  local_14 = *(undefined4 *)(iVar2 + 4);
  local_10 = *(undefined4 *)(iVar2 + 8);
  FUN_00441d30(this,local_c,&local_18);
  __ftol();
  lVar3 = __ftol();
  iVar2 = (int)lVar3;
  __ftol();
  lVar3 = __ftol();
  FUN_00442870((void *)(*(int *)(*(int *)((int)this + 0xcc) + 4) + param_2 * 0x8c),(int)lVar3,iVar2)
  ;
  return;
}


