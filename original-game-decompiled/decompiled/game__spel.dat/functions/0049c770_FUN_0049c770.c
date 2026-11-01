
/* ==== FUN_0049c770 @ 0049c770 ==== 
 * signature: undefined __thiscall FUN_0049c770(void * this, undefined4 param_1, undefined4 * param_2, uint param_3, undefined4 param_4)
 * body: 0049c770-0049c8bc
 */

/* WARNING: Removing unreachable block (ram,0x0049c7a4) */

void __thiscall
FUN_0049c770(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar9 = param_3;
  puVar7 = param_2;
  pcStack_8 = FUN_0056e9ef;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puVar5 = (undefined4 *)((int)this + 0x3c);
  if (puVar5 == &param_1) {
    ExceptionList = &pvStack_c;
    if (*(uint *)((int)this + 0x44) < param_3) {
      ExceptionList = &pvStack_c;
      FUN_0054b29c();
    }
    FUN_00402c30(puVar5);
    iVar2 = *(int *)((int)this + 0x44) - uVar9;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar7 = (undefined4 *)(uVar9 + *(int *)((int)this + 0x40));
      FUN_005580e0(puVar7,(undefined4 *)(iVar8 + (int)puVar7),iVar2 - iVar8);
      uVar9 = *(int *)((int)this + 0x44) - iVar8;
      uVar3 = FUN_00402a00(puVar5,uVar9,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar5,uVar9);
      }
    }
    FUN_0040f800(puVar5,0,0);
    puVar7 = param_2;
  }
  else {
    if (param_3 != 0) {
      puVar4 = (undefined4 *)&DAT_0057629c;
      if (param_2 != (undefined4 *)0x0) {
        puVar4 = param_2;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        ExceptionList = &pvStack_c;
        FUN_004028f0(puVar5,'\x01');
        puVar5 = (undefined4 *)&DAT_0057629c;
        if (puVar7 != (undefined4 *)0x0) {
          puVar5 = puVar7;
        }
        *(undefined4 **)((int)this + 0x40) = puVar5;
        *(uint *)((int)this + 0x44) = uVar9;
        *(undefined4 *)((int)this + 0x48) = param_4;
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_0049c888;
      }
    }
    ExceptionList = &pvStack_c;
    uVar3 = FUN_00402a00(puVar5,param_3,'\x01');
    if ((char)uVar3 != '\0') {
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar4 = *(undefined4 **)((int)this + 0x40);
      for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_004029e0(puVar5,uVar9);
      puVar7 = param_2;
    }
  }
LAB_0049c888:
  if (puVar7 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar7 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)((int)puVar7 + -1));
    }
    else {
      *(char *)((int)puVar7 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


