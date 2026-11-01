
/* ==== FUN_004eede0 @ 004eede0 ==== 
 * signature: undefined __fastcall FUN_004eede0(void * param_1)
 * body: 004eede0-004eef3a
 */

void __fastcall FUN_004eede0(void *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int local_2c;
  undefined **local_28;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f11b0((int)param_1);
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  FUN_004ee570((int)param_1);
  local_2c = 0;
  if (0 < *(int *)((int)param_1 + 0xdc)) {
    local_28 = &PTR_s_CM_MOUSE_BUTTON1_005b8704;
    do {
      local_18 = (char *)0x0;
      local_14 = 0;
      bVar2 = *(byte *)((int)param_1 + local_2c + 0xec);
      pcVar6 = *local_28;
      uVar4 = 0xffffffff;
      local_10 = 0;
      pcVar7 = pcVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar7 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_18[uVar4] = '\0';
        local_14 = uVar4;
      }
      local_4 = 0;
      FUN_004f0df0(param_1,(int)local_1c,bVar2 >> 7);
      local_4 = 0xffffffff;
      if (local_18 != (char *)0x0) {
        cVar1 = local_18[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_18 + -1);
        }
        else {
          local_18[-1] = cVar1 + -1;
        }
      }
      local_2c = local_2c + 1;
      local_28 = local_28 + 1;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
    } while (local_2c < *(int *)((int)param_1 + 0xdc));
  }
  FUN_004ee7f0((int)param_1);
  FUN_004ee960(param_1);
  FUN_004eea20(param_1);
  ExceptionList = local_c;
  return;
}


