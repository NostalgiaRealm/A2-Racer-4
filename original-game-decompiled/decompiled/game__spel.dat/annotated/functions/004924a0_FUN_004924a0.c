
/* ==== FUN_004924a0 @ 004924a0 ==== 
 * signature: undefined4 * __thiscall FUN_004924a0(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 004924a0-004925e4
 */

/* WARNING: Removing unreachable block (ram,0x004924d8) */

undefined4 * __thiscall FUN_004924a0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)((int)this + 4) = param_1;
  puVar8 = (undefined4 *)((int)this + 8);
  *(undefined1 *)puVar8 = *(undefined1 *)param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar6 = param_2[2];
  if (puVar8 == param_2) {
    if (uVar6 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar8);
    iVar1 = *(int *)((int)this + 0x10) - uVar6;
    iVar7 = -1;
    if (iVar1 != -1) {
      iVar7 = iVar1;
    }
    if (iVar7 != 0) {
      puVar5 = (undefined4 *)(uVar6 + *(int *)((int)this + 0xc));
      FUN_005580e0(puVar5,(undefined4 *)((int)puVar5 + iVar7),iVar1 - iVar7);
      uVar6 = *(int *)((int)this + 0x10) - iVar7;
      uVar2 = FUN_00402a00(puVar8,uVar6,'\0');
      if ((char)uVar2 != '\0') {
        FUN_004029e0(puVar8,uVar6);
      }
    }
    FUN_00402c30(puVar8);
  }
  else {
    if (uVar6 != 0) {
      puVar3 = (undefined1 *)param_2[1];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(puVar8,'\x01');
        puVar3 = (undefined1 *)param_2[1];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0xc) = puVar3;
        *(undefined4 *)((int)this + 0x10) = param_2[2];
        *(undefined4 *)((int)this + 0x14) = param_2[3];
        puVar3[-1] = puVar3[-1] + '\x01';
        *(undefined ***)this = &PTR_FUN_00576ff4;
        return this;
      }
    }
    uVar2 = FUN_00402a00(puVar8,uVar6,'\x01');
    if ((char)uVar2 != '\0') {
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)((int)this + 0xc);
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(uint *)((int)this + 0x10) = uVar6;
      *(undefined1 *)(*(int *)((int)this + 0xc) + uVar6) = 0;
      *(undefined ***)this = &PTR_FUN_00576ff4;
      return this;
    }
  }
  *(undefined ***)this = &PTR_FUN_00576ff4;
  return this;
}


