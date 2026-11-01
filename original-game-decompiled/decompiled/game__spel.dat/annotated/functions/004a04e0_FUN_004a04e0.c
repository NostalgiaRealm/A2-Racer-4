
/* ==== FUN_004a04e0 @ 004a04e0 ==== 
 * signature: undefined1 * __fastcall FUN_004a04e0(undefined1 * param_1)
 * body: 004a04e0-004a05d4
 */

undefined1 * __fastcall FUN_004a04e0(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_25;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ec40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = local_25;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = 0xffffffff;
  pcVar5 = s_Undefined_005af044;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = 0;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Undefined_005af044;
    pcVar6 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  ExceptionList = local_c;
  return param_1;
}


