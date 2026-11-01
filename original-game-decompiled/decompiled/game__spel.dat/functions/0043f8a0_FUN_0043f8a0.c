
/* ==== FUN_0043f8a0 @ 0043f8a0 ==== 
 * signature: undefined __stdcall FUN_0043f8a0(void)
 * body: 0043f8a0-0043fa49
 */

void FUN_0043f8a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  float *pfVar11;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a3e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c3fa0((byte *)s_draw_dashboard___0059c0ac);
  iVar2 = FUN_00447820();
  if (DAT_006fb8d8 != 0) {
    FUN_0043e120();
  }
  if (DAT_006fb950 != 0) {
    uVar4 = 0xffffffff;
    pcVar6 = s_keyboard0_0059c0c0;
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
      pcVar6 = s_keyboard0_0059c0c0;
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
      FUN_004029e0(local_2c,uVar4);
    }
    uVar4 = 0xffffffff;
    local_4 = 0;
    pcVar6 = &DAT_0059c0cc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_00402940(local_1c,(undefined4 *)&DAT_0059c0cc,~uVar4 - 1);
    puVar10 = local_2c;
    pfVar11 = (float *)0x0;
    puVar9 = local_1c;
    local_4 = CONCAT31(local_4._1_3_,1);
    this = (void *)FUN_004ea0c0();
    fVar8 = (float10)FUN_004eb4d0(this,(int)puVar9,(int)puVar10,pfVar11);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0xffffffff;
    if (local_28 != (char *)0x0) {
      cVar1 = local_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_28 + -1);
      }
      else {
        local_28[-1] = cVar1 + -1;
      }
    }
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
    if ((float)fVar8 != 0.0) {
      FUN_0043fc90(iVar2);
    }
  }
  FUN_004c3fa0((byte *)s_end_of_draw_dashboard___0059c0d8);
  ExceptionList = local_c;
  return;
}


