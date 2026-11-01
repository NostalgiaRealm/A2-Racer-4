
/* ==== FUN_0045cd70 @ 0045cd70 ==== 
 * signature: undefined __fastcall FUN_0045cd70(int param_1)
 * body: 0045cd70-0045ce6e;0045ce72-0045ce89;0045ceec-0045cefe
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045ce6f-0045ce71
 */

void __fastcall FUN_0045cd70(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 auStack_138 [12];
  undefined4 uStack_108;
  float local_e8 [16];
  undefined4 local_a8 [16];
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_24;
  undefined4 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a96d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  piVar6 = *(int **)(param_1 + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  while( true ) {
    iVar7 = local_18;
    if (piVar6 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    pfVar3 = (float *)FUN_0045e090((int)piVar6);
    local_24 = *pfVar3;
    iVar4 = FUN_0045e090((int)piVar6);
    local_20 = *(undefined4 *)(iVar4 + 4);
    iVar4 = FUN_0045e090((int)piVar6);
    uVar2 = local_20;
    fVar1 = *(float *)(iVar4 + 8);
    puVar5 = (undefined4 *)(iVar7 + 0x10);
    puVar8 = local_68;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    local_38 = local_38 + local_24;
    local_30 = local_30 + fVar1;
    local_34 = uVar2;
    FUN_0045e0a0((int)piVar6);
    puVar5 = local_68;
    puVar8 = auStack_138;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined4 *)FUN_00460730(local_e8);
    puVar8 = local_a8;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = local_a8;
    puVar8 = &DAT_0073b474;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar7 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iVar7 != 0) break;
    FUN_0045d070(piVar6);
    piVar6 = (int *)FUN_0045e0d0((int)piVar6);
  }
  FUN_004bb290(iVar7);
                    /* WARNING: Subroutine does not return */
  uStack_108 = 0x45ce6f;
  FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}


