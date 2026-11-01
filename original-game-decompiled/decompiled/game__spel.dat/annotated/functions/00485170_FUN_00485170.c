
/* ==== FUN_00485170 @ 00485170 ==== 
 * signature: undefined4 __thiscall FUN_00485170(void * this, int param_1)
 * body: 00485170-00485331
 */

undefined4 __thiscall FUN_00485170(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  int iStack_38;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056cec1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (*(code *)**(undefined4 **)((int)this + 8))();
  iStack_38 = 0;
  if (0 < iVar3) {
    do {
      auStack_2c[0] = (undefined1)param_1;
      FUN_004028f0(auStack_2c,'\0');
      uVar7 = 0xffffffff;
      pcVar10 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aae90;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar4 = FUN_00402a00(auStack_2c,uVar7,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar10 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aae90;
        pcVar12 = pcStack_28;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcStack_28[uVar7] = '\0';
        uStack_24 = uVar7;
      }
      iStack_4 = 0;
      puVar5 = FUN_004797e0(auStack_1c,s_Invalid_font_while_looking_for_005aaeb8,param_1);
      iStack_4._0_1_ = 1;
      FUN_00487bc0(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + iStack_38 * 4),puVar5,
                   (int)auStack_2c);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_004028f0(auStack_1c,'\x01');
      iStack_4 = 0xffffffff;
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
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + iStack_38 * 4);
      uVar7 = *(uint *)(param_1 + 8);
      pbVar13 = &DAT_0057629c;
      if (*(byte **)(param_1 + 4) != (byte *)0x0) {
        pbVar13 = *(byte **)(param_1 + 4);
      }
      uVar8 = *(uint *)(iVar2 + 0x810);
      uVar9 = uVar8;
      if (uVar7 <= uVar8) {
        uVar9 = uVar7;
      }
      bVar14 = false;
      iVar6 = 0;
      bVar15 = true;
      pbVar11 = *(byte **)(iVar2 + 0x80c);
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar14 = *pbVar11 < *pbVar13;
        bVar15 = *pbVar11 == *pbVar13;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
      } while (bVar15);
      if (!bVar15) {
        iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      }
      if (((iVar6 == 0) && (uVar7 <= uVar8)) && (uVar8 == uVar7)) {
        ExceptionList = pvStack_c;
        return *(undefined4 *)(*(int *)(*(int *)((int)this + 0xc) + 4) + iStack_38 * 4);
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < iVar3);
  }
  ExceptionList = pvStack_c;
  return 0;
}


