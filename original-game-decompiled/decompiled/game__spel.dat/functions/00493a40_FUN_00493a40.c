
/* ==== FUN_00493a40 @ 00493a40 ==== 
 * signature: undefined __fastcall FUN_00493a40(void * param_1)
 * body: 00493a40-00493c70
 */

void __fastcall FUN_00493a40(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e108;
  local_c = ExceptionList;
  if (DAT_006fb964 != 0) {
    ExceptionList = &local_c;
    FUN_00493410((int)param_1);
    FUN_00493640(param_1);
    FUN_004938b0((int)param_1);
    FUN_004028f0(local_3c,'\0');
    iVar2 = 0;
    local_4 = 0;
    if (DAT_005d2ab0 != -1 && -1 < DAT_005d2ab0 + 1) {
      do {
        local_50 = iVar2 + 1;
        puVar3 = FUN_0049df90(local_1c,(byte *)s_STRING_FINISH_POS__d_005ad424);
        local_4._0_1_ = 1;
        FUN_004093c0(local_3c,puVar3,0,0xffffffff);
        local_4._0_1_ = 0;
        FUN_004028f0(local_1c,'\x01');
        local_54 = FUN_00485d50(*(void **)((int)param_1 + 4),(int)local_3c);
        FUN_004028f0(local_4c,'\0');
        uVar5 = 0xffffffff;
        pcVar7 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad43c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        uVar4 = FUN_00402a00(local_4c,uVar5,'\x01');
        iVar2 = iVar2 + 1;
        if ((char)uVar4 != '\0') {
          pcVar7 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad43c;
          pcVar8 = local_48;
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
          local_48[uVar5] = '\0';
          iVar2 = local_50;
          local_44 = uVar5;
        }
        local_4._0_1_ = 2;
        puVar3 = FUN_0049df90(local_2c,(byte *)s_Finish_string__s_not_found_in_ov_005ad468);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_00487bc0(local_54,puVar3,(int)local_4c);
        if (local_28 != 0) {
          cVar1 = *(char *)(local_28 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(local_28 + -1));
          }
          else {
            *(char *)(local_28 + -1) = cVar1 + -1;
          }
        }
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_4 = local_4 & 0xffffff00;
        if (local_48 != (char *)0x0) {
          cVar1 = local_48[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_48 + -1);
          }
          else {
            local_48[-1] = cVar1 + -1;
          }
        }
        local_48 = (char *)0x0;
        local_44 = 0;
        local_40 = 0;
        FUN_004a5620(*(void **)((int)param_1 + 0x28),
                     *(undefined4 **)((int)*(void **)((int)param_1 + 0x28) + 8),1,&local_54);
      } while (iVar2 < DAT_005d2ab0 + 1);
    }
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_38 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339((LPVOID)(local_38 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}


