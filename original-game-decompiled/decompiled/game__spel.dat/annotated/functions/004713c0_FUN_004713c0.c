
/* ==== FUN_004713c0 @ 004713c0 ==== 
 * signature: undefined __fastcall FUN_004713c0(void * param_1)
 * body: 004713c0-004717c5
 */

void __fastcall FUN_004713c0(void *param_1)

{
  undefined1 *this;
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_234 [4];
  char *local_230;
  int *local_224 [2];
  undefined1 local_21c [4];
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  char local_20c [256];
  char acStack_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b2a8;
  pvStack_c = ExceptionList;
  pcVar2 = *(char **)((int)param_1 + 0x18);
  this = (undefined1 *)((int)param_1 + 0x14);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00558d27(pcVar2,(byte *)s__s__f_005a8c64);
  if (iVar3 == 2) {
    FUN_004028f0(local_234,'\0');
    uVar6 = 0xffffffff;
    pcVar2 = local_20c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar4 = FUN_00402a00(local_234,uVar6,'\x01');
    if ((char)uVar4 != '\0') {
      pcVar2 = local_20c;
      pcVar10 = local_230;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_004029e0(local_234,uVar6);
    }
    local_4 = 0;
    uVar6 = FUN_00473430((void *)((int)param_1 + 0x30),(int)local_234,local_224);
    local_4 = 0xffffffff;
    FUN_004028f0(local_234,'\x01');
    if ((char)uVar6 == '\0') {
      FUN_004028f0(local_234,'\0');
      uVar6 = 0xffffffff;
      pcVar2 = s_Unknown_RVar__005a8c80;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar4 = FUN_00402a00(local_234,uVar6,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar2 = s_Unknown_RVar__005a8c80;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_230 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          local_230 = local_230 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_230 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          local_230 = local_230 + 1;
        }
        FUN_004029e0(local_234,uVar6);
      }
      local_4 = 2;
      FUN_00471360(param_1,local_234);
      local_4 = 0xffffffff;
      FUN_004028f0(local_234,'\x01');
    }
    else {
      (**(code **)(*local_224[0] + 8))();
      puVar5 = FUN_0049df90(local_234,(byte *)s__>__s_set_to__f_005a8c6c);
      local_4 = 1;
      FUN_00471360(param_1,puVar5);
      local_4 = 0xffffffff;
      FUN_004028f0(local_234,'\x01');
    }
  }
  else if (iVar3 < 3) {
    uVar6 = FUN_00473430((void *)((int)param_1 + 0x30),(int)this,local_224);
    if ((char)uVar6 == '\0') {
      puVar5 = FUN_0049df90(local_21c,(byte *)s_Unknown_command___s___005a8cac);
      local_4 = 4;
      FUN_00471360(param_1,puVar5);
      local_4 = 0xffffffff;
      if (local_218 != 0) {
        cVar1 = *(char *)(local_218 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_218 + -1));
        }
        else {
          *(char *)(local_218 + -1) = cVar1 + -1;
        }
      }
      local_218 = 0;
      local_214 = 0;
      local_210 = 0;
    }
    else {
      (**(code **)(*local_224[0] + 4))();
      FUN_005587a3(acStack_10c,&DAT_005a8ca4);
      uVar6 = 0xffffffff;
      pcVar2 = acStack_10c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      if (-*(int *)((int)param_1 + 0x1c) - 1U <= uVar6) {
        FUN_0054b1b4();
      }
      if (uVar6 != 0) {
        uVar7 = *(int *)((int)param_1 + 0x1c) + uVar6;
        uVar4 = FUN_00402a00(this,uVar7,'\0');
        if ((char)uVar4 != '\0') {
          pcVar2 = acStack_10c;
          pcVar10 = (char *)(*(int *)((int)param_1 + 0x18) + *(int *)((int)param_1 + 0x1c));
          for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
            pcVar2 = pcVar2 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pcVar10 = pcVar10 + 1;
          }
          FUN_004029e0(this,uVar7);
        }
      }
      FUN_00471360(param_1,this);
    }
  }
  else {
    FUN_004028f0(local_234,'\0');
    uVar6 = 0xffffffff;
    pcVar2 = s_Too_many_arguments__005a8c90;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar4 = FUN_00402a00(local_234,uVar6,'\x01');
    if ((char)uVar4 != '\0') {
      pcVar2 = s_Too_many_arguments__005a8c90;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)local_230 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        local_230 = local_230 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_230 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        local_230 = local_230 + 1;
      }
      FUN_004029e0(local_234,uVar6);
    }
    local_4 = 3;
    FUN_00471360(param_1,local_234);
    local_4 = 0xffffffff;
    FUN_004028f0(local_234,'\x01');
  }
  pcVar2 = *(char **)((int)param_1 + 0x18);
  if (((pcVar2 != (char *)0x0) && (pcVar2[-1] != '\0')) && (pcVar2[-1] != -1)) {
    FUN_004028f0(this,'\x01');
    uVar6 = 0xffffffff;
    pcVar10 = pcVar2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(this,(undefined4 *)pcVar2,~uVar6 - 1);
  }
  iVar3 = *(int *)((int)param_1 + 0x1c);
  iVar9 = -1;
  if (iVar3 != -1) {
    iVar9 = iVar3;
  }
  if (iVar9 != 0) {
    FUN_005580e0(*(undefined4 **)((int)param_1 + 0x18),
                 (undefined4 *)((int)*(undefined4 **)((int)param_1 + 0x18) + iVar9),iVar3 - iVar9);
    uVar6 = *(int *)((int)param_1 + 0x1c) - iVar9;
    uVar4 = FUN_00402a00(this,uVar6,'\0');
    if ((char)uVar4 != '\0') {
      *(uint *)((int)param_1 + 0x1c) = uVar6;
      *(undefined1 *)(*(int *)((int)param_1 + 0x18) + uVar6) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


