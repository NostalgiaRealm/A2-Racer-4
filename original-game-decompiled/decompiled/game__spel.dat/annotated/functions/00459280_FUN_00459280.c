
/* ==== FUN_00459280 @ 00459280 ==== 
 * signature: undefined __fastcall FUN_00459280(int param_1)
 * body: 00459280-00459343;00459347-0045935e;004593c1-004593d3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00459344-00459346
 */

void __fastcall FUN_00459280(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a7fd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  piVar5 = *(int **)(param_1 + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  while( true ) {
    iVar6 = local_18;
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    pfVar3 = (float *)FUN_0045e090((int)piVar5);
    local_28 = *pfVar3;
    iVar4 = FUN_0045e090((int)piVar5);
    local_24 = *(undefined4 *)(iVar4 + 4);
    iVar4 = FUN_0045e090((int)piVar5);
    uVar2 = local_24;
    fVar1 = *(float *)(iVar4 + 8);
    puVar7 = (undefined4 *)(iVar6 + 0x10);
    puVar8 = local_68;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_38 = local_38 + local_28;
    local_30 = local_30 + fVar1;
    local_34 = uVar2;
    puVar7 = local_68;
    puVar8 = &DAT_0073b474;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar6 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (iVar6 != 0) break;
    FUN_00459580(piVar5);
    piVar5 = (int *)FUN_0045e0d0((int)piVar5);
  }
  FUN_004bb290(iVar6);
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}


