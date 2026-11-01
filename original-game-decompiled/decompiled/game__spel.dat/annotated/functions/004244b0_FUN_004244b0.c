
/* ==== FUN_004244b0 @ 004244b0 ==== 
 * signature: undefined __stdcall FUN_004244b0(int param_1)
 * body: 004244b0-004245e2
 */

void FUN_004244b0(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a07a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_0049df90(local_1c,(byte *)s_league_d_00595afc);
  local_4 = 0;
  FUN_00423e40(param_1,(int)puVar2);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_2c[0] = (undefined1)param_1;
  uVar4 = 0xffffffff;
  pcVar6 = s_traffic_00595b08;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar6 = s_traffic_00595b08;
    pcVar7 = local_28;
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
    local_28[uVar4] = '\0';
    local_24 = uVar4;
  }
  local_4 = 1;
  FUN_00423e40(param_1,(int)local_2c);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


