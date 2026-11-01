
/* ==== FUN_0045d170 @ 0045d170 ==== 
 * signature: undefined1 __cdecl FUN_0045d170(undefined4 param_1)
 * body: 0045d170-0045db69
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl FUN_0045d170(undefined4 param_1)

{
  bool bVar1;
  void *this;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  float in_stack_00000050;
  undefined4 auStackY_cc [2];
  float local_8c;
  float local_88;
  float local_84;
  float local_64 [3];
  float local_58;
  undefined4 local_54;
  float local_50;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_0056a98b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_15 = 1;
  local_8 = 0;
  if (DAT_006fb918 == 0) {
    return 0;
  }
  ExceptionList = &local_10;
  bVar1 = FUN_00460310((int)DAT_00709980);
  if (!bVar1) {
    ExceptionList = local_10;
    return 0;
  }
  switch(param_1) {
  case 0:
    lVar7 = __ftol();
    iVar4 = ((uint)lVar7 & DAT_005b23bc) * 4;
    local_54 = 0;
    local_64[0] = *(float *)(iVar4 + DAT_0073b578) * in_stack_00000048 -
                  *(float *)(iVar4 + DAT_0073b530) * in_stack_00000050;
    local_64[1] = 0.0;
    local_64[2] = *(float *)(iVar4 + DAT_0073b578) * in_stack_00000050 +
                  *(float *)(iVar4 + DAT_0073b530) * in_stack_00000048;
    local_58 = local_64[0];
    local_50 = local_64[2];
    FUN_00460370(local_64);
    if (DAT_00709980 == (char *)0x0) {
      this = operator_new(0xac);
      local_8._0_1_ = 1;
      if (this == (void *)0x0) {
        DAT_00709980 = (char *)0x0;
      }
      else {
        puVar5 = (undefined4 *)&stack0x00000008;
        puVar6 = (undefined4 *)&stack0xffffff40;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        auStackY_cc[1] = 0x45d2d5;
        DAT_00709980 = (char *)FUN_0045e350(this,10);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_84 = 6.412333e-39;
      FUN_004a6980((uint)(DAT_00709980 != (char *)0x0),
                   (byte *)s__s___d__Not_enough_mem_for_new_p_005a54dc);
    }
    else {
      puVar5 = (undefined4 *)&stack0x00000008;
      puVar6 = (undefined4 *)&stack0xffffff44;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_0045e660(DAT_00709980,1);
    }
    _DAT_00709994 = _DAT_00709994 + 1;
    ExceptionList = local_10;
    return local_15;
  case 1:
    local_8c = in_stack_00000048;
    local_88 = (float)in_stack_0000004c;
    local_84 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pcVar3 = (char *)FUN_0045f6f0();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_1c = s_CreateSparkSystem_failed_005a5508;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_1c,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_0070998c = DAT_0070998c + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_0070998c = DAT_0070998c + 1;
    ExceptionList = local_10;
    return local_15;
  case 2:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d414;
    pcVar3 = (char *)FUN_0045be90();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_20 = s_CreateLeafSystem_failed_005a5524;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_20,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_00709984 = DAT_00709984 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_00709984 = DAT_00709984 + 1;
    ExceptionList = local_10;
    return local_15;
  case 3:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d6f8;
    pcVar3 = (char *)FUN_00458e20();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_30 = s_CreateBirdSystem_failed_005a558c;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_30,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_00709998 = DAT_00709998 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_00709998 = DAT_00709998 + 1;
    ExceptionList = local_10;
    return local_15;
  case 4:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d4cd;
    pcVar3 = (char *)FUN_0045c8a0();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_24 = s_CreateMailSystem_failed_005a553c;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_24,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_00709988 = DAT_00709988 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_00709988 = DAT_00709988 + 1;
    ExceptionList = local_10;
    return local_15;
  case 5:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d63f;
    pcVar3 = (char *)FUN_00460a30();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_2c = s_CreateTrashSystem_failed_005a5570;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_2c,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_00709990 = DAT_00709990 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_00709990 = DAT_00709990 + 1;
    ExceptionList = local_10;
    return local_15;
  case 6:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d586;
    pcVar3 = (char *)FUN_0045edc0();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_28 = s_CreatePaperSystem_failed_005a5554;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_28,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_0070999c = DAT_0070999c + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_0070999c = DAT_0070999c + 1;
    ExceptionList = local_10;
    return local_15;
  case 7:
    pcVar3 = (char *)FUN_00459de0((undefined4 *)&stack0x00000008,&stack0x00000048);
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_48 = s_CreateCarPartSystem_failed_005a5638;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_48,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_007099a0 = DAT_007099a0 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_007099a0 = DAT_007099a0 + 1;
    ExceptionList = local_10;
    return local_15;
  case 8:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d7b1;
    pcVar3 = (char *)FUN_0045a040();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_34 = s_CreateDirtSystem_failed_005a55a4;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_34,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_007099a4 = DAT_007099a4 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_007099a4 = DAT_007099a4 + 1;
    ExceptionList = local_10;
    return local_15;
  case 9:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d86a;
    pcVar3 = (char *)FUN_0045a890();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_38 = s_CreateDirtpieceSystem_failed_005a55bc;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_38,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_007099a8 = DAT_007099a8 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_007099a8 = DAT_007099a8 + 1;
    ExceptionList = local_10;
    return local_15;
  case 10:
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d923;
    pcVar3 = (char *)FUN_004613e0();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_3c = s_CreateWaterSystem_failed_005a55dc;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_3c,&DAT_0057d508);
    }
    if (DAT_00709980 != (char *)0x0) {
      uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
      if ((char)uVar2 == '\0') {
        local_15 = 0;
      }
      DAT_007099ac = DAT_007099ac + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = pcVar3;
    DAT_007099ac = DAT_007099ac + 1;
    ExceptionList = local_10;
    return local_15;
  case 0xb:
    local_8c = in_stack_00000048;
    local_88 = (float)in_stack_0000004c;
    local_84 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pcVar3 = (char *)FUN_00461c30();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_40 = s_CreateWaterwaveSystem_failed_005a55f8;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_40,&DAT_0057d508);
    }
    break;
  case 0xc:
    local_8c = in_stack_00000048;
    local_88 = (float)in_stack_0000004c;
    local_84 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    pcVar3 = (char *)FUN_00461c30();
    if (pcVar3 == (char *)0x0) {
      local_15 = 0;
      local_44 = s_CreateWaterwaveSystem_failed_005a5618;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_44,&DAT_0057d508);
    }
    break;
  default:
    ExceptionList = local_10;
    return 0;
  }
  if (DAT_00709980 != (char *)0x0) {
    uVar2 = FUN_0045e8d0(DAT_00709980,pcVar3);
    if ((char)uVar2 == '\0') {
      local_15 = 0;
    }
    DAT_007099b0 = DAT_007099b0 + 1;
    ExceptionList = local_10;
    return local_15;
  }
  DAT_00709980 = pcVar3;
  DAT_007099b0 = DAT_007099b0 + 1;
  ExceptionList = local_10;
  return local_15;
}


