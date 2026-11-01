
/* ==== FUN_00499b80 @ 00499b80 ==== 
 * signature: undefined1 * __thiscall FUN_00499b80(void * this, undefined1 * param_1)
 * body: 00499b80-00499c9c
 */

/* WARNING: Removing unreachable block (ram,0x00499ba8) */

undefined1 * __thiscall FUN_00499b80(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar6 = *(uint *)(param_1 + 8);
  if (this == param_1) {
    if (uVar6 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar1 = *(int *)((int)this + 8) - uVar6;
    iVar7 = -1;
    if (iVar1 != -1) {
      iVar7 = iVar1;
    }
    if (iVar7 != 0) {
      puVar5 = (undefined4 *)(uVar6 + *(int *)((int)this + 4));
      FUN_005580e0(puVar5,(undefined4 *)((int)puVar5 + iVar7),iVar1 - iVar7);
      uVar6 = *(int *)((int)this + 8) - iVar7;
      uVar2 = FUN_00402a00(this,uVar6,'\0');
      if ((char)uVar2 != '\0') {
        FUN_004029e0(this,uVar6);
      }
    }
    FUN_00402c30(this);
    return this;
  }
  if (uVar6 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      FUN_004028f0(this,'\x01');
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 4) = puVar3;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar3[-1] = puVar3[-1] + '\x01';
      return this;
    }
  }
  uVar2 = FUN_00402a00(this,uVar6,'\x01');
  if ((char)uVar2 != '\0') {
    puVar5 = *(undefined4 **)(param_1 + 4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)&DAT_0057629c;
    }
    puVar8 = *(undefined4 **)((int)this + 4);
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 8) = uVar6;
    *(undefined1 *)(*(int *)((int)this + 4) + uVar6) = 0;
  }
  return this;
}


