
/* ==== FUN_004d38c0 @ 004d38c0 ==== 
 * signature: undefined __thiscall FUN_004d38c0(void * this, char * param_1)
 * body: 004d38c0-004d39d7
 */

void __thiscall FUN_004d38c0(void *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_34 [4];
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined **local_24 [6];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fe38;
  local_c = ExceptionList;
  local_34[0] = param_1._0_1_;
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_30 = (char *)0x0;
  local_2c = 0;
  local_28 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(local_34,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = local_30;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *param_1;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_004029e0(local_34,uVar4);
  }
  local_4 = 0;
  piVar3 = (int *)FUN_004d8f10(this,(int)local_34);
  local_4 = 0xffffffff;
  if (local_30 != (char *)0x0) {
    cVar1 = local_30[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_30 + -1);
    }
    else {
      local_30[-1] = cVar1 + -1;
    }
  }
  local_30 = (char *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (piVar3 == (int *)0x0) {
    FUN_004d6730();
  }
  else {
    (**(code **)(*piVar3 + 0x3c))(local_24,(int)this + 0xbc);
    local_24[0] = &PTR_FUN_005778c0;
    FUN_004cf650(local_24);
  }
  ExceptionList = local_c;
  return;
}


