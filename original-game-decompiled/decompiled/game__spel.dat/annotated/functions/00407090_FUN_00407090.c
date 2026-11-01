
/* ==== FUN_00407090 @ 00407090 ==== 
 * signature: undefined4 __stdcall FUN_00407090(void)
 * body: 00407090-00407273
 */

undefined4 FUN_00407090(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_f0 [4];
  char *local_ec;
  uint local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  void *local_d8;
  CHAR local_d4 [8];
  char local_cc [64];
  byte local_8c [128];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569582;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Cop_Settings_00590428);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  local_dc = read_ini_value_setting(s_COP_TYPES_00590440,s_COUNT_00590438);
  local_e0 = 0;
  if (local_dc < 1) {
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)local_dc >> 8),1);
  }
  do {
    iVar2 = local_e0;
    iVar4 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Cop_Settings_0059044c);
    pcVar3 = *(char **)(iVar4 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    set_ini_filename(pcVar3);
    FUN_005587a3(local_d4,&DAT_0059045c);
    read_ini_string_setting(s_COP_TYPES_00590460,local_d4,(LPSTR)local_8c,0x7f);
    iVar4 = get_ini_arguments_online(local_8c,(uint *)0x0);
    FUN_004a6980((uint)(iVar4 == 2),(byte *)s___s___d_Incorrect_number_of_para_00590490);
    FUN_004c3f10(0,local_cc,0x3f);
    uVar6 = 0xffffffff;
    pcVar3 = local_cc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    local_ec = (char *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    uVar5 = FUN_00402a00(local_f0,uVar6,'\x01');
    if ((char)uVar5 != '\0') {
      pcVar3 = local_cc;
      pcVar8 = local_ec;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_ec[uVar6] = '\0';
      iVar2 = local_e0;
      local_e8 = uVar6;
    }
    local_4 = 0;
    FUN_00406f40(local_d8,local_f0);
    local_4 = 0xffffffff;
    if (local_ec != (char *)0x0) {
      cVar1 = local_ec[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_ec + -1);
      }
      else {
        local_ec[-1] = cVar1 + -1;
      }
    }
    local_e0 = iVar2 + 1;
    local_ec = (char *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    if (local_dc <= local_e0) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)local_dc >> 8),1);
    }
  } while( true );
}


