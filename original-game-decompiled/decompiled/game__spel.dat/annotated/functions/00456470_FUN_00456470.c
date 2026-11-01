
/* ==== FUN_00456470 @ 00456470 ==== 
 * signature: undefined __stdcall FUN_00456470(void)
 * body: 00456470-00456548
 */

void FUN_00456470(void)

{
  char cVar1;
  undefined4 uVar2;
  void *this;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a744;
  local_c = ExceptionList;
  if (DAT_005a3850 != '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = s__junction_ahead_right_005a391c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar5 = s__junction_ahead_right_005a391c;
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
    puVar7 = local_1c;
    iVar8 = -1;
    local_4 = 0;
    this = (void *)FUN_004891a0();
    FUN_0048a910(this,(int)puVar7,iVar8);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    DAT_005a3850 = '\0';
  }
  ExceptionList = local_c;
  return;
}


