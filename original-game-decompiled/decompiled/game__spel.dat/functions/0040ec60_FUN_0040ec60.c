
/* ==== FUN_0040ec60 @ 0040ec60 ==== 
 * signature: undefined4 __fastcall FUN_0040ec60(char * param_1)
 * body: 0040ec60-0040ee06
 */

/* WARNING: Removing unreachable block (ram,0x0040ecff) */

undefined4 __fastcall FUN_0040ec60(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *this;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569923;
  local_c = ExceptionList;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar4 = s_AI_manager_already_initialized_005923f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(local_1c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar4 = s_AI_manager_already_initialized_005923f4;
    pcVar7 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar5] = '\0';
    local_14 = uVar5;
  }
  local_4 = 0;
  puVar3 = FUN_0040ebe0();
  uVar5 = local_14;
  this = puVar3 + 4;
  if (this == local_1c) {
    FUN_0040f800(this,local_14,0xffffffff);
    FUN_0040f800(this,0,0);
  }
  else {
    if (local_14 != 0) {
      pcVar4 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar4 = "";
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        FUN_004028f0(this,'\x01');
        pcVar4 = local_18;
        if (local_18 == (char *)0x0) {
          pcVar4 = "";
        }
        *(char **)(puVar3 + 8) = pcVar4;
        *(uint *)(puVar3 + 0xc) = local_14;
        *(undefined4 *)(puVar3 + 0x10) = local_10;
        pcVar4[-1] = pcVar4[-1] + '\x01';
        goto LAB_0040eda4;
      }
    }
    uVar2 = FUN_00402a00(this,local_14,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar4 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar4 = "";
      }
      pcVar7 = *(char **)(puVar3 + 8);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar7 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_004029e0(this,uVar5);
    }
  }
LAB_0040eda4:
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return 1;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return 1;
}


