
/* ==== FUN_004797e0 @ 004797e0 ==== 
 * signature: undefined1 * __cdecl FUN_004797e0(undefined1 * param_1, char * param_2, int param_3)
 * body: 004797e0-00479929
 */

undefined1 * __cdecl FUN_004797e0(undefined1 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b9c8;
  pvStack_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  uVar3 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *param_2;
      param_2 = param_2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 0;
  uVar3 = 0xffffffff;
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    uVar3 = *(uint *)(param_3 + 8);
  }
  if (-local_14 - 1 <= uVar3) {
    FUN_0054b1b4();
  }
  if (uVar3 != 0) {
    uVar4 = local_14 + uVar3;
    uVar2 = FUN_00402a00(local_1c,uVar4,'\0');
    if ((char)uVar2 != '\0') {
      pcVar6 = *(char **)(param_3 + 4);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "";
      }
      pcVar7 = local_18 + local_14;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_18[uVar4] = '\0';
      local_14 = uVar4;
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


