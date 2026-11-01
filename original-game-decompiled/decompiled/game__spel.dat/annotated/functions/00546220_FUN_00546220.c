
/* ==== FUN_00546220 @ 00546220 ==== 
 * signature: undefined4 __thiscall FUN_00546220(void * this, int param_1)
 * body: 00546220-0054639c
 */

undefined4 __thiscall FUN_00546220(void *this,int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 uStack_c;
  
  FUN_005463a0(this,param_1,*(int *)((int)this + 0x2c) + -1);
  FUN_00546400(this,param_1,*(int *)((int)this + 0x2c) + -1);
  for (iVar4 = *(int *)((int)this + 0x2c) + -2; param_1 < iVar4; iVar4 = iVar4 + -1) {
    dVar1 = *(double *)
             (*(int *)((int)this + 0xc) + (*(int *)((int)this + 0x28) * iVar4 + param_1) * 8);
    if (dVar1 != 0.0) {
      FUN_00546550(this,*(int *)((int)this + 0x2c) + -1,iVar4,dVar1);
    }
    iVar3 = *(int *)((int)this + 0xc);
    iVar2 = *(int *)((int)this + 0x28) * iVar4 + param_1;
    *(undefined4 *)(iVar3 + iVar2 * 8) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = 0;
  }
  iVar4 = FUN_00545b80(this,param_1);
  if (iVar4 != 1) {
    FUN_00546550(this,*(int *)((int)this + 0x2c) + -1,param_1,-1.0);
    iVar4 = *(int *)((int)this + 0xc);
    iVar3 = (*(int *)((int)this + 0x28) + 1) * param_1;
    *(undefined4 *)(iVar4 + iVar3 * 8) = 0;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = 0x3ff00000;
  }
  iVar4 = *(int *)((int)this + 0x2c) + -1;
  if (param_1 < iVar4) {
    do {
      dVar1 = *(double *)
               (*(int *)((int)this + 0xc) + (*(int *)((int)this + 0x28) * iVar4 + param_1) * 8);
      if (dVar1 != 0.0) {
        uStack_c = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_10 = SUB84(dVar1,0);
        FUN_00545e00(this,param_1,iVar4,local_10,uStack_c);
      }
      param_1 = param_1 + 1;
      iVar4 = *(int *)((int)this + 0x2c) + -1;
    } while (param_1 < iVar4);
  }
  iVar4 = FUN_00545ae0(this,*(int *)((int)this + 0x2c) + -1);
  if (iVar4 == 1) {
    iVar3 = *(int *)((int)this + 0x2c) + -1;
    for (iVar4 = *(int *)((int)this + 0x2c) + -2; -1 < iVar4; iVar4 = iVar4 + -1) {
      dVar1 = *(double *)
               (*(int *)((int)this + 8) + (*(int *)((int)this + 0x28) * iVar4 + iVar3) * 8);
      if (dVar1 != 0.0) {
        FUN_00545f30(this,iVar3,iVar4,dVar1);
      }
    }
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
    return 1;
  }
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
  return 0;
}


