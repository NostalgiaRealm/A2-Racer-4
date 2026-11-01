
/* ==== FUN_0045ada0 @ 0045ada0 ==== 
 * signature: undefined __fastcall FUN_0045ada0(int param_1)
 * body: 0045ada0-0045aec2;0045aec6-0045aedd;0045af40-0045af52
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045aec3-0045aec5
 */

void __fastcall FUN_0045ada0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float afStack_138 [12];
  undefined4 uStack_108;
  float local_e8 [16];
  undefined4 local_a8 [16];
  float local_68 [12];
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
  
  pcStack_c = FUN_0056a8d2;
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
    pfVar3 = (float *)(iVar7 + 0x10);
    pfVar8 = local_68;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar8 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_38 = local_38 + local_24;
    local_30 = local_30 + fVar1;
    local_34 = uVar2;
    uStack_108 = 0x45ae48;
    FUN_004b4360(local_68,(float)piVar6[0x1c],(float)piVar6[0x1d],(float)piVar6[0x1e]);
    FUN_0045e0a0((int)piVar6);
    pfVar3 = local_68;
    pfVar8 = afStack_138;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar8 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar8 = pfVar8 + 1;
    }
    puVar5 = (undefined4 *)FUN_00460730(local_e8);
    puVar9 = local_a8;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar5 = local_a8;
    puVar9 = &DAT_0073b474;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar7 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iVar7 != 0) break;
    FUN_0045b120(piVar6);
    piVar6 = (int *)FUN_0045e0d0((int)piVar6);
  }
  FUN_004bb290(iVar7);
                    /* WARNING: Subroutine does not return */
  uStack_108 = 0x45aec3;
  Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}


