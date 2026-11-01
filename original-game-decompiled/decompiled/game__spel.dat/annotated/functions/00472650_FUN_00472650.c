
/* ==== FUN_00472650 @ 00472650 ==== 
 * signature: undefined4 * __fastcall FUN_00472650(undefined4 * param_1)
 * body: 00472650-0047273f
 */

undefined4 * __fastcall FUN_00472650(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_15;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056b39b;
  pvStack_c = ExceptionList;
  puVar5 = param_1 + 1;
  ExceptionList = &pvStack_c;
  *(undefined1 *)puVar5 = local_15;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = 0xffffffff;
  *param_1 = &PTR_FUN_00576a1c;
  pcVar6 = (char *)&DAT_0071265c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = 0;
  if (0xfffffffd < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = param_1[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(puVar5,'\x01');
      goto LAB_00472727;
    }
    if ((0x1f < (uint)param_1[4]) || ((uint)param_1[4] < uVar3)) {
      FUN_004028f0(puVar5,'\x01');
      goto LAB_004726f9;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(puVar5,'\0');
      goto LAB_00472727;
    }
LAB_004726f9:
    FUN_00402b20(uVar3);
  }
  puVar5 = &DAT_0071265c;
  puVar7 = (undefined4 *)param_1[2];
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
  param_1[3] = uVar3;
  *(undefined1 *)(param_1[2] + uVar3) = 0;
LAB_00472727:
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


