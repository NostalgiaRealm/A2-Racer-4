
/* ==== FUN_004e9cc0 @ 004e9cc0 ==== 
 * signature: undefined4 * __fastcall FUN_004e9cc0(undefined4 * param_1)
 * body: 004e9cc0-004e9f31
 */

undefined4 * __fastcall FUN_004e9cc0(undefined4 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_25;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057209d;
  local_c = ExceptionList;
  local_20 = param_1 + 1;
  ExceptionList = &local_c;
  local_24 = param_1;
  FUN_004ecd10(local_20);
  local_4 = 0;
  FUN_004ece20(param_1 + 3);
  local_4 = 1;
  FUN_004900f0(param_1 + 6,s_CBase_005af210,&local_25);
  param_1[5] = &PTR_FUN_005781e8;
  local_4._0_1_ = 2;
  FUN_004eba50(param_1 + 10);
  param_1[10] = &PTR_FUN_005781e4;
  local_4._0_1_ = 3;
  FUN_004eba50(param_1 + 0xf);
  param_1[0xf] = &PTR_FUN_005781e0;
  local_4._0_1_ = 4;
  param_1[0x14] = &PTR_FUN_005781d0;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = local_25;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  param_1[0x15] = puVar2;
  local_4._0_1_ = 5;
  param_1[0x16] = &PTR_FUN_005781c0;
  local_20 = operator_new(0x10);
  local_4._0_1_ = 6;
  if (local_20 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00424980(local_20,&local_25);
  }
  param_1[0x17] = uVar3;
  local_4._0_1_ = 7;
  *param_1 = &PTR_FUN_005781bc;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_1c[0] = local_25;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = s_Keyboard_005b77b0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)s_Keyboard_005b77b0,~uVar4 - 1);
  local_4._0_1_ = 8;
  FUN_004093c0(param_1 + 6,local_1c,0,0xffffffff);
  local_4._0_1_ = 7;
  FUN_004028f0(local_1c,'\x01');
  local_1c[0] = local_25;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = s_Mouse_005b77a8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)s_Mouse_005b77a8,~uVar4 - 1);
  local_4._0_1_ = 9;
  FUN_004093c0(param_1 + 0xb,local_1c,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004028f0(local_1c,'\x01');
  local_1c[0] = local_25;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&DAT_005b779c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar6 = &DAT_005b779c;
    puVar8 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(local_1c,uVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004093c0(param_1 + 0x10,local_1c,0,0xffffffff);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_0054b339((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return param_1;
}


