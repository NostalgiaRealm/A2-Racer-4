
/* ==== FUN_00411a00 @ 00411a00 ==== 
 * signature: int __thiscall FUN_00411a00(int param_1, int param_2)
 * body: 00411a00-00411c7c
 */

int __thiscall FUN_00411a00(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *this;
  
  if (param_1 == param_2) {
    return param_1;
  }
  puVar5 = *(undefined4 **)(param_2 + 4);
  if (puVar5 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)(param_2 + 8) - (int)puVar5) / 0x18;
  }
  this = *(void **)(param_1 + 4);
  if (this == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 8) - (int)this) / 0x18;
  }
  if (uVar7 <= uVar3) {
    puVar6 = *(undefined4 **)(param_2 + 8);
    for (; puVar5 != puVar6; puVar5 = puVar5 + 6) {
      FUN_004115a0(this,puVar5);
      this = (void *)((int)this + 0x18);
    }
    pvVar1 = *(void **)(param_1 + 8);
    for (; this != pvVar1; this = (void *)((int)this + 0x18)) {
      FUN_004116f0(this,0);
    }
    if (*(int *)(param_2 + 4) != 0) {
      *(int *)(param_1 + 8) =
           *(int *)(param_1 + 4) + ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18) * 0x18;
      return param_1;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    return param_1;
  }
  if (puVar5 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)(param_2 + 8) - (int)puVar5) / 0x18;
  }
  if (this == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 0xc) - (int)this) / 0x18;
  }
  if (uVar3 < uVar7) {
    pvVar1 = *(void **)(param_1 + 8);
    for (; this != pvVar1; this = (void *)((int)this + 0x18)) {
      FUN_0041e3a0((int)this);
    }
    FUN_0054b339(*(LPVOID *)(param_1 + 4));
    if (*(int *)(param_2 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 0x18);
    *(undefined4 **)(param_1 + 4) = puVar2;
    puVar5 = *(undefined4 **)(param_2 + 8);
    for (puVar6 = *(undefined4 **)(param_2 + 4); puVar6 != puVar5; puVar6 = puVar6 + 6) {
      FUN_00411fb0(puVar2,puVar6);
      puVar2 = puVar2 + 6;
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
    *(undefined4 **)(param_1 + 0xc) = puVar2;
    return param_1;
  }
  if (this == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(param_1 + 8) - (int)this) / 0x18;
  }
  puVar6 = puVar5 + iVar4 * 6;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 6) {
    FUN_004115a0(this,puVar5);
    this = (void *)((int)this + 0x18);
  }
  puVar5 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_1 + 8);
  for (; puVar6 != puVar5; puVar6 = puVar6 + 6) {
    FUN_00411fb0(puVar2,puVar6);
    puVar2 = puVar2 + 6;
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 4) + ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18) * 0x18;
    return param_1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return param_1;
}


