
/* ==== FUN_00407810 @ 00407810 ==== 
 * signature: undefined __stdcall FUN_00407810(void)
 * body: 00407810-00407991
 */

void FUN_00407810(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005695a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  local_4 = 0;
  FUN_004028f0(local_2c,'\0');
  local_4._0_1_ = 1;
  FUN_004028f0(local_3c,'\0');
  uVar5 = 0xffffffff;
  pcVar4 = (char *)&DAT_00590694;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = &DAT_00590694;
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
    *(undefined1 *)((int)local_38 + uVar5) = 0;
    local_34 = uVar5;
  }
  local_4._0_1_ = 2;
  iVar3 = FUN_00424660(&DAT_005d3458,(int)local_3c);
  FUN_004093c0(local_1c,(void *)(iVar3 + 0x10),0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_38 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_38 + -1));
    }
    else {
      *(char *)((int)local_38 + -1) = cVar1 + -1;
    }
  }
  pcVar4 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004b75a0(&DAT_00712130,pcVar4);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


