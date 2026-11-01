
/* ==== FUN_00485d50 @ 00485d50 ==== 
 * signature: undefined4 __thiscall FUN_00485d50(void * this, int param_1)
 * body: 00485d50-00485ecc
 */

undefined4 __thiscall FUN_00485d50(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056d12b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x10))();
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      auStack_2c[0] = (undefined1)param_1;
      FUN_004028f0(auStack_2c,'\0');
      uVar7 = 0xffffffff;
      pcVar10 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab104;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar3 = FUN_00402a00(auStack_2c,uVar7,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar10 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab104;
        pcVar6 = pcStack_28;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar6 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar6 = pcVar6 + 1;
        }
        FUN_004029e0(auStack_2c,uVar7);
      }
      iStack_4 = 0;
      puVar4 = FUN_004797e0(auStack_1c,s_Invalid_string_while_looking_for_005ab12c,param_1);
      iStack_4._0_1_ = 1;
      FUN_00487bc0(*(int *)(*(int *)(*(int *)((int)this + 0x14) + 4) + iVar9 * 4),puVar4,
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
      pcVar10 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        pcVar10 = *(char **)(param_1 + 4);
      }
      iVar5 = FUN_0047bc10(*(int *)(*(int *)(*(int *)((int)this + 0x14) + 4) + iVar9 * 4));
      pcVar6 = *(char **)(iVar5 + 4);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "";
      }
      iVar5 = __strcmpi(pcVar6,pcVar10);
      if (iVar5 == 0) {
        ExceptionList = pvStack_c;
        return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x14) + 4) + iVar9 * 4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  ExceptionList = pvStack_c;
  return 0;
}


