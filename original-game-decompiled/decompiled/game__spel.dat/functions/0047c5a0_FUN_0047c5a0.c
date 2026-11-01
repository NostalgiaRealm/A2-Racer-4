
/* ==== FUN_0047c5a0 @ 0047c5a0 ==== 
 * signature: undefined __fastcall FUN_0047c5a0(int param_1)
 * body: 0047c5a0-0047c72f
 */

void __fastcall FUN_0047c5a0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int local_38;
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
  pcStack_8 = FUN_0056bb1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004c3fa0((byte *)s_Name____s__Composite__005a9b90);
  local_38 = 0;
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x74))();
  if (0 < iVar3) {
    do {
      uVar6 = 0xffffffff;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x78) + 4) + local_38 * 4);
      pcStack_28 = (char *)0x0;
      pcVar8 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9ba8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uStack_24 = 0;
      uStack_20 = 0;
      uVar4 = FUN_00402a00(auStack_2c,uVar6,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar8 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9ba8;
        pcVar9 = pcStack_28;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_004029e0(auStack_2c,uVar6);
      }
      uStack_4 = 0;
      puVar5 = FUN_004797e0(auStack_1c,s_NULL_Component_in_Child_Componen_005a9bd4,param_1 + 0x34);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00487bc0((int)piVar2,puVar5,(int)auStack_2c);
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
      (**(code **)(*piVar2 + 0x2c))();
      local_38 = local_38 + 1;
      iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x74))();
    } while (local_38 < iVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


