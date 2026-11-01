
/* ==== FUN_00436510 @ 00436510 ==== 
 * signature: undefined __cdecl FUN_00436510(int param_1, int param_2)
 * body: 00436510-004365f3;004365f7-00436848
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004365f4-004365f6
 */

void __cdecl FUN_00436510(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  iVar6 = param_1 * 0xf0;
  puVar7 = (undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar6) * 0xa9 + 0x10);
  puVar8 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar8 = local_80;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pfVar2 = (float *)FUN_004b4070(&local_a4,(int)local_80);
  local_98 = *pfVar2;
  local_94 = pfVar2[1];
  local_90 = pfVar2[2];
  pfVar2 = (float *)FUN_004b4070(&local_a4,(int)local_40);
  local_b0 = *pfVar2;
  local_ac = pfVar2[1];
  local_a8 = pfVar2[2];
  if (*(int *)(DAT_00715e50 + 0xac + iVar6) < 4) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____object___d__doesn_t_hav_00599524);
  }
  iVar5 = 0;
  do {
    if (iVar5 == 2) {
      local_b0 = -local_b0;
      local_ac = -local_ac;
      local_a8 = -local_a8;
      fStack_8c = local_b0;
      fStack_88 = local_ac;
      fStack_84 = local_a8;
    }
    fVar1 = local_98 * local_b0 + local_90 * local_a8 + local_94 * local_ac;
    if (0.0 < fVar1) {
      fVar1 = 0.0;
    }
    fStack_b4 = (ABS(fVar1) - 0.6) * 3.5;
    if (fStack_b4 < 0.0) {
      fStack_b4 = 0.0;
    }
    iVar3 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),iVar5);
    fStack_9c = fStack_b4;
    *(float *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x7c) = fStack_b4 * 1500.0;
    fStack_a0 = fStack_b4;
    local_a4 = fStack_b4;
    iVar3 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),iVar5);
    iVar3 = DAT_0073b0d0 + iVar3 * 0xa9;
    *(float *)(iVar3 + 0x80) = local_a4;
    *(float *)(iVar3 + 0x84) = fStack_a0;
    *(float *)(iVar3 + 0x88) = fStack_9c;
    iVar3 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),iVar5);
    FUN_004b5770(DAT_0073b0d0 + iVar3 * 0xa9);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  if (param_2 != 0) {
    uVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),2);
    FUN_004a74a0(&DAT_00715b28,uVar4);
    uVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),3);
    FUN_004a74a0(&DAT_00715b28,uVar4);
  }
  if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
    iVar5 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),0);
    *(undefined1 *)(DAT_0073b0d0 + iVar5 * 0xa9 + 0x90) = 0;
    iVar5 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),1);
    *(undefined1 *)(DAT_0073b0d0 + iVar5 * 0xa9 + 0x90) = 0;
    iVar5 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),2);
    *(undefined1 *)(DAT_0073b0d0 + iVar5 * 0xa9 + 0x90) = 0;
    iVar5 = FUN_004a8600((void *)(DAT_00715e50 + iVar6),3);
    *(undefined1 *)(DAT_0073b0d0 + iVar5 * 0xa9 + 0x90) = 0;
  }
  return;
}


