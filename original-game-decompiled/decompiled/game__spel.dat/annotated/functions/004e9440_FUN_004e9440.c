
/* ==== FUN_004e9440 @ 004e9440 ==== 
 * signature: undefined1 * __cdecl FUN_004e9440(undefined1 * param_1, undefined4 param_2, char * param_3)
 * body: 004e9440-004e952e
 */

undefined1 * __cdecl FUN_004e9440(undefined1 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_00571f58;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00559400();
  pcVar6 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar6 = "";
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = &stack0xffffffe0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  puVar2 = FUN_005690b0((uint *)&stack0xffffffe0);
  *param_1 = param_1._3_1_;
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar8 = puVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    uVar5 = *puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
  } while ((char)uVar5 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(param_1,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = *(uint **)(param_1 + 4);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar8 = (char)*puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    *(uint *)(param_1 + 8) = uVar4;
    *(undefined1 *)(uVar4 + *(int *)(param_1 + 4)) = 0;
  }
  if (param_3 != (char *)0x0) {
    cVar1 = param_3[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      param_3[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


