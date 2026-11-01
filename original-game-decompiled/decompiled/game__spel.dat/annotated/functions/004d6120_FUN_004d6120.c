
/* ==== FUN_004d6120 @ 004d6120 ==== 
 * signature: undefined4 * __thiscall FUN_004d6120(void * this, undefined4 param_1)
 * body: 004d6120-004d6232
 */

undefined4 * __thiscall FUN_004d6120(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_005700a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005790c4;
  FUN_0054d3cd();
  local_4._0_1_ = 1;
  puVar2 = (undefined4 *)FUN_0055a6b0();
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)*puVar2;
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)puVar2[1];
  pcVar7 = (char *)puVar2[2];
  uVar5 = 0xffffffff;
  pcVar6 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = operator_new(uVar5);
  pcVar6 = pcVar3;
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = s_false_005b70b4;
  *(char **)((int)this + 8) = pcVar3;
  uVar5 = 0xffffffff;
  pcVar7 = s_false_005b70b4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pvVar4 = operator_new(uVar5);
  if (uVar5 != 0) {
    do {
      pcVar6[(int)pvVar4 + -0x5b70b4] = *pcVar6;
      pcVar6 = pcVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar8 = &DAT_005b70ac;
  *(void **)((int)this + 0x10) = pvVar4;
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_005b70ac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pvVar4 = operator_new(uVar5);
  if (uVar5 != 0) {
    do {
      puVar8[(int)pvVar4 + -0x5b70ac] = *puVar8;
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(void **)((int)this + 0x14) = pvVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0054d486();
  ExceptionList = local_c;
  return this;
}


