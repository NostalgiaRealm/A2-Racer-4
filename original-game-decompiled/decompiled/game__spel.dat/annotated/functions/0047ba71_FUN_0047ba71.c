
/* ==== FUN_0047ba71 @ 0047ba71 ==== 
 * signature: undefined4 * __thiscall FUN_0047ba71(void * this, undefined4 * param_1, undefined1 param_2)
 * body: 0047ba71-0047ba7f
 */

/* WARNING: Removing unreachable block (ram,0x0047bae1) */

undefined4 * __thiscall FUN_0047ba71(void *this,undefined4 *param_1,undefined1 param_2)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = 0;
  this_00 = (undefined4 *)((int)this + 0x34);
  *(undefined1 *)this_00 = *(undefined1 *)param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  uVar2 = param_1[2];
  if (this_00 == param_1) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_00);
    iVar1 = *(int *)((int)this + 0x3c) - uVar2;
    iVar7 = -1;
    if (iVar1 != -1) {
      iVar7 = iVar1;
    }
    if (iVar7 != 0) {
      puVar4 = (undefined4 *)(uVar2 + *(int *)((int)this + 0x38));
      FUN_005580e0(puVar4,(undefined4 *)((int)puVar4 + iVar7),iVar1 - iVar7);
      uVar2 = *(int *)((int)this + 0x3c) - iVar7;
      uVar3 = FUN_00402a00(this_00,uVar2,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(this_00,uVar2);
      }
    }
    FUN_0040f800(this_00,0,0);
    *(undefined ***)this = &PTR_FUN_00576a98;
    return this;
  }
  if (uVar2 != 0) {
    puVar5 = (undefined1 *)param_1[1];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    if ((byte)puVar5[-1] < 0xfe) {
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x40) = 0;
      puVar5 = (undefined1 *)param_1[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x38) = puVar5;
      *(undefined4 *)((int)this + 0x3c) = param_1[2];
      *(undefined4 *)((int)this + 0x40) = param_1[3];
      puVar5[-1] = puVar5[-1] + '\x01';
      *(undefined ***)this = &PTR_FUN_00576a98;
      return this;
    }
  }
  uVar3 = FUN_00402a00(this_00,uVar2,'\x01');
  if ((char)uVar3 != '\0') {
    puVar4 = (undefined4 *)&DAT_0057629c;
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)param_1[1];
    }
    puVar8 = *(undefined4 **)((int)this + 0x38);
    for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(this_00,uVar2);
  }
  *(undefined ***)this = &PTR_FUN_00576a98;
  return this;
}


