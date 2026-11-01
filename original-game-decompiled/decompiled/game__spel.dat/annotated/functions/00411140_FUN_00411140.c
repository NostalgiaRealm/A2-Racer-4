
/* ==== FUN_00411140 @ 00411140 ==== 
 * signature: undefined1 * __thiscall FUN_00411140(void * this, undefined1 * param_1)
 * body: 00411140-004112b4
 */

/* WARNING: Removing unreachable block (ram,0x00411168) */

undefined1 * __thiscall FUN_00411140(void *this,undefined1 *param_1)

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
  
  *(undefined1 *)this = *param_1;
  uVar8 = *(uint *)(param_1 + 0xc);
  puVar5 = (undefined1 *)((int)this + 4);
  if (puVar5 == param_1 + 4) {
    if (*(uint *)((int)this + 0xc) < uVar8) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar5);
    iVar2 = *(int *)((int)this + 0xc) - uVar8;
    iVar9 = -1;
    if (iVar2 != -1) {
      iVar9 = iVar2;
    }
    if (iVar9 != 0) {
      puVar7 = (undefined4 *)(uVar8 + *(int *)((int)this + 8));
      FUN_005580e0(puVar7,(undefined4 *)((int)puVar7 + iVar9),iVar2 - iVar9);
      uVar8 = *(int *)((int)this + 0xc) - iVar9;
      uVar3 = FUN_00402a00(puVar5,uVar8,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar5,uVar8);
      }
    }
    FUN_00402c30(puVar5);
  }
  else {
    if (uVar8 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 8);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar9 = *(int *)((int)this + 8);
        if (iVar9 != 0) {
          cVar1 = *(char *)(iVar9 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar9 + -1));
          }
          else {
            *(char *)(iVar9 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        puVar5 = *(undefined1 **)(param_1 + 8);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar5;
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_00411279;
      }
    }
    uVar3 = FUN_00402a00(puVar5,uVar8,'\x01');
    if ((char)uVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_1 + 8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar10 = *(undefined4 **)((int)this + 8);
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
      *(uint *)((int)this + 0xc) = uVar8;
      *(undefined1 *)(*(int *)((int)this + 8) + uVar8) = 0;
    }
  }
LAB_00411279:
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FUN_00411320((void *)((int)this + 0x18),(int)(param_1 + 0x18));
  FUN_00411770((void *)((int)this + 0x20),(int)(param_1 + 0x20));
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return this;
}


