
/* ==== FUN_00490a20 @ 00490a20 ==== 
 * signature: int __thiscall FUN_00490a20(void * this, int param_1, int param_2)
 * body: 00490a20-00490c0e
 */

int __thiscall FUN_00490a20(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)((int)this + 4);
  iVar4 = *(int *)((int)this + 8);
  iVar5 = *(int *)((int)this + 0xc) - iVar4;
  iVar2 = iVar5 >> 0x1f;
  if (iVar5 / 0x78 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar4 - iVar1) / 0x78, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x78;
    }
    iVar4 = iVar4 + uVar6;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 0x78);
    puVar7 = puVar3;
    for (iVar2 = *(int *)((int)this + 4); iVar2 != param_1; iVar2 = iVar2 + 0x78) {
      FUN_004913b0(puVar7,iVar2);
      puVar7 = puVar7 + 0x1e;
    }
    FUN_004913b0(puVar7,param_2);
    FUN_00490ce0(param_1,*(int *)((int)this + 8),puVar7 + 0x1e);
    FUN_00490c40(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar3 + iVar4 * 0x1e;
    iVar4 = FUN_00490c10((int)this);
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3 + (iVar4 + 1) * 0x1e;
  }
  else {
    iVar2 = iVar4 - param_1 >> 0x1f;
    if ((iVar4 - param_1) / 0x78 + iVar2 == iVar2) {
      FUN_00490ce0(param_1,iVar4,(undefined4 *)(param_1 + 0x78));
      FUN_00490d20(*(undefined4 **)((int)this + 8),
                   1 - ((int)*(undefined4 **)((int)this + 8) - param_1) / 0x78,param_2);
      FUN_00491050(param_1,*(int *)((int)this + 8),param_2);
    }
    else {
      FUN_00490ce0(iVar4 + -0x78,iVar4,(undefined4 *)iVar4);
      FUN_00491150(param_1,*(int *)((int)this + 8) + -0x78,*(int *)((int)this + 8));
      FUN_00491050(param_1,param_1 + 0x78,param_2);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x78;
  }
  return *(int *)((int)this + 4) + ((param_1 - iVar1) / 0x78) * 0x78;
}


