
/* ==== FUN_004dbdd0 @ 004dbdd0 ==== 
 * signature: undefined1 * __thiscall FUN_004dbdd0(void * this, undefined1 * param_1)
 * body: 004dbdd0-004dbed2
 */

/* WARNING: Removing unreachable block (ram,0x004dbe0c) */

undefined1 * __thiscall FUN_004dbdd0(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(int *)((int)this + 4) < 4) {
    FUN_004dbc40(param_1,*(int *)((int)this + 4));
    return param_1;
  }
  iVar2 = *(int *)this;
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = *(uint *)(iVar2 + 0x14);
  if (param_1 == (undefined1 *)(iVar2 + 0xc)) {
    FUN_0040f800(param_1,uVar3,0xffffffff);
    FUN_0040f800(param_1,0,0);
    return param_1;
  }
  if (uVar3 != 0) {
    puVar4 = *(undefined1 **)(iVar2 + 0x10);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      FUN_004028f0(param_1,'\x01');
      puVar4 = *(undefined1 **)(iVar2 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0x18);
      puVar4[-1] = puVar4[-1] + '\x01';
      return param_1;
    }
  }
  uVar5 = FUN_00402a00(param_1,uVar3,'\x01');
  if ((char)uVar5 != '\0') {
    puVar7 = *(undefined4 **)(iVar2 + 0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)&DAT_0057629c;
    }
    puVar8 = *(undefined4 **)(param_1 + 4);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(param_1,uVar3);
  }
  return param_1;
}


