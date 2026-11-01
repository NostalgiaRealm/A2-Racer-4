
/* ==== FUN_004d8ff0 @ 004d8ff0 ==== 
 * signature: undefined __thiscall FUN_004d8ff0(void * this, void * param_1)
 * body: 004d8ff0-004d91c9
 */

void __thiscall FUN_004d8ff0(void *this,void *param_1)

{
  char cVar1;
  code cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 in_stack_ffffffbc;
  undefined1 uVar12;
  void *pvVar13;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar12 = (undefined1)((uint)in_stack_ffffffbc >> 0x18);
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (99999 < *(int *)((int)this + 0xc)) {
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_00712694;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    pvVar13 = this;
    local_1c[0] = uVar12;
    local_3c[0] = uVar12;
    FUN_00402940(local_1c,(undefined4 *)&DAT_00712694,~uVar5 - 1);
    local_4 = 0;
    local_2c[0] = local_3c[0];
    FUN_004028f0(local_3c,'\0');
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_00712694;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar3 = FUN_00402a00(local_3c,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar8 = (undefined4 *)&DAT_00712694;
      puVar10 = local_38;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_38 + uVar5) = 0;
      this = pvVar13;
      local_34 = uVar5;
    }
    local_4._0_1_ = 1;
    FUN_004028f0(local_2c,'\0');
    uVar5 = 0xffffffff;
    pcVar9 = s_Stack_overflow_005b7248;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar3 = FUN_00402a00(local_2c,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar9 = s_Stack_overflow_005b7248;
      pcVar11 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_28[uVar5] = '\0';
      this = pvVar13;
      local_24 = uVar5;
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004d6900(0xbba,local_2c,local_3c,local_1c);
    FUN_004028f0(local_1c,'\x01');
    if (local_28 != (char *)0x0) {
      cVar1 = local_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_28 + -1);
      }
      else {
        local_28[-1] = cVar1 + -1;
      }
    }
    local_28 = (char *)0x0;
    local_24 = 0;
    uStack_20 = 0;
    if (pcStack_8 != (code *)0x0) {
      cVar2 = pcStack_8[-1];
      if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
        FUN_0054b339(pcStack_8 + -1);
      }
      else {
        pcStack_8[-1] = (code)((char)cVar2 + -1);
      }
    }
  }
  puVar7 = (uint *)(*(int *)((int)this + 0xc) + 5000);
  *(uint **)((int)this + 0xc) = puVar7;
  piVar4 = FUN_0055a9b4(*(int **)((int)this + 4),puVar7);
  *(int **)((int)this + 4) = piVar4;
  ExceptionList = param_1;
  return;
}


