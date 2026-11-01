
/* ==== FUN_00442870 @ 00442870 ==== 
 * signature: undefined __thiscall FUN_00442870(void * this, int param_1, int param_2)
 * body: 00442870-00442918
 */

void __thiscall FUN_00442870(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)((int)this + 0x84) / 2;
  iVar1 = *(int *)((int)this + 0x80) / 2;
  FUN_00441940(&local_14,(float)(param_1 - iVar1),(float)(param_2 - iVar2),(float)(iVar1 + param_1),
               (float)(iVar2 + param_2));
  *(undefined4 *)((int)this + 4) = local_10;
  *(undefined4 *)((int)this + 0x20) = local_c;
  *(undefined4 *)((int)this + 0x24) = local_10;
  *(undefined4 *)((int)this + 0x40) = local_c;
  *(undefined4 *)((int)this + 0x44) = local_8;
  *(undefined4 *)this = local_14;
  *(undefined4 *)((int)this + 100) = local_8;
  *(undefined4 *)((int)this + 0x60) = local_14;
  return;
}


