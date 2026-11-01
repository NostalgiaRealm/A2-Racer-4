
/* ==== FUN_00484fc0 @ 00484fc0 ==== 
 * signature: undefined __fastcall FUN_00484fc0(void * param_1)
 * body: 00484fc0-00485138
 */

void __fastcall FUN_00484fc0(void *param_1)

{
  char cVar1;
  void *this;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_c8 [33];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_30;
  undefined1 local_28 [4];
  char *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  uint local_8;
  
  pcStack_c = FUN_0056cea7;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_30 = param_1;
  FUN_00485ed0(param_1,local_c8);
  local_44[0] = local_15;
  uVar3 = 0xffffffff;
  local_40 = 0;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aae40;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_3c = 0;
  local_38 = 0;
  FUN_00402940(local_44,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aae40,~uVar3 - 1);
  local_28[0] = local_15;
  local_8._0_1_ = 1;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_Uninitialized_overlay_005aae68;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_28,uVar3,'\x01');
  this = local_30;
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Uninitialized_overlay_005aae68;
    pcVar6 = local_24;
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
    local_24[uVar3] = '\0';
    local_20 = uVar3;
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00487bc0(*(int *)((int)local_30 + 4),local_28,(int)local_44);
  if (local_24 != (char *)0x0) {
    cVar1 = local_24[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_24 + -1);
    }
    else {
      local_24[-1] = cVar1 + -1;
    }
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_8 = local_8 & 0xffffff00;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_40 + -1));
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  FUN_0047bda0(*(void **)((int)this + 4),(int)this + 0x18);
  FUN_00486040(this,local_c8);
  ExceptionList = local_10;
  return;
}


