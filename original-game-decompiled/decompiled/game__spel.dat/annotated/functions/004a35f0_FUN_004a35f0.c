
/* ==== FUN_004a35f0 @ 004a35f0 ==== 
 * signature: undefined4 * __fastcall FUN_004a35f0(undefined4 * param_1)
 * body: 004a35f0-004a37d5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004a35f0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 *local_28;
  undefined4 *local_24;
  void *local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ef4d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005772b8;
  local_28 = param_1;
  FUN_004f65c0(param_1 + 1);
  local_24 = param_1 + 6;
  *local_24 = &PTR_FUN_005772a8;
  local_20 = operator_new(0x10);
  local_4 = 0;
  if (local_20 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(local_20,&local_2a);
  }
  param_1[7] = uVar2;
  local_4 = 1;
  FUN_004a5440(param_1 + 8);
  local_4 = 2;
  FUN_004900f0(param_1 + 0xb,s_CBase_005af210,&local_29);
  param_1[10] = &PTR_FUN_005772a4;
  local_4._0_1_ = 3;
  FUN_004900f0(param_1 + 0x10,s_CBase_005af210,&local_2a);
  param_1[0xf] = &PTR_FUN_005772a0;
  local_4._0_1_ = 4;
  FUN_004900f0(param_1 + 0x15,s_CBase_005af210,&local_29);
  param_1[0x14] = &PTR_FUN_0057729c;
  local_4._0_1_ = 5;
  param_1[0x19] = &PTR_FUN_0057728c;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = local_29;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  param_1[0x1a] = puVar3;
  local_4._0_1_ = 6;
  param_1[0x1b] = &PTR_FUN_0057727c;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = local_29;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  param_1[0x1c] = puVar3;
  *param_1 = &PTR_FUN_00577268;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_4._0_1_ = 7;
  _DAT_005af184 = 0x3dcccccd;
  local_1c[0] = local_29;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar5 = s_MapObject_005af204;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)s_MapObject_005af204,~uVar4 - 1);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004093c0(param_1 + 0xb,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 100;
  param_1[5] = 0;
  param_1[1] = 1;
  ExceptionList = local_c;
  return param_1;
}


