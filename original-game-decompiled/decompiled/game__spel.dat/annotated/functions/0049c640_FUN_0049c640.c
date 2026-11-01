
/* ==== FUN_0049c640 @ 0049c640 ==== 
 * signature: undefined1 * __thiscall FUN_0049c640(void * this, undefined1 * param_1)
 * body: 0049c640-0049c767
 */

/* WARNING: Removing unreachable block (ram,0x0049c670) */

undefined1 * __thiscall FUN_0049c640(void *this,undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_1 = *(undefined1 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)((int)this + 0x44);
  if (param_1 == (undefined1 *)((int)this + 0x3c)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(param_1);
    iVar2 = *(int *)(param_1 + 8) - uVar1;
    iVar6 = -1;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (iVar6 != 0) {
      FUN_005580e0((undefined4 *)(uVar1 + *(int *)(param_1 + 4)),
                   (undefined4 *)((int)(uVar1 + *(int *)(param_1 + 4)) + iVar6),iVar2 - iVar6);
      iVar2 = *(int *)(param_1 + 8);
      uVar3 = FUN_00402a00(param_1,iVar2 - iVar6,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(param_1,iVar2 - iVar6);
      }
    }
    FUN_00402c30(param_1);
    return param_1;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)((int)this + 0x40);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      FUN_004028f0(param_1,'\x01');
      puVar4 = *(undefined1 **)((int)this + 0x40);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x44);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x48);
      puVar4[-1] = puVar4[-1] + '\x01';
      return param_1;
    }
  }
  uVar3 = FUN_00402a00(param_1,uVar1,'\x01');
  if ((char)uVar3 != '\0') {
    puVar7 = *(undefined4 **)((int)this + 0x40);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)&DAT_0057629c;
    }
    puVar8 = *(undefined4 **)(param_1 + 4);
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)(param_1 + 8) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(param_1 + 4)) = 0;
  }
  return param_1;
}


