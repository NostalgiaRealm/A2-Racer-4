
/* ==== FUN_004115a0 @ 004115a0 ==== 
 * signature: undefined __thiscall FUN_004115a0(void * this, undefined4 * param_1)
 * body: 004115a0-004116e6
 */

/* WARNING: Removing unreachable block (ram,0x004115c6) */

void __thiscall FUN_004115a0(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)((int)this + 4);
  *(undefined4 *)this = *param_1;
  uVar7 = param_1[3];
  if (puVar9 == param_1 + 1) {
    if (*(uint *)((int)this + 0xc) < uVar7) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar9);
    iVar2 = *(int *)((int)this + 0xc) - uVar7;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(uVar7 + *(int *)((int)this + 8));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((int)this + 0xc) - iVar8;
      uVar3 = FUN_00402a00(puVar9,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar9,uVar7);
      }
    }
    FUN_00402c30(puVar9);
  }
  else {
    if (uVar7 != 0) {
      puVar4 = (undefined1 *)param_1[2];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar8 = *(int *)((int)this + 8);
        if (iVar8 != 0) {
          cVar1 = *(char *)(iVar8 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar8 + -1));
          }
          else {
            *(char *)(iVar8 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        puVar4 = (undefined1 *)param_1[2];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar4;
        *(undefined4 *)((int)this + 0xc) = param_1[3];
        *(undefined4 *)((int)this + 0x10) = param_1[4];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004116d1;
      }
    }
    uVar3 = FUN_00402a00(puVar9,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar9 = (undefined4 *)param_1[2];
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)((int)this + 0xc) = uVar7;
      *(undefined1 *)(*(int *)((int)this + 8) + uVar7) = 0;
    }
  }
LAB_004116d1:
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return;
}


