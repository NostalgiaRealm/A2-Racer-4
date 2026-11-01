
/* ==== FUN_004e6ca0 @ 004e6ca0 ==== 
 * signature: undefined __cdecl FUN_004e6ca0(void * param_1, void * param_2, char * param_3)
 * body: 004e6ca0-004e6de1
 */

void __cdecl FUN_004e6ca0(void *param_1,void *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571d50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004093c0((void *)((int)param_1 + 0x44),param_2,0,0xffffffff);
  FUN_004d7510(local_1c,(undefined4 *)&stack0x00000010);
  local_4 = 0;
  FUN_004e62b0(param_1,param_3);
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
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_2c[0] = param_1._0_1_;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar5 = (undefined4 *)&DAT_00712694;
    puVar7 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(local_2c,uVar3);
  }
  local_4 = 1;
  FUN_004093c0((void *)((int)param_1 + 0x44),local_2c,0,0xffffffff);
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_28 + -1));
  }
  ExceptionList = local_c;
  return;
}


