
/* ==== FUN_004423b0 @ 004423b0 ==== 
 * signature: undefined __thiscall FUN_004423b0(void * this, int param_1, int param_2, undefined4 param_3)
 * body: 004423b0-00442539
 */

void __thiscall FUN_004423b0(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98 [3];
  undefined4 local_8c [35];
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  iVar2 = DAT_00715f00 + 0x34 + iVar1 * 0x994;
  local_a4 = *(float *)(DAT_00715f00 + 0x34 + iVar1 * 0x994);
  local_a0 = *(undefined4 *)(iVar2 + 4);
  local_9c = *(undefined4 *)(iVar2 + 8);
  FUN_00441d30(this,local_98,&local_a4);
  if (*(int *)((int)this + 0xe0) == 0) {
    uVar5 = 5;
    uVar4 = 5;
    __ftol();
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    __ftol();
  }
  else {
    lVar3 = __ftol();
    uVar5 = (undefined4)lVar3;
    lVar3 = __ftol();
    uVar4 = (undefined4)lVar3;
    __ftol();
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    __ftol();
  }
  lVar3 = __ftol();
  FUN_00442920(local_8c,(int)lVar3,iVar2,uVar4,uVar5,param_2,(char)param_3);
  FUN_00442d30(*(void **)((int)this + 0xcc),*(undefined4 **)((int)*(void **)((int)this + 0xcc) + 8),
               1,local_8c);
  return;
}


