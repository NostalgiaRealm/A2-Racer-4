
/* ==== FUN_004f18f0 @ 004f18f0 ==== 
 * signature: void * __thiscall FUN_004f18f0(void * this, void * param_1)
 * body: 004f18f0-004f1a42
 */

/* WARNING: Removing unreachable block (ram,0x004f1909) */

void * __thiscall FUN_004f18f0(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar7 = *(uint *)((int)param_1 + 8);
  if (this == param_1) {
    if (*(uint *)((int)this + 8) < uVar7) {
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar2 = *(int *)((int)this + 8) - uVar7;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(uVar7 + *(int *)((int)this + 4));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((int)this + 8) - iVar8;
      uVar3 = FUN_00402a00(this,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(this,uVar7);
      }
    }
    FUN_00402c30(this);
  }
  else {
    if (uVar7 != 0) {
      puVar4 = *(undefined1 **)((int)param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar8 = *(int *)((int)this + 4);
        if (iVar8 != 0) {
          cVar1 = *(char *)(iVar8 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar8 + -1));
          }
          else {
            *(char *)(iVar8 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        puVar4 = *(undefined1 **)((int)param_1 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 4) = puVar4;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004f1a16;
      }
    }
    uVar3 = FUN_00402a00(this,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar6 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)((int)param_1 + 4) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)((int)param_1 + 4);
      }
      puVar9 = *(undefined4 **)((int)this + 4);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)((int)this + 8) = uVar7;
      *(undefined1 *)(uVar7 + *(int *)((int)this + 4)) = 0;
    }
  }
LAB_004f1a16:
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)((int)param_1 + 0x24);
  return this;
}


