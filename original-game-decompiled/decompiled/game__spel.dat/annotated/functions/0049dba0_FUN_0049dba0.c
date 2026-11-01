
/* ==== FUN_0049dba0 @ 0049dba0 ==== 
 * signature: undefined __thiscall FUN_0049dba0(void * this, int param_1, int param_2)
 * body: 0049dba0-0049dd24
 */

/* WARNING: Removing unreachable block (ram,0x0049dbfa) */

void __thiscall FUN_0049dba0(void *this,int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eab2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_0049d9d0(local_1c,param_1,(int *)((int)this + 0x40),(int *)((int)this + 0x3c),param_2
                        ,4);
  uVar10 = *(uint *)(puVar2 + 8);
  puVar7 = (undefined1 *)((int)this + 0x2c);
  local_4 = 0;
  if (puVar7 == puVar2) {
    if (*(uint *)((int)this + 0x34) < uVar10) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar7);
    iVar3 = *(int *)((int)this + 0x34) - uVar10;
    iVar9 = -1;
    if (iVar3 != -1) {
      iVar9 = iVar3;
    }
    if (iVar9 != 0) {
      puVar8 = (undefined4 *)(uVar10 + *(int *)((int)this + 0x30));
      FUN_005580e0(puVar8,(undefined4 *)(iVar9 + (int)puVar8),iVar3 - iVar9);
      uVar10 = *(int *)((int)this + 0x34) - iVar9;
      uVar4 = FUN_00402a00(puVar7,uVar10,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(puVar7,uVar10);
      }
    }
    FUN_0040f800(puVar7,0,0);
  }
  else {
    if (uVar10 != 0) {
      puVar5 = *(undefined1 **)(puVar2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(puVar7,'\x01');
        puVar7 = *(undefined1 **)(puVar2 + 4);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x30) = puVar7;
        *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(puVar2 + 8);
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(puVar2 + 0xc);
        puVar7[-1] = puVar7[-1] + '\x01';
        goto LAB_0049dcdc;
      }
    }
    uVar4 = FUN_00402a00(puVar7,uVar10,'\x01');
    if ((char)uVar4 != '\0') {
      puVar8 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(puVar2 + 4) != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(puVar2 + 4);
      }
      puVar11 = *(undefined4 **)((int)this + 0x30);
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_004029e0(puVar7,uVar10);
    }
  }
LAB_0049dcdc:
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


