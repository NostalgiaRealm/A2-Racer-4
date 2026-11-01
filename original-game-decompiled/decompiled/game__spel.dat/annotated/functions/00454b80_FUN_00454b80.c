
/* ==== FUN_00454b80 @ 00454b80 ==== 
 * signature: undefined __cdecl FUN_00454b80(int param_1, char * param_2)
 * body: 00454b80-00454cdb
 */

void __cdecl FUN_00454b80(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a69a;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_00402940(local_1c,(undefined4 *)param_2,~uVar3 - 1);
  local_4 = 0;
  FUN_004a7be0((void *)(param_1 * 0xf0 + DAT_00715e50),local_1c);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_2c[0] = (undefined1)param_1;
  uVar3 = 0xffffffff;
  *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 0;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 1;
  FUN_00478640(param_1,local_2c);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


