
/* ==== FUN_004ed3b0 @ 004ed3b0 ==== 
 * signature: undefined __fastcall FUN_004ed3b0(void * param_1)
 * body: 004ed3b0-004ed4c0
 */

void __fastcall FUN_004ed3b0(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **local_28;
  int local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005726d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0xd8) = 0x6a;
  local_24 = 0;
  local_28 = &PTR_s_CM_KEYB_ESC_005b7a1c;
  do {
    uVar3 = 0xffffffff;
    pcVar5 = *local_28;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    pcVar6 = pcVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar6 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_18[uVar3] = '\0';
      local_14 = uVar3;
    }
    local_4 = 0;
    FUN_004f1050(param_1,local_1c);
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
    local_28 = local_28 + 3;
    if (*(int *)((int)param_1 + 0xd8) <= local_24) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


