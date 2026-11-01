
/* ==== FUN_004990d0 @ 004990d0 ==== 
 * signature: undefined __thiscall FUN_004990d0(void * this, void * param_1)
 * body: 004990d0-00499200
 */

/* WARNING: Removing unreachable block (ram,0x004990ea) */

void __thiscall FUN_004990d0(void *this,void *param_1)

{
  void *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  this_00 = (void *)((int)this + 0x14);
  uVar8 = *(uint *)((int)param_1 + 8);
  if (this_00 == param_1) {
    if (*(uint *)((int)this + 0x1c) < uVar8) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_00);
    iVar2 = *(int *)((int)this + 0x1c) - uVar8;
    iVar7 = -1;
    if (iVar2 != -1) {
      iVar7 = iVar2;
    }
    if (iVar7 != 0) {
      puVar6 = (undefined4 *)(uVar8 + *(int *)((int)this + 0x18));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar7),iVar2 - iVar7);
      uVar8 = *(int *)((int)this + 0x1c) - iVar7;
      uVar3 = FUN_00402a00(this_00,uVar8,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(this_00,uVar8);
      }
    }
    FUN_00402c30(this_00);
    return;
  }
  if (uVar8 != 0) {
    puVar4 = *(undefined1 **)((int)param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar7 = *(int *)((int)this + 0x18);
      if (iVar7 != 0) {
        cVar1 = *(char *)(iVar7 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iVar7 + -1));
        }
        else {
          *(char *)(iVar7 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      puVar4 = *(undefined1 **)((int)param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x18) = puVar4;
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)param_1 + 8);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  uVar3 = FUN_00402a00(this_00,uVar8,'\x01');
  if ((char)uVar3 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)((int)param_1 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)((int)param_1 + 4);
    }
    puVar9 = *(undefined4 **)((int)this + 0x18);
    for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)((int)this + 0x1c) = uVar8;
    *(undefined1 *)(*(int *)((int)this + 0x18) + uVar8) = 0;
  }
  return;
}


