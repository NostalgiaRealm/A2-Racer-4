
/* ==== FUN_00401280 @ 00401280 ==== 
 * signature: undefined1 * __fastcall FUN_00401280(undefined1 * param_1)
 * body: 00401280-004013a6
 */

undefined1 * __fastcall FUN_00401280(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_11;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005693aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = local_11;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = 0xffffffff;
  local_4 = 0;
  pcVar6 = (char *)&DAT_005c9968;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(param_1,'\x01');
      goto LAB_00401348;
    }
    if ((0x1f < *(uint *)(param_1 + 0xc)) || (*(uint *)(param_1 + 0xc) < uVar3)) {
      FUN_004028f0(param_1,'\x01');
      goto LAB_0040131c;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(param_1,'\0');
      goto LAB_00401348;
    }
LAB_0040131c:
    FUN_00402b20(uVar3);
  }
  puVar5 = &DAT_005c9968;
  puVar7 = *(undefined4 **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
LAB_00401348:
  *(undefined4 *)(param_1 + 0x10) = 10;
  *(undefined4 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0x415e38e4;
  *(undefined4 *)(param_1 + 0x2c) = 0x41de38e4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x18) = 0x32;
  *(undefined4 *)(param_1 + 0x1c) = 0x32;
  *(undefined4 *)(param_1 + 0x20) = 0xfa;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  ExceptionList = pvStack_c;
  return param_1;
}


