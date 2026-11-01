
/* ==== FUN_0049cd90 @ 0049cd90 ==== 
 * signature: undefined4 * __fastcall FUN_0049cd90(undefined4 * param_1)
 * body: 0049cd90-0049cea8
 */

undefined4 * __fastcall FUN_0049cd90(undefined4 *param_1)

{
  undefined4 *this;
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
  
  pcStack_8 = FUN_0056ea21;
  pvStack_c = ExceptionList;
  this = param_1 + 2;
  ExceptionList = &pvStack_c;
  *(undefined1 *)this = local_15;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = local_15;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 10) = local_15;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar3 = 0xffffffff;
  *param_1 = &PTR_FUN_0057719c;
  pcVar6 = (char *)&DAT_00712854;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar3 - 1;
  local_4 = 2;
  uVar3 = FUN_004095c0();
  if (uVar3 < uVar4) {
    FUN_0054b1b4();
  }
  iVar2 = param_1[3];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      FUN_004028f0(this,'\x01');
      goto LAB_0049ce90;
    }
    if ((0x1f < (uint)param_1[5]) || ((uint)param_1[5] < uVar4)) {
      FUN_004028f0(this,'\x01');
      goto LAB_0049ce64;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(this,'\0');
      goto LAB_0049ce90;
    }
LAB_0049ce64:
    FUN_00402b20(uVar4);
  }
  puVar5 = &DAT_00712854;
  puVar7 = (undefined4 *)param_1[3];
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_004029e0(this,uVar4);
LAB_0049ce90:
  *(undefined1 *)(param_1 + 0xf) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


