
/* ==== FUN_0046d360 @ 0046d360 ==== 
 * signature: undefined __fastcall FUN_0046d360(void * param_1)
 * body: 0046d360-0046d89a
 */

void __fastcall FUN_0046d360(void *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056adf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a6800(0x7128b0);
  puVar3 = FUN_0049df90(local_1c,&DAT_005a869c);
  local_4 = 0;
  FUN_004093c0((void *)((int)param_1 + 0x14),puVar3,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  *(undefined4 *)((int)param_1 + 0x10) = 1;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_005a86a0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)&DAT_005a86a0,~uVar5 - 1);
  puVar2 = PTR_s_CarLeft_005a7db4;
  local_4 = 1;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = puVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar5 - 1);
  local_4._0_1_ = 2;
  FUN_0046ced0(param_1,local_2c,(int)local_1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = s_RIGHT_005a86a8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_RIGHT_005a86a8,~uVar5 - 1);
  puVar2 = PTR_DAT_005a7db8;
  local_4 = 3;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = puVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar5 - 1);
  local_4._0_1_ = 4;
  FUN_0046ced0(param_1,local_1c,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_005a86b0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a86b0,~uVar5 - 1);
  puVar2 = PTR_s_CarForward_005a7dbc;
  local_4 = 5;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = puVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar5 - 1);
  local_4._0_1_ = 6;
  FUN_0046ced0(param_1,local_1c,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_005a86b4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a86b4,~uVar5 - 1);
  puVar2 = PTR_s_CarBackward_005a7dc0;
  local_4 = 7;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = puVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar5 - 1);
  local_4._0_1_ = 8;
  FUN_0046ced0(param_1,local_1c,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_005a86bc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a86bc,~uVar5 - 1);
  puVar2 = PTR_DAT_005a7dc4;
  local_4 = 9;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = puVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar5 - 1);
  local_4._0_1_ = 10;
  FUN_0046ced0(param_1,local_1c,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_005a86c4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a86c4,~uVar5 - 1);
  puVar2 = PTR_s_CarHandbrake_005a7dcc;
  local_4 = 0xb;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = puVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar5 - 1);
  local_4._0_1_ = 0xc;
  FUN_0046ced0(param_1,local_1c,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_3c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_005a86cc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar4 = FUN_00402a00(local_3c,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    puVar7 = &DAT_005a86cc;
    puVar8 = local_38;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(local_3c,uVar5);
  }
  puVar7 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
  local_4 = 0xd;
  FUN_004028f0(local_4c,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar4 = FUN_00402a00(local_4c,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_48 = *puVar7;
      puVar7 = puVar7 + 1;
      local_48 = local_48 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)local_48 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      local_48 = (undefined4 *)((int)local_48 + 1);
    }
    FUN_004029e0(local_4c,uVar5);
  }
  local_4._0_1_ = 0xe;
  FUN_0046ced0(param_1,local_4c,(int)local_3c);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_004028f0(local_4c,'\x01');
  if (local_38 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_38 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_38 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_38 + -1));
  }
  ExceptionList = local_c;
  return;
}


