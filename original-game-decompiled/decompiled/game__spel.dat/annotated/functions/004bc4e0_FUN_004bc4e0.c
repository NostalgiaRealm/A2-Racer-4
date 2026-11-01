
/* ==== FUN_004bc4e0 @ 004bc4e0 ==== 
 * signature: undefined __cdecl FUN_004bc4e0(uint param_1)
 * body: 004bc4e0-004bc500;004bc504-004bc547;004bc54b-004bc576;004bc57a-004bc613
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bc501-004bc503 004bc548-004bc54a 004bc577-004bc579
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004bc4e0(uint param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 auStack_40 [16];
  
  bVar1 = FUN_004bc430(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_nb_table_entries___d__moet_een_m_005b2404);
  }
  _DAT_005b23b8 = (float)(int)param_1;
  DAT_005b23b4 = param_1;
  DAT_005b23bc = param_1 - 1;
  DAT_0073b530 = LocalAlloc(0x40,param_1 * 4);
  if (DAT_0073b530 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_allocating_cos_si_005b23c0);
  }
  DAT_0073b578 = LocalAlloc(0x40,DAT_005b23b4 * 4);
  if (DAT_0073b578 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_allocating_cos_si_005b23c0);
  }
  param_1 = 0;
  if (0 < (int)DAT_005b23b4) {
    do {
      fVar5 = (float10)(int)param_1;
      param_1 = param_1 + 1;
      fVar6 = (float10)fsin((fVar5 / (float10)(int)DAT_005b23b4) * (float10)6.2831855);
      *(float *)((int)DAT_0073b530 + param_1 * 4 + -4) = (float)fVar6;
      fVar5 = (float10)fcos((fVar5 / (float10)(int)DAT_005b23b4) * (float10)6.2831855);
      *(float *)((int)DAT_0073b578 + param_1 * 4 + -4) = (float)fVar5;
    } while ((int)param_1 < (int)DAT_005b23b4);
  }
  _DAT_0073b5c0 = 1;
  puVar2 = (undefined4 *)FUN_004bc460(auStack_40);
  puVar4 = &DAT_0073b538;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)FUN_004bc4b0(auStack_40);
  puVar4 = &DAT_0073b580;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


