
/* ==== FUN_004a0970 @ 004a0970 ==== 
 * signature: undefined __thiscall FUN_004a0970(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, uint param_4, undefined4 param_5, int param_6, int param_7)
 * body: 004a0970-004a0ad6
 */

/* WARNING: Removing unreachable block (ram,0x004a09a3) */

void __thiscall
FUN_004a0970(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5,int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar8 = param_4;
  puVar6 = param_3;
  pcStack_8 = FUN_0056ecd8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  if (this == &param_2) {
    ExceptionList = &pvStack_c;
    if (*(uint *)((int)this + 8) < param_4) {
      ExceptionList = &pvStack_c;
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar2 = *(int *)((int)this + 8) - uVar8;
    iVar7 = -1;
    if (iVar2 != -1) {
      iVar7 = iVar2;
    }
    if (iVar7 != 0) {
      puVar6 = (undefined4 *)(uVar8 + *(int *)((int)this + 4));
      FUN_005580e0(puVar6,(undefined4 *)(iVar7 + (int)puVar6),iVar2 - iVar7);
      uVar8 = *(int *)((int)this + 8) - iVar7;
      uVar3 = FUN_00402a00(this,uVar8,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(this,uVar8);
      }
    }
    FUN_0040f800(this,0,0);
    puVar6 = param_3;
  }
  else {
    if (param_4 != 0) {
      puVar4 = (undefined4 *)&DAT_0057629c;
      if (param_3 != (undefined4 *)0x0) {
        puVar4 = param_3;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        ExceptionList = &pvStack_c;
        FUN_004028f0(this,'\x01');
        puVar4 = (undefined4 *)&DAT_0057629c;
        if (puVar6 != (undefined4 *)0x0) {
          puVar4 = puVar6;
        }
        *(undefined4 **)((int)this + 4) = puVar4;
        *(uint *)((int)this + 8) = uVar8;
        *(undefined4 *)((int)this + 0xc) = param_5;
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_004a0a87;
      }
    }
    ExceptionList = &pvStack_c;
    uVar3 = FUN_00402a00(this,param_4,'\x01');
    if ((char)uVar3 != '\0') {
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar4 = *(undefined4 **)((int)this + 4);
      for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_004029e0(this,uVar8);
      puVar6 = param_3;
    }
  }
LAB_004a0a87:
  *(undefined4 *)((int)this + 0x10) = param_1;
  puVar4 = FUN_004a0d10(this,param_6,param_7);
  *(undefined4 **)((int)this + 0x18) = puVar4;
  if (puVar6 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar6 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)((int)puVar6 + -1));
    }
    else {
      *(char *)((int)puVar6 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


