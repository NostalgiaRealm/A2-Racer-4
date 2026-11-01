
/* ==== FUN_00488ef0 @ 00488ef0 ==== 
 * signature: undefined __fastcall FUN_00488ef0(int param_1)
 * body: 00488ef0-0048909e
 */

void __fastcall FUN_00488ef0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iStack_3c;
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
  pcStack_8 = FUN_0056d5fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  iStack_3c = 0;
  if (0 < iVar3) {
    do {
      uVar5 = 0xffffffff;
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x90) + 4) + iStack_3c * 4);
      pcVar7 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab7b4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      uStack_20 = 0;
      uVar4 = FUN_00402a00(auStack_2c,uVar5,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar7 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab7b4;
        pcVar8 = pcStack_28;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_004029e0(auStack_2c,uVar5);
      }
      uVar5 = 0xffffffff;
      uStack_4 = 0;
      pcVar7 = s_Invalid_element_in_element_array_005ab7d8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_00402940(auStack_1c,(undefined4 *)s_Invalid_element_in_element_array_005ab7d8,~uVar5 - 1);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00487bc0((int)piVar2,auStack_1c,(int)auStack_2c);
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
      (**(code **)(*piVar2 + 0xc))(*(undefined4 *)(param_1 + 0x94));
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


