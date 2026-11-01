
/* ==== FUN_0047e390 @ 0047e390 ==== 
 * signature: undefined4 * __thiscall FUN_0047e390(void * this, undefined4 * param_1)
 * body: 0047e390-0047e4d4
 */

/* WARNING: Removing unreachable block (ram,0x0047e3ce) */

undefined4 * __thiscall FUN_0047e390(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  puVar8 = (undefined4 *)((int)this + 0x808);
  *(undefined1 *)puVar8 = *(undefined1 *)param_1;
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x810) = 0;
  *(undefined4 *)((int)this + 0x814) = 0;
  uVar7 = param_1[2];
  if (puVar8 == param_1) {
    if (uVar7 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar8);
    iVar1 = *(int *)((int)this + 0x810) - uVar7;
    iVar5 = -1;
    if (iVar1 != -1) {
      iVar5 = iVar1;
    }
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)(uVar7 + *(int *)((int)this + 0x80c));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar5),iVar1 - iVar5);
      uVar7 = *(int *)((int)this + 0x810) - iVar5;
      uVar2 = FUN_00402a00(puVar8,uVar7,'\0');
      if ((char)uVar2 != '\0') {
        FUN_004029e0(puVar8,uVar7);
      }
    }
    FUN_00402c30(puVar8);
  }
  else {
    if (uVar7 != 0) {
      puVar3 = (undefined1 *)param_1[1];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(puVar8,'\x01');
        puVar3 = (undefined1 *)param_1[1];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x80c) = puVar3;
        *(undefined4 *)((int)this + 0x810) = param_1[2];
        *(undefined4 *)((int)this + 0x814) = param_1[3];
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_0047e4b1;
      }
    }
    uVar2 = FUN_00402a00(puVar8,uVar7,'\x01');
    if ((char)uVar2 != '\0') {
      puVar8 = (undefined4 *)param_1[1];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = *(undefined4 **)((int)this + 0x80c);
      for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)((int)this + 0x810) = uVar7;
      *(undefined1 *)(*(int *)((int)this + 0x80c) + uVar7) = 0;
    }
  }
LAB_0047e4b1:
  iVar5 = 0x100;
  puVar8 = this;
  do {
    *puVar8 = 0xffffffff;
    puVar8[1] = 0;
    puVar8 = puVar8 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return this;
}


