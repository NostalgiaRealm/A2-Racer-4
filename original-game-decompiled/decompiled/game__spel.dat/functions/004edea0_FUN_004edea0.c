
/* ==== FUN_004edea0 @ 004edea0 ==== 
 * signature: int __thiscall FUN_004edea0(void * this, undefined1 * param_1)
 * body: 004edea0-004ee039
 */

/* WARNING: Removing unreachable block (ram,0x004edf0c) */

int __thiscall FUN_004edea0(void *this,undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005727fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00558643(this,8,5,&LAB_004ee1c0);
  puVar5 = (undefined1 *)((int)this + 0x28);
  *puVar5 = param_1._0_1_;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = 1;
  FUN_004ede90((int)this);
  uVar8 = *(uint *)(param_1 + 8);
  if (puVar5 == param_1) {
    if (*(uint *)((int)this + 0x30) < uVar8) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar5);
    iVar2 = *(int *)((int)this + 0x30) - uVar8;
    iVar9 = -1;
    if (iVar2 != -1) {
      iVar9 = iVar2;
    }
    if (iVar9 != 0) {
      puVar7 = (undefined4 *)(uVar8 + *(int *)((int)this + 0x2c));
      FUN_005580e0(puVar7,(undefined4 *)((int)puVar7 + iVar9),iVar2 - iVar9);
      uVar8 = *(int *)((int)this + 0x30) - iVar9;
      uVar3 = FUN_00402a00(puVar5,uVar8,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar5,uVar8);
      }
    }
    FUN_00402c30(puVar5);
  }
  else {
    if (uVar8 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar9 = *(int *)((int)this + 0x2c);
        if (iVar9 != 0) {
          cVar1 = *(char *)(iVar9 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar9 + -1));
          }
          else {
            *(char *)(iVar9 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)this + 0x2c) = 0;
        *(undefined4 *)((int)this + 0x30) = 0;
        *(undefined4 *)((int)this + 0x34) = 0;
        puVar5 = *(undefined1 **)(param_1 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x2c) = puVar5;
        *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004ee013;
      }
    }
    uVar3 = FUN_00402a00(puVar5,uVar8,'\x01');
    if ((char)uVar3 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 4);
      }
      puVar10 = *(undefined4 **)((int)this + 0x2c);
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_004029e0(puVar5,uVar8);
    }
  }
LAB_004ee013:
  FUN_004ee040((int)this);
  ExceptionList = pvStack_c;
  return (int)this;
}


