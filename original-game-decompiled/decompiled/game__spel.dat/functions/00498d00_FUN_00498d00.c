
/* ==== FUN_00498d00 @ 00498d00 ==== 
 * signature: undefined __thiscall FUN_00498d00(void * this, void * param_1, void * param_2, void * param_3, void * param_4, undefined1 param_5)
 * body: 00498d00-00498f76
 */

/* WARNING: Removing unreachable block (ram,0x00498e2f) */

void __thiscall
FUN_00498d00(void *this,void *param_1,void *param_2,void *param_3,void *param_4,undefined1 param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *this_00;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e531;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_007127f4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  bVar2 = false;
  ExceptionList = &pvStack_c;
  uVar6 = FUN_0040fc80(param_2,0,*(uint *)((int)param_2 + 8),&DAT_007127f4,~uVar6 - 1);
  if (uVar6 == 0) {
    local_2c[0] = param_5;
    FUN_004028f0(local_2c,'\0');
    uVar6 = 0xffffffff;
    pcVar4 = s_Sorry__CRegVar_variable_needs_to_005ae458;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar3 = FUN_00402a00(local_2c,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar4 = s_Sorry__CRegVar_variable_needs_to_005ae458;
      pcVar10 = local_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_28[uVar6] = '\0';
      local_24 = uVar6;
    }
    local_1c[0] = param_5;
    local_4 = 0;
    FUN_004028f0(local_1c,'\0');
    local_4._0_1_ = 1;
    FUN_004093c0(local_1c,local_2c,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_1c,&DAT_005828d8);
  }
  uVar6 = *(uint *)((int)param_2 + 8);
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pcVar4 = "";
      if (*(int *)((int)param_2 + 4) != 0) {
        pcVar4 = (char *)(*(int *)((int)param_2 + 4) + uVar7);
      }
      if (*pcVar4 == '.') {
        bVar2 = true;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  this_00 = (void *)((int)this + 4);
  if (this_00 == param_2) {
    FUN_0040f800(this_00,uVar6,0xffffffff);
    FUN_0040f800(this_00,0,0);
  }
  else {
    if (uVar6 != 0) {
      puVar5 = *(undefined1 **)((int)param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(this_00,'\x01');
        puVar5 = *(undefined1 **)((int)param_2 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar5;
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_2 + 8);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_2 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_00498ec8;
      }
    }
    uVar3 = FUN_00402a00(this_00,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      puVar9 = *(undefined4 **)((int)param_2 + 4);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)&DAT_0057629c;
      }
      puVar11 = *(undefined4 **)((int)this + 8);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_004029e0(this_00,uVar6);
    }
  }
LAB_00498ec8:
  if (!bVar2) {
    uVar6 = 0xffffffff;
    pcVar4 = &DAT_005ae48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    if (-*(int *)((int)this + 0xc) - 1U <= uVar6) {
      FUN_0054b1b4();
    }
    if (uVar6 != 0) {
      uVar7 = *(int *)((int)this + 0xc) + uVar6;
      uVar3 = FUN_00402a00(this_00,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        puVar9 = (undefined4 *)&DAT_005ae48c;
        puVar11 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(uint *)((int)this + 0xc) = uVar7;
        *(undefined1 *)(*(int *)((int)this + 8) + uVar7) = 0;
      }
    }
  }
  FUN_00499220(this,param_4);
  FUN_004990d0(this,param_3);
  *(undefined1 *)((int)this + 0x35) = param_5;
  *(void **)((int)this + 0x38) = param_1;
  FUN_0049bd30(param_1,this);
  ExceptionList = pvStack_c;
  return;
}


