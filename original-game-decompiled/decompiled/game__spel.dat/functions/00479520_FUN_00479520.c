
/* ==== FUN_00479520 @ 00479520 ==== 
 * signature: undefined1 * __thiscall FUN_00479520(void * this, undefined1 * param_1, uint param_2, uint param_3)
 * body: 00479520-004796ac
 */

undefined1 * __thiscall FUN_00479520(void *this,undefined1 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_1 = param_1._0_1_;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar5 = *(uint *)((int)this + 8) - param_2;
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (param_1 == this) {
    uVar5 = uVar5 + param_2;
    if (*(uint *)(param_1 + 8) < uVar5) {
      FUN_0054b29c();
    }
    FUN_00402c30(param_1);
    iVar1 = *(int *)(param_1 + 8) - uVar5;
    iVar6 = -1;
    if (iVar1 != -1) {
      iVar6 = iVar1;
    }
    if (iVar6 != 0) {
      FUN_005580e0((undefined4 *)(*(int *)(param_1 + 4) + uVar5),
                   (undefined4 *)((int)(*(int *)(param_1 + 4) + uVar5) + iVar6),iVar1 - iVar6);
      iVar1 = *(int *)(param_1 + 8);
      uVar2 = FUN_00402a00(param_1,iVar1 - iVar6,'\0');
      if ((char)uVar2 != '\0') {
        FUN_004029e0(param_1,iVar1 - iVar6);
      }
    }
    FUN_00402c30(param_1);
    uVar5 = *(uint *)(param_1 + 8);
    if (uVar5 < param_2) {
      param_2 = uVar5;
    }
    if (param_2 != 0) {
      FUN_005580e0(*(undefined4 **)(param_1 + 4),
                   (undefined4 *)((int)*(undefined4 **)(param_1 + 4) + param_2),uVar5 - param_2);
      iVar6 = *(int *)(param_1 + 8);
      uVar2 = FUN_00402a00(param_1,iVar6 - param_2,'\0');
      if ((char)uVar2 != '\0') {
        FUN_004029e0(param_1,iVar6 - param_2);
        return param_1;
      }
    }
  }
  else {
    if ((uVar5 != 0) && (uVar5 == *(uint *)((int)this + 8))) {
      puVar3 = *(undefined1 **)((int)this + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(param_1,'\x01');
        puVar3 = *(undefined1 **)((int)this + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        return param_1;
      }
    }
    uVar2 = FUN_00402a00(param_1,uVar5,'\x01');
    if ((char)uVar2 != '\0') {
      puVar3 = *(undefined1 **)((int)this + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      puVar7 = (undefined4 *)(puVar3 + param_2);
      puVar8 = *(undefined4 **)(param_1 + 4);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_1 + 8) = uVar5;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar5) = 0;
    }
  }
  return param_1;
}


