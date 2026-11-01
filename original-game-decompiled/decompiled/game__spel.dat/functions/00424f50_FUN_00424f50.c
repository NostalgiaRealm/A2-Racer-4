
/* ==== FUN_00424f50 @ 00424f50 ==== 
 * signature: void * __thiscall FUN_00424f50(void * this, void * param_1)
 * body: 00424f50-004251d8
 */

/* WARNING: Removing unreachable block (ram,0x00425052) */
/* WARNING: Removing unreachable block (ram,0x00424f97) */
/* WARNING: Removing unreachable block (ram,0x00425122) */

void * __thiscall FUN_00424f50(void *this,void *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_004093c0(this,param_1,0,0xffffffff);
  FUN_004093c0((void *)((int)this + 0x10),(void *)((int)param_1 + 0x10),0,0xffffffff);
  uVar2 = *(uint *)((int)param_1 + 0x28);
  pvVar1 = (void *)((int)this + 0x20);
  if (pvVar1 == (void *)((int)param_1 + 0x20)) {
    FUN_0040f800(pvVar1,uVar2,0xffffffff);
    FUN_0040f800(pvVar1,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar3 = *(undefined1 **)((int)param_1 + 0x24);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(pvVar1,'\x01');
        puVar3 = *(undefined1 **)((int)param_1 + 0x24);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x24) = puVar3;
        *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)param_1 + 0x28);
        *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)param_1 + 0x2c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_00425039;
      }
    }
    uVar4 = FUN_00402a00(pvVar1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)((int)param_1 + 0x24) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)((int)param_1 + 0x24);
      }
      puVar7 = *(undefined4 **)((int)this + 0x24);
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(pvVar1,uVar2);
    }
  }
LAB_00425039:
  pvVar1 = (void *)((int)this + 0x30);
  uVar2 = *(uint *)((int)param_1 + 0x38);
  if (pvVar1 == (void *)((int)param_1 + 0x30)) {
    FUN_0040f800(pvVar1,uVar2,0xffffffff);
    FUN_0040f800(pvVar1,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar3 = *(undefined1 **)((int)param_1 + 0x34);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(pvVar1,'\x01');
        puVar3 = *(undefined1 **)((int)param_1 + 0x34);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x34) = puVar3;
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)param_1 + 0x38);
        *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)param_1 + 0x3c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004250f2;
      }
    }
    uVar4 = FUN_00402a00(pvVar1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = *(undefined4 **)((int)param_1 + 0x34);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 0x34);
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(pvVar1,uVar2);
    }
  }
LAB_004250f2:
  pvVar1 = (void *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)param_1 + 0x4c);
  uVar2 = *(uint *)((int)param_1 + 0x58);
  if (pvVar1 == (void *)((int)param_1 + 0x50)) {
    FUN_0040f800(pvVar1,uVar2,0xffffffff);
    FUN_0040f800(pvVar1,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar3 = *(undefined1 **)((int)param_1 + 0x54);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(pvVar1,'\x01');
        puVar3 = *(undefined1 **)((int)param_1 + 0x54);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x54) = puVar3;
        *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)param_1 + 0x58);
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)param_1 + 0x5c);
        puVar3[-1] = puVar3[-1] + '\x01';
        return this;
      }
    }
    uVar4 = FUN_00402a00(pvVar1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = *(undefined4 **)((int)param_1 + 0x54);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 0x54);
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)((int)this + 0x58) = uVar2;
      *(undefined1 *)(*(int *)((int)this + 0x54) + uVar2) = 0;
      return this;
    }
  }
  return this;
}


