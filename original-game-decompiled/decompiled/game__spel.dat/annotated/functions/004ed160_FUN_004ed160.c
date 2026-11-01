
/* ==== FUN_004ed160 @ 004ed160 ==== 
 * signature: int __thiscall FUN_004ed160(void * this, int param_1)
 * body: 004ed160-004ed2e1
 */

int __thiscall FUN_004ed160(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (this != (void *)param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
    }
    puVar5 = *(undefined4 **)((int)this + 4);
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)((int)this + 8) - (int)puVar5 >> 2;
    }
    if (uVar6 <= uVar3) {
      puVar2 = *(undefined4 **)(param_1 + 8);
      for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return (int)this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
      return (int)this;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
    }
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)((int)this + 0xc) - (int)puVar5 >> 2;
    }
    if (uVar6 <= uVar3) {
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar5 >> 2;
      }
      puVar2 = puVar1 + iVar4;
      for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = *(undefined4 **)(param_1 + 8);
      puVar5 = *(undefined4 **)((int)this + 8);
      for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return (int)this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
      return (int)this;
    }
    FUN_0054b339(puVar5);
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2;
  }
  return (int)this;
}


