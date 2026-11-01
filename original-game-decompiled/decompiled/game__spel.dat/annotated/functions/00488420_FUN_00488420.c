
/* ==== FUN_00488420 @ 00488420 ==== 
 * signature: undefined __fastcall FUN_00488420(int param_1)
 * body: 00488420-004885a4
 */

void __fastcall FUN_00488420(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_2c [4];
  int iStack_28;
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
  pcStack_8 = FUN_0056d502;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iStack_18 = 0;
      uVar4 = 0xffffffff;
      uStack_14 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x90) + 4) + iVar5 * 4);
      pcVar6 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab580;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uStack_10 = 0;
      FUN_00402940(auStack_1c,(undefined4 *)s_C__Work_A2IV_Game_prog_Overlay_c_005ab580,~uVar4 - 1);
      uVar4 = 0xffffffff;
      uStack_4 = 0;
      pcVar6 = s_Invalid_element_in_element_array_005ab5a4;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      FUN_00402940(auStack_2c,(undefined4 *)s_Invalid_element_in_element_array_005ab5a4,~uVar4 - 1);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00487bc0((int)piVar2,auStack_2c,(int)auStack_1c);
      if (iStack_28 != 0) {
        cVar1 = *(char *)(iStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iStack_28 + -1));
        }
        else {
          *(char *)(iStack_28 + -1) = cVar1 + -1;
        }
      }
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_4 = 0xffffffff;
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
      (**(code **)(*piVar2 + 8))();
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(1);
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x90) + 4) + -4 + iVar5 * 4) = 0;
    } while (iVar5 < iVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


