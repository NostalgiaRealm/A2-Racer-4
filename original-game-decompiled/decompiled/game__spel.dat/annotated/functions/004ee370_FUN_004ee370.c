
/* ==== FUN_004ee370 @ 004ee370 ==== 
 * signature: undefined __fastcall FUN_004ee370(void * param_1)
 * body: 004ee370-004ee504
 */

void __fastcall FUN_004ee370(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  char *pcVar7;
  int local_34;
  undefined **local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005728c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0xd8) = 6;
  local_34 = 0;
  local_30 = &PTR_s_CM_MOUSE_X_POS_005b86ec;
  do {
    pcVar6 = *local_30;
    FUN_004028f0(local_1c,'\0');
    uVar3 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_18[uVar3] = '\0';
      local_14 = uVar3;
    }
    local_4 = 0;
    FUN_004f1050(param_1,local_1c);
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    local_34 = local_34 + 1;
    local_30 = local_30 + 1;
  } while (local_34 < *(int *)((int)param_1 + 0xd8));
  *(undefined4 *)((int)param_1 + 0xdc) = 4;
  local_34 = 0;
  ppuVar5 = &PTR_s_CM_MOUSE_BUTTON1_005b8704;
  do {
    uVar3 = 0xffffffff;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    pcVar6 = *ppuVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,(undefined4 *)*ppuVar5,~uVar3 - 1);
    local_4 = 3;
    FUN_004f1050(param_1,local_2c);
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_34 = local_34 + 1;
    ppuVar5 = ppuVar5 + 1;
    if (*(int *)((int)param_1 + 0xdc) <= local_34) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


