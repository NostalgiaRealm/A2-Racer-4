
/* ==== FUN_0046fe50 @ 0046fe50 ==== 
 * signature: undefined __fastcall FUN_0046fe50(int * param_1)
 * body: 0046fe50-0046fede;0046fee2-0047016c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046fedf-0046fee1
 */

void __fastcall FUN_0046fe50(int *param_1)

{
  char cVar1;
  bool bVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  undefined4 *local_28;
  int *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_0056b0ed;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_005a89d4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a89d4,~uVar5 - 1);
  local_8._0_1_ = 1;
  this = (void *)FUN_004ea0c0();
  bVar2 = FUN_004eb460(this,(int)local_2c);
  local_8._0_1_ = 0;
  FUN_004028f0(local_2c,'\x01');
  if (!bVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Could_not_find_the_mouse_005a89dc);
  }
  local_3c[0] = local_15;
  FUN_004028f0(local_3c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_005a8a08;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)&DAT_005a8a08,~uVar5 - 1);
  local_8._0_1_ = 2;
  local_2c[0] = local_15;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = s_CM_MOUSE_X_MOVE_005a8a10;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_CM_MOUSE_X_MOVE_005a8a10,~uVar5 - 1);
  local_8._0_1_ = 3;
  FUN_00469fa0();
  iVar3 = FUN_0046cd00((int)local_2c,(int)local_3c);
  *param_1 = iVar3;
  local_8._0_1_ = 2;
  FUN_004028f0(local_2c,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_3c,'\x01');
  local_2c[0] = local_15;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_005a8a20;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a8a20,~uVar5 - 1);
  local_3c[0] = local_15;
  local_8._0_1_ = 4;
  FUN_004028f0(local_3c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = s_CM_MOUSE_Y_MOVE_005a8a28;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_CM_MOUSE_Y_MOVE_005a8a28,~uVar5 - 1);
  local_8._0_1_ = 5;
  FUN_00469fa0();
  iVar3 = FUN_0046cd00((int)local_3c,(int)local_2c);
  param_1[1] = iVar3;
  local_8._0_1_ = 4;
  FUN_004028f0(local_3c,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_2c,'\x01');
  local_2c[0] = local_15;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_005a8a38;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a8a38,~uVar5 - 1);
  local_8._0_1_ = 6;
  local_3c[0] = local_15;
  FUN_004028f0(local_3c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = s_CM_MOUSE_X_POS_005a8a40;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_CM_MOUSE_X_POS_005a8a40,~uVar5 - 1);
  local_8._0_1_ = 7;
  FUN_00469fa0();
  iVar3 = FUN_0046cd00((int)local_3c,(int)local_2c);
  param_1[2] = iVar3;
  local_8._0_1_ = 6;
  FUN_004028f0(local_3c,'\x01');
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_2c,'\x01');
  local_2c[0] = local_15;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_005a8a50;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar4 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    puVar7 = &DAT_005a8a50;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_28 = *puVar7;
      puVar7 = puVar7 + 1;
      local_28 = local_28 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)local_28 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      local_28 = (undefined4 *)((int)local_28 + 1);
    }
    FUN_004029e0(local_2c,uVar5);
    param_1 = local_1c;
  }
  local_8._0_1_ = 8;
  local_3c[0] = local_15;
  FUN_004028f0(local_3c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = s_CM_MOUSE_Y_POS_005a8a58;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_CM_MOUSE_Y_POS_005a8a58,~uVar5 - 1);
  local_8._0_1_ = 9;
  FUN_00469fa0();
  iVar3 = FUN_0046cd00((int)local_3c,(int)local_2c);
  param_1[3] = iVar3;
  local_8._0_1_ = 8;
  FUN_004028f0(local_3c,'\x01');
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_2c,'\x01');
  ExceptionList = local_10;
  return;
}


