
/* ==== FUN_00469c60 @ 00469c60 ==== 
 * signature: undefined8 __thiscall FUN_00469c60(void * this, int param_1)
 * body: 00469c60-00469c60
 */

undefined8 __thiscall FUN_00469c60(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 auStack_8 [2];
  
  iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar3 = FUN_00469c30(this,param_1);
  FUN_004a6980((uint)(iVar3 != -1),(byte *)s_Could_not_find_static_animation_o_005a7ca8);
  iVar4 = *(int *)((iVar3 + 1) * 0x10 + (int)this) * 0x10;
  iVar5 = FUN_00469810((void *)(iVar4 + *(int *)this),auStack_8,
                       *(int *)((int)this + iVar3 * 0x10 + 0x14));
  if (*(int *)((int)this + iVar3 * 0x10 + 0xc) < *(int *)(iVar5 + 4)) {
    FUN_004a6800(0x7128b0);
    lVar7 = __ftol();
    iVar5 = (int)((ulonglong)lVar7 >> 0x20);
    piVar1 = (int *)((int)this + iVar3 * 0x10 + 0xc);
    *piVar1 = *piVar1 + (int)lVar7;
  }
  else {
    iVar5 = *(int *)((int)this + iVar3 * 0x10 + 0x14) + 1;
    *(int *)((int)this + iVar3 * 0x10 + 0x14) = iVar5;
    if (*(int *)(iVar4 + 0xc + *(int *)this) <= iVar5) {
      *(undefined4 *)((int)this + iVar3 * 0x10 + 0x14) = 0;
    }
    puVar6 = (undefined4 *)
             FUN_00469810((void *)(iVar4 + *(int *)this),auStack_8,
                          *(int *)((int)this + iVar3 * 0x10 + 0x14));
    iVar5 = DAT_0073b0d0 + iVar2;
    *(undefined4 *)(iVar5 + 8 + iVar2 * 0xa8) = *puVar6;
    *(undefined4 *)((int)this + iVar3 * 0x10 + 0xc) = 0;
  }
  iVar2 = *(int *)((int)this + iVar3 * 0x10 + 0x14);
  return CONCAT44(iVar5,CONCAT31((int3)((uint)iVar2 >> 8),
                                 *(int *)(iVar4 + 0xc + *(int *)this) + -1 <= iVar2));
}


