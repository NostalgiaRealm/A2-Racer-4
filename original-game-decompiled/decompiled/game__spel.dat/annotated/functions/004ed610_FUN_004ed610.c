
/* ==== FUN_004ed610 @ 004ed610 ==== 
 * signature: undefined __fastcall FUN_004ed610(void * param_1)
 * body: 004ed610-004ed759
 */

void __fastcall FUN_004ed610(void *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **local_2c;
  int local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f11b0((int)param_1);
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  FUN_004ed4d0((int)param_1);
  local_24 = 0;
  if (0 < *(int *)((int)param_1 + 0xd8)) {
    local_2c = &PTR_s_CM_KEYB_ESC_005b7a1c;
    do {
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
      bVar2 = *(byte *)(*(byte *)(local_2c + -1) + 0xdc + (int)param_1);
      pcVar6 = *local_2c;
      uVar4 = 0xffffffff;
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
      local_24 = local_24 + 1;
      local_2c = local_2c + 3;
    } while (local_24 < *(int *)((int)param_1 + 0xd8));
  }
  ExceptionList = local_c;
  return;
}


