
/* ==== FUN_004618a0 @ 004618a0 ==== 
 * signature: undefined __fastcall FUN_004618a0(int param_1)
 * body: 004618a0-004619b0;004619b4-004619cb;004619d2-004619e4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004619b1-004619b3
 */

void __fastcall FUN_004618a0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float afStack_128 [12];
  undefined4 uStack_f8;
  float local_d8 [16];
  undefined4 local_98 [16];
  float local_58 [12];
  float local_28;
  undefined4 local_24;
  float local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056ab32;
  local_10 = ExceptionList;
  piVar3 = *(int **)(param_1 + 0xac);
  local_14 = &stack0xffffff1c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    pfVar1 = (float *)(local_18 + 0x10);
    pfVar5 = local_58;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfVar1 = (float *)FUN_0045e090((int)piVar3);
    local_28 = local_28 + *pfVar1;
    iVar4 = FUN_0045e090((int)piVar3);
    local_24 = *(undefined4 *)(iVar4 + 4);
    iVar4 = FUN_0045e090((int)piVar3);
    local_20 = local_20 + *(float *)(iVar4 + 8);
    uStack_f8 = 0x461936;
    FUN_004b4360(local_58,(float)piVar3[0x1c],(float)piVar3[0x1d],(float)piVar3[0x1e]);
    FUN_0045e0a0((int)piVar3);
    pfVar1 = local_58;
    pfVar5 = afStack_128;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar2 = (undefined4 *)FUN_00460730(local_d8);
    puVar6 = local_98;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = local_98;
    puVar6 = &DAT_0073b474;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iVar4 != 0) break;
    FUN_00461b30(piVar3);
    piVar3 = (int *)FUN_0045e0d0((int)piVar3);
  }
  FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
  uStack_f8 = 0x4619b1;
  FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}


