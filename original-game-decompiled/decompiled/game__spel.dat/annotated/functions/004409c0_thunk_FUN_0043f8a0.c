
/* ==== thunk_FUN_0043f8a0 @ 004409c0 ==== 
 * signature: undefined __stdcall thunk_FUN_0043f8a0(void)
 * body: 004409c0-004409c4
 * thunk to: FUN_0043f8a0
 */

void thunk_FUN_0043f8a0(void)

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
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a3e2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
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
    pcStack_28 = (char *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    uVar3 = FUN_00402a00(auStack_2c,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar6 = s_keyboard0_0059c0c0;
      pcVar7 = pcStack_28;
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
      FUN_004029e0(auStack_2c,uVar4);
    }
    uVar4 = 0xffffffff;
    uStack_4 = 0;
    pcVar6 = &DAT_0059c0cc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_00402940(auStack_1c,(undefined4 *)&DAT_0059c0cc,~uVar4 - 1);
    puVar10 = auStack_2c;
    pfVar11 = (float *)0x0;
    puVar9 = auStack_1c;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    this = (void *)FUN_004ea0c0();
    fVar8 = (float10)FUN_004eb4d0(this,(int)puVar9,(int)puVar10,pfVar11);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0xffffffff;
    if (pcStack_28 != (char *)0x0) {
      cVar1 = pcStack_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(pcStack_28 + -1);
      }
      else {
        pcStack_28[-1] = cVar1 + -1;
      }
    }
    pcStack_28 = (char *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    if ((float)fVar8 != 0.0) {
      FUN_0043fc90(iVar2);
    }
  }
  FUN_004c3fa0((byte *)s_end_of_draw_dashboard___0059c0d8);
  ExceptionList = pvStack_c;
  return;
}


