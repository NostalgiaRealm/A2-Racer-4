
/* ==== FUN_004e6f40 @ 004e6f40 ==== 
 * signature: void * __thiscall FUN_004e6f40(void * this, void * param_1)
 * body: 004e6f40-004e7210
 */

/* WARNING: Removing unreachable block (ram,0x004e7079) */
/* WARNING: Removing unreachable block (ram,0x004e6fc0) */
/* WARNING: Removing unreachable block (ram,0x004e7132) */

void * __thiscall FUN_004e6f40(void *this,void *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (this == param_1) {
    return this;
  }
  FUN_004093c0((void *)((int)this + 0x68),(void *)((int)param_1 + 0x68),0,0xffffffff);
  FUN_004093c0((void *)((int)this + 0x24),(void *)((int)param_1 + 0x24),0,0xffffffff);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)param_1 + 100);
  FUN_004093c0(this,param_1,0,0xffffffff);
  FUN_004093c0((void *)((int)this + 0x34),(void *)((int)param_1 + 0x34),0,0xffffffff);
  uVar2 = *(uint *)((int)param_1 + 0x5c);
  pvVar1 = (void *)((int)this + 0x54);
  if (pvVar1 == (void *)((int)param_1 + 0x54)) {
    FUN_0040f800(pvVar1,uVar2,0xffffffff);
    FUN_0040f800(pvVar1,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar3 = *(undefined1 **)((int)param_1 + 0x58);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(pvVar1,'\x01');
        puVar3 = *(undefined1 **)((int)param_1 + 0x58);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x58) = puVar3;
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)param_1 + 0x5c);
        *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)param_1 + 0x60);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004e7060;
      }
    }
    uVar4 = FUN_00402a00(pvVar1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = *(undefined4 **)((int)param_1 + 0x58);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 0x58);
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
LAB_004e7060:
  pvVar1 = (void *)((int)this + 0x44);
  uVar2 = *(uint *)((int)param_1 + 0x4c);
  if (pvVar1 == (void *)((int)param_1 + 0x44)) {
    FUN_0040f800(pvVar1,uVar2,0xffffffff);
    FUN_0040f800(pvVar1,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar3 = *(undefined1 **)((int)param_1 + 0x48);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(pvVar1,'\x01');
        puVar3 = *(undefined1 **)((int)param_1 + 0x48);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x48) = puVar3;
        *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)param_1 + 0x4c);
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)param_1 + 0x50);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004e7119;
      }
    }
    uVar4 = FUN_00402a00(pvVar1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar6 = *(undefined4 **)((int)param_1 + 0x48);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 0x48);
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
LAB_004e7119:
  pvVar1 = (void *)((int)this + 0x14);
  uVar2 = *(uint *)((int)param_1 + 0x1c);
  if (pvVar1 == (void *)((int)param_1 + 0x14)) {
    FUN_0040f800(pvVar1,uVar2,0xffffffff);
    FUN_0040f800(pvVar1,0,0);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
    return this;
  }
  if (uVar2 != 0) {
    puVar3 = *(undefined1 **)((int)param_1 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      FUN_004028f0(pvVar1,'\x01');
      puVar3 = *(undefined1 **)((int)param_1 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x18) = puVar3;
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)param_1 + 0x20);
      puVar3[-1] = puVar3[-1] + '\x01';
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
      return this;
    }
  }
  uVar4 = FUN_00402a00(pvVar1,uVar2,'\x01');
  if ((char)uVar4 != '\0') {
    puVar6 = *(undefined4 **)((int)param_1 + 0x18);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_0057629c;
    }
    puVar7 = *(undefined4 **)((int)this + 0x18);
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
    *(uint *)((int)this + 0x1c) = uVar2;
    *(undefined1 *)(uVar2 + *(int *)((int)this + 0x18)) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
  return this;
}


