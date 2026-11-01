
/* ==== FUN_00486310 @ 00486310 ==== 
 * signature: undefined __thiscall FUN_00486310(void * this, int * param_1)
 * body: 00486310-004864bd
 */

/* WARNING: Removing unreachable block (ram,0x00486374) */

void __thiscall FUN_00486310(void *this,int *param_1)

{
  int *this_00;
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  
  uVar12 = param_1[2];
  pbVar6 = (byte *)param_1[1];
  this_00 = (int *)((int)this + 0x9c);
  pbVar2 = pbVar6;
  if (pbVar6 == (byte *)0x0) {
    pbVar2 = &DAT_0057629c;
  }
  uVar10 = *(uint *)((int)this + 0xa4);
  uVar8 = uVar10;
  if (uVar12 <= uVar10) {
    uVar8 = uVar12;
  }
  bVar14 = false;
  iVar3 = 0;
  bVar15 = true;
  pbVar11 = *(byte **)((int)this + 0xa0);
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar14 = *pbVar11 < *pbVar2;
    bVar15 = *pbVar11 == *pbVar2;
    pbVar11 = pbVar11 + 1;
    pbVar2 = pbVar2 + 1;
  } while (bVar15);
  if (!bVar15) {
    iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
  }
  if (((iVar3 != 0) || (uVar10 < uVar12)) || (uVar10 != uVar12)) {
    if (this_00 == param_1) {
      if (*(uint *)((int)this + 0xa4) < uVar12) {
        FUN_0054b29c();
      }
      FUN_00402c30(this_00);
      iVar4 = *(int *)((int)this + 0xa4) - uVar12;
      iVar3 = -1;
      if (iVar4 != -1) {
        iVar3 = iVar4;
      }
      if (iVar3 != 0) {
        puVar9 = (undefined4 *)(*(int *)((int)this + 0xa0) + uVar12);
        FUN_005580e0(puVar9,(undefined4 *)((int)puVar9 + iVar3),iVar4 - iVar3);
        uVar12 = *(int *)((int)this + 0xa4) - iVar3;
        uVar5 = FUN_00402a00(this_00,uVar12,'\0');
        if ((char)uVar5 != '\0') {
          FUN_004029e0(this_00,uVar12);
        }
      }
      FUN_00402c30(this_00);
      (**(code **)(*(int *)this + 0x3c))();
      return;
    }
    if (uVar12 != 0) {
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = &DAT_0057629c;
      }
      if (pbVar6[-1] < 0xfe) {
        iVar3 = *(int *)((int)this + 0xa0);
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar3 + -1));
          }
          else {
            *(char *)(iVar3 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)this + 0xa0) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        *(undefined4 *)((int)this + 0xa8) = 0;
        puVar7 = (undefined1 *)param_1[1];
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0xa0) = puVar7;
        *(int *)((int)this + 0xa4) = param_1[2];
        *(int *)((int)this + 0xa8) = param_1[3];
        puVar7[-1] = puVar7[-1] + '\x01';
        (**(code **)(*(int *)this + 0x3c))();
        return;
      }
    }
    uVar5 = FUN_00402a00(this_00,uVar12,'\x01');
    if ((char)uVar5 != '\0') {
      puVar9 = (undefined4 *)param_1[1];
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)&DAT_0057629c;
      }
      puVar13 = *(undefined4 **)((int)this + 0xa0);
      for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = uVar12 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FUN_004029e0(this_00,uVar12);
    }
    (**(code **)(*(int *)this + 0x3c))();
  }
  return;
}


