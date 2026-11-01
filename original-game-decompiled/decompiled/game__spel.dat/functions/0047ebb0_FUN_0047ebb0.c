
/* ==== FUN_0047ebb0 @ 0047ebb0 ==== 
 * signature: undefined __thiscall FUN_0047ebb0(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 0047ebb0-0047ed0e
 */

/* WARNING: Removing unreachable block (ram,0x0047ec04) */

void __thiscall FUN_0047ebb0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056bef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047d6d0(this,param_1);
  puVar8 = (undefined4 *)((int)this + 8);
  uVar1 = *(undefined1 *)param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)puVar8 = uVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar7 = param_2[2];
  local_4 = 0;
  if (puVar8 == param_2) {
    if (uVar7 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar8);
    iVar2 = *(int *)((int)this + 0x10) - uVar7;
    iVar9 = -1;
    if (iVar2 != -1) {
      iVar9 = iVar2;
    }
    if (iVar9 != 0) {
      puVar6 = (undefined4 *)(uVar7 + *(int *)((int)this + 0xc));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar9),iVar2 - iVar9);
      uVar7 = *(int *)((int)this + 0x10) - iVar9;
      uVar3 = FUN_00402a00(puVar8,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar8,uVar7);
      }
    }
    FUN_00402c30(puVar8);
  }
  else {
    if (uVar7 != 0) {
      puVar4 = (undefined1 *)param_2[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(puVar8,'\x01');
        puVar4 = (undefined1 *)param_2[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0xc) = puVar4;
        *(undefined4 *)((int)this + 0x10) = param_2[2];
        *(undefined4 *)((int)this + 0x14) = param_2[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0047ece2;
      }
    }
    uVar3 = FUN_00402a00(puVar8,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = *(undefined4 **)((int)this + 0xc);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)((int)this + 0x10) = uVar7;
      *(undefined1 *)(uVar7 + *(int *)((int)this + 0xc)) = 0;
    }
  }
LAB_0047ece2:
  *(undefined4 *)((int)this + 0x18) = 0x44200000;
  *(undefined4 *)((int)this + 0x1c) = 0x43f00000;
  *(undefined ***)this = &PTR_FUN_00576e00;
  ExceptionList = local_c;
  return;
}


