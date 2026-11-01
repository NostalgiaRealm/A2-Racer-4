
/* ==== FUN_00411320 @ 00411320 ==== 
 * signature: int __thiscall FUN_00411320(void * this, int param_1)
 * body: 00411320-0041159d
 */

int __thiscall FUN_00411320(void *this,int param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *this_00;
  undefined4 *puVar9;
  
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = (undefined1)param_1;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 4) = puVar3;
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == puVar1) {
    return (int)this;
  }
  puVar4 = *(undefined4 **)(puVar1 + 4);
  if (puVar4 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (*(int *)(puVar1 + 8) - (int)puVar4) / 0x18;
  }
  uVar6 = 0;
  this_00 = *(void **)(puVar3 + 4);
  if (this_00 != (void *)0x0) {
    uVar6 = (*(int *)(puVar3 + 8) - (int)this_00) / 0x18;
  }
  if (uVar8 <= uVar6) {
    puVar9 = *(undefined4 **)(puVar1 + 8);
    for (; puVar4 != puVar9; puVar4 = puVar4 + 6) {
      FUN_004115a0(this_00,puVar4);
      this_00 = (void *)((int)this_00 + 0x18);
    }
    pvVar2 = *(void **)(puVar3 + 8);
    for (; this_00 != pvVar2; this_00 = (void *)((int)this_00 + 0x18)) {
      FUN_004116f0(this_00,0);
    }
    if (*(int *)(puVar1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(puVar1 + 8) - *(int *)(puVar1 + 4)) / 0x18;
    }
    *(int *)(puVar3 + 8) = *(int *)(puVar3 + 4) + iVar5 * 0x18;
    return (int)this;
  }
  if (puVar4 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (*(int *)(puVar1 + 8) - (int)puVar4) / 0x18;
  }
  if (this_00 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(puVar3 + 0xc) - (int)this_00) / 0x18;
  }
  if (uVar8 <= uVar6) {
    if (this_00 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(puVar3 + 8) - (int)this_00) / 0x18;
    }
    puVar9 = puVar4 + iVar5 * 6;
    for (; puVar4 != puVar9; puVar4 = puVar4 + 6) {
      FUN_004115a0(this_00,puVar4);
      this_00 = (void *)((int)this_00 + 0x18);
    }
    puVar4 = *(undefined4 **)(puVar1 + 8);
    puVar7 = *(undefined4 **)(puVar3 + 8);
    for (; puVar9 != puVar4; puVar9 = puVar9 + 6) {
      FUN_00411fb0(puVar7,puVar9);
      puVar7 = puVar7 + 6;
    }
    if (*(int *)(puVar1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(puVar1 + 8) - *(int *)(puVar1 + 4)) / 0x18;
    }
    *(int *)(puVar3 + 8) = *(int *)(puVar3 + 4) + iVar5 * 0x18;
    return (int)this;
  }
  pvVar2 = *(void **)(puVar3 + 8);
  for (; this_00 != pvVar2; this_00 = (void *)((int)this_00 + 0x18)) {
    FUN_004116f0(this_00,0);
  }
  FUN_0054b339(*(LPVOID *)(puVar3 + 4));
  iVar5 = FUN_004d2ce0((int)puVar1);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  puVar4 = operator_new(iVar5 * 0x18);
  *(undefined4 **)(puVar3 + 4) = puVar4;
  puVar4 = FUN_00411f20(*(undefined4 **)(puVar1 + 4),*(undefined4 **)(puVar1 + 8),puVar4);
  *(undefined4 **)(puVar3 + 8) = puVar4;
  *(undefined4 **)(puVar3 + 0xc) = puVar4;
  return (int)this;
}


