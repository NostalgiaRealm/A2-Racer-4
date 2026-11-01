
/* ==== FUN_00492d32 @ 00492d32 ==== 
 * signature: undefined __cdecl FUN_00492d32(undefined4 param_1, float param_2)
 * body: 00492d32-00493070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00492d32(undefined4 param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  int unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar10;
  float fStack0000000c;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  float fStack0000001c;
  char *pcStack00000020;
  void *pvStack00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000034;
  float fStack00000038;
  char *pcStack0000003c;
  float fStack00000040;
  float in_stack_00000048;
  float in_stack_0000004c;
  undefined4 in_stack_00000050;
  float fStack00000054;
  float fStack00000058;
  void *pvStack0000005c;
  undefined1 uStack00000068;
  uint3 uStack00000069;
  
  fVar9 = FUN_004a6800(0x7128b0);
  fStack0000000c = (float)((float10)param_2 / fVar9);
  fStack00000010 = *(float *)(unaff_EBP + 0x34) - *(float *)(unaff_EBP + 0x28);
  fStack00000014 = *(float *)(unaff_EBP + 0x30) - *(float *)(unaff_EBP + 0x24);
  *(float *)(unaff_EBP + 100) =
       (_DAT_005b23b8 * 0.25) / fStack0000000c + *(float *)(unaff_EBP + 100);
  fStack00000018 = (_DAT_005b23b8 * 0.5) / fStack0000000c + *(float *)(unaff_EBP + 0x68);
  *(float *)(unaff_EBP + 0x68) = fStack00000018;
  lVar10 = __ftol();
  iVar2 = DAT_0073b530;
  uVar5 = DAT_005b23bc;
  fVar6 = *(float *)(DAT_0073b530 + ((uint)lVar10 & DAT_005b23bc) * 4);
  pcStack00000020 = (char *)(fStack00000010 * fVar6);
  fStack0000001c = fStack00000014 * fVar6;
  pvStack00000024 = (void *)(float)(extraout_ST0 * (float10)fVar6);
  fStack00000038 = fStack0000001c;
  pcStack0000003c = pcStack00000020;
  fStack00000040 = (float)pvStack00000024;
  lVar10 = __ftol();
  pvStack00000024 =
       (void *)(*(float *)(iVar2 + ((uint)lVar10 & uVar5) * 4) * 0.4 + *(float *)(unaff_EBP + 0x2c))
  ;
  pcStack00000020 = (char *)((float)pcStack0000003c + *(float *)(unaff_EBP + 0x28));
  fStack0000001c = fStack00000038 + *(float *)(unaff_EBP + 0x24);
  *(float *)(unaff_EBP + 0x18) = fStack0000001c;
  *(char **)(unaff_EBP + 0x1c) = pcStack00000020;
  *(void **)(unaff_EBP + 0x20) = pvStack00000024;
  FUN_0047bc50(*(void **)(unaff_EBP + 4),(float *)(unaff_EBP + 0x18));
  if (*(int *)(unaff_EBP + 0x5c) == 0) {
    puVar3 = (undefined4 *)FUN_0047bc40(*(int *)(unaff_EBP + 4));
    in_stack_0000002c = *puVar3;
    in_stack_00000030 = puVar3[1];
    in_stack_00000034 = (_DAT_005b23b8 + _DAT_005b23b8) / fStack0000000c + (float)puVar3[2];
    FUN_0047bc90(*(void **)(unaff_EBP + 4),&stack0x0000002c);
    lVar10 = __ftol();
    in_stack_00000050 = 0x3f800000;
    in_stack_00000048 = *(float *)(DAT_0073b530 + ((uint)lVar10 & DAT_005b23bc) * 4) * 0.3 + 1.0;
    in_stack_0000004c = in_stack_00000048;
    (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(&stack0x00000048);
  }
  fStack0000001c = (float)CONCAT31(fStack0000001c._1_3_,param_1._3_1_);
  FUN_004028f0(&stack0x0000001c,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  fVar6 = (float)(~uVar5 - 1);
  uVar4 = FUN_00402a00(&stack0x0000001c,(uint)fVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
    pcVar8 = pcStack00000020;
    for (uVar5 = (uint)fVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = (uint)fVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcStack00000020[(int)fVar6] = '\0';
    pvStack00000024 = (void *)fVar6;
  }
  fStack00000038 = (float)CONCAT31(fStack00000038._1_3_,param_1._3_1_);
  _uStack00000068 = 0;
  FUN_004028f0(&stack0x00000038,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_m_FinStrElement_not_initialised_005ad014;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  fVar6 = (float)(~uVar5 - 1);
  uVar4 = FUN_00402a00(&stack0x00000038,(uint)fVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_m_FinStrElement_not_initialised_005ad014;
    pcVar8 = pcStack0000003c;
    for (uVar5 = (uint)fVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = (uint)fVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcStack0000003c[(int)fVar6] = '\0';
    fStack00000040 = fVar6;
  }
  uStack00000068 = 1;
  FUN_00487bc0(*(int *)(unaff_EBP + 8),(undefined1 *)&stack0x00000038,(int)&stack0x0000001c);
  _uStack00000068 = (uint)uStack00000069 << 8;
  FUN_004028f0(&stack0x00000038,'\x01');
  _uStack00000068 = 0xffffffff;
  if (pcStack00000020 != (char *)0x0) {
    cVar1 = pcStack00000020[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack00000020 + -1);
    }
    else {
      pcStack00000020[-1] = cVar1 + -1;
    }
  }
  pcStack0000003c = (char *)(*(float *)(unaff_EBP + 0x4c) - *(float *)(unaff_EBP + 0x40));
  lVar10 = __ftol();
  fStack0000000c = *(float *)(DAT_0073b530 + ((uint)lVar10 & DAT_005b23bc) * 4);
  pcStack0000003c = (char *)((float)pcStack0000003c * fStack0000000c);
  fStack0000001c =
       (float)(extraout_ST0_00 * (float10)fStack0000000c + (float10)*(float *)(unaff_EBP + 0x3c));
  pcStack00000020 = (char *)((float)pcStack0000003c + *(float *)(unaff_EBP + 0x40));
  pvStack00000024 = *(void **)(unaff_EBP + 0x44);
  fStack00000054 = fStack0000001c;
  fStack00000058 = (float)pcStack00000020;
  pvStack0000005c = pvStack00000024;
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x20))(1);
  FUN_0047bc50(*(void **)(unaff_EBP + 8),&stack0x00000050);
  ExceptionList = pvStack0000005c;
  return;
}


