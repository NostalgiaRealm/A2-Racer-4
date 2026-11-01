
/* ==== FUN_00411c80 @ 00411c80 ==== 
 * signature: int __thiscall FUN_00411c80(void * this, int param_1)
 * body: 00411c80-00411f14
 */

int __thiscall FUN_00411c80(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (this != (void *)param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(param_1 + 8) - (int)puVar1) / 0xc;
    }
    puVar6 = *(undefined4 **)((int)this + 4);
    if (puVar6 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)((int)this + 8) - (int)puVar6) / 0xc;
    }
    if (uVar5 <= uVar3) {
      puVar2 = *(undefined4 **)(param_1 + 8);
      for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
        *puVar6 = *puVar1;
        puVar6[1] = puVar1[1];
        puVar6[2] = puVar1[2];
        puVar6 = puVar6 + 3;
      }
      puVar1 = *(undefined4 **)((int)this + 8);
      for (; puVar6 != puVar1; puVar6 = puVar6 + 3) {
        FUN_004119e0(puVar6,0);
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return (int)this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc) * 0xc;
      return (int)this;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(param_1 + 8) - (int)puVar1) / 0xc;
    }
    if (puVar6 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)((int)this + 0xc) - (int)puVar6) / 0xc;
    }
    if (uVar5 <= uVar3) {
      if (puVar6 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - (int)puVar6) / 0xc;
      }
      puVar2 = puVar1 + iVar4 * 3;
      for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
        *puVar6 = *puVar1;
        puVar6[1] = puVar1[1];
        puVar6[2] = puVar1[2];
        puVar6 = puVar6 + 3;
      }
      puVar1 = *(undefined4 **)(param_1 + 8);
      puVar6 = *(undefined4 **)((int)this + 8);
      for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar2;
          puVar6[1] = puVar2[1];
          puVar6[2] = puVar2[2];
        }
        puVar6 = puVar6 + 3;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return (int)this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc) * 0xc;
      return (int)this;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 3) {
      FUN_0041e410();
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 0xc);
    *(undefined4 **)((int)this + 4) = puVar2;
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar6 = *(undefined4 **)(param_1 + 4); puVar6 != puVar1; puVar6 = puVar6 + 3) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
        puVar2[1] = puVar6[1];
        puVar2[2] = puVar6[2];
      }
      puVar2 = puVar2 + 3;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2;
  }
  return (int)this;
}


