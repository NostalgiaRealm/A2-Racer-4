
/* ==== FUN_00411770 @ 00411770 ==== 
 * signature: int __thiscall FUN_00411770(void * this, int param_1)
 * body: 00411770-004119b8
 */

int __thiscall FUN_00411770(void *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = (undefined1)param_1;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 4) = puVar2;
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == puVar1) {
    return (int)this;
  }
  puVar3 = *(undefined4 **)(puVar1 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(puVar1 + 8) - (int)puVar3) / 0xc;
  }
  uVar5 = 0;
  puVar7 = *(undefined4 **)(puVar2 + 4);
  if (puVar7 != (undefined4 *)0x0) {
    uVar5 = (*(int *)(puVar2 + 8) - (int)puVar7) / 0xc;
  }
  if (uVar5 < uVar6) {
    if (puVar3 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(int *)(puVar1 + 8) - (int)puVar3) / 0xc;
    }
    if (puVar7 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(puVar2 + 0xc) - (int)puVar7) / 0xc;
    }
    if (uVar5 < uVar6) {
      puVar3 = *(undefined4 **)(puVar2 + 8);
      for (; puVar7 != puVar3; puVar7 = puVar7 + 3) {
        FUN_004119e0(puVar7,0);
      }
      FUN_0054b339(*(LPVOID *)(puVar2 + 4));
      iVar4 = FUN_004119c0((int)puVar1);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      puVar3 = operator_new(iVar4 * 0xc);
      *(undefined4 **)(puVar2 + 4) = puVar3;
      puVar3 = FUN_00411f60(*(undefined4 **)(puVar1 + 4),*(undefined4 **)(puVar1 + 8),puVar3);
      *(undefined4 **)(puVar2 + 8) = puVar3;
      *(undefined4 **)(puVar2 + 0xc) = puVar3;
      return (int)this;
    }
    if (puVar7 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(puVar2 + 8) - (int)puVar7) / 0xc;
    }
    puVar8 = puVar3 + iVar4 * 3;
    for (; puVar3 != puVar8; puVar3 = puVar3 + 3) {
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      puVar7[2] = puVar3[2];
      puVar7 = puVar7 + 3;
    }
    puVar3 = *(undefined4 **)(puVar1 + 8);
    puVar7 = *(undefined4 **)(puVar2 + 8);
    for (; puVar8 != puVar3; puVar8 = puVar8 + 3) {
      FUN_00412110(puVar7,puVar8);
      puVar7 = puVar7 + 3;
    }
    iVar4 = *(int *)(puVar1 + 4);
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_00411862;
    }
  }
  else {
    puVar8 = *(undefined4 **)(puVar1 + 8);
    for (; puVar3 != puVar8; puVar3 = puVar3 + 3) {
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      puVar7[2] = puVar3[2];
      puVar7 = puVar7 + 3;
    }
    puVar3 = *(undefined4 **)(puVar2 + 8);
    for (; puVar7 != puVar3; puVar7 = puVar7 + 3) {
      FUN_004119e0(puVar7,0);
    }
    iVar4 = *(int *)(puVar1 + 4);
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_00411862;
    }
  }
  iVar4 = (*(int *)(puVar1 + 8) - iVar4) / 0xc;
LAB_00411862:
  *(int *)(puVar2 + 8) = *(int *)(puVar2 + 4) + iVar4 * 0xc;
  return (int)this;
}


