
/* ==== FUN_004e0da0 @ 004e0da0 ==== 
 * signature: undefined __thiscall FUN_004e0da0(void * this, undefined4 param_1, void * param_2)
 * body: 004e0da0-004e0f47
 */

void __thiscall FUN_004e0da0(void *this,undefined4 param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  void *in_stack_00000018;
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  pcStack_8 = FUN_00571380;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)((int)this + 0x20);
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004e5a70((int)this + 0x34);
  iVar3 = FUN_004d9a70(iVar3);
  uVar8 = iVar2 * iVar3;
  puVar4 = operator_new(uVar8);
  if (puVar4 == (undefined4 *)0x0) {
    auStack_28[0] = param_2._0_1_;
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_00712694;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    puStack_24 = (undefined4 *)0x0;
    uStack_20 = 0;
    puStack_1c = (undefined4 *)0x0;
    uVar5 = FUN_00402a00(auStack_28,uVar6,'\x01');
    if ((char)uVar5 != '\0') {
      puVar4 = (undefined4 *)&DAT_00712694;
      puVar9 = puStack_24;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_004029e0(auStack_28,uVar6);
    }
    auStack_18[0] = param_2._0_1_;
    uVar6 = 0xffffffff;
    pcVar10 = s_out_of_memory_on_allocation_of_a_005b7464;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iStack_14 = 0;
    uStack_10 = 0;
    pvStack_c = (void *)0x0;
    FUN_00402940(auStack_18,(undefined4 *)s_out_of_memory_on_allocation_of_a_005b7464,~uVar6 - 1);
    FUN_004d6900(0xbb9,auStack_18,(undefined1 *)((int)this + 0xc),auStack_28);
    if (iStack_4 != 0) {
      cVar1 = *(char *)(iStack_4 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_4 + -1));
      }
      else {
        *(char *)(iStack_4 + -1) = cVar1 + -1;
      }
    }
    iStack_4 = 0;
    if (iStack_14 != 0) {
      cVar1 = *(char *)(iStack_14 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_14 + -1));
      }
      else {
        *(char *)(iStack_14 + -1) = cVar1 + -1;
      }
    }
    iStack_14 = 0;
    uStack_10 = 0;
    pvStack_c = (void *)0x0;
    puVar4 = puStack_1c;
  }
  puVar9 = puVar4;
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  FUN_004d92a0(in_stack_00000018,puVar4);
  ExceptionList = param_2;
  return;
}


