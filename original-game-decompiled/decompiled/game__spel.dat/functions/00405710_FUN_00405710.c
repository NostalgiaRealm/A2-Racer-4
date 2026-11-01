
/* ==== FUN_00405710 @ 00405710 ==== 
 * signature: undefined4 __cdecl FUN_00405710(int param_1, int param_2, undefined4 * param_3)
 * body: 00405710-00405740;00405744-00405843
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00405741-00405743
 */

undefined4 __cdecl FUN_00405710(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  LPCSTR pCVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  LPCSTR pCVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569528;
  pvStack_c = ExceptionList;
  if (param_3 == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____a_Buffer_is_NULL_0058fc28);
  }
  ExceptionList = &pvStack_c;
  puVar3 = FUN_004877e0(local_1c,param_1,param_2);
  uVar6 = 0xffffffff;
  pcVar11 = &DAT_005c9978;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(puVar3 + 8);
  uVar7 = ~uVar6 - 1;
  uVar6 = uVar2;
  if (uVar7 <= uVar2) {
    uVar6 = uVar7;
  }
  bVar13 = false;
  iVar9 = 0;
  bVar14 = true;
  pbVar10 = *(byte **)(puVar3 + 4);
  pbVar12 = &DAT_005c9978;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar13 = *pbVar10 < *pbVar12;
    bVar14 = *pbVar10 == *pbVar12;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar14);
  if (!bVar14) {
    iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
  }
  bVar13 = false;
  if (iVar9 == 0) {
    if (uVar2 < uVar7) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(uVar2 != uVar7);
    }
    bVar13 = uVar6 == 0;
  }
  uStack_4 = 0xffffffff;
  uVar6 = 0;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      uVar6 = FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      uVar6 = CONCAT31((int3)((uint)iStack_18 >> 8),cVar1 + -1);
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (!bVar13) {
    pCVar4 = *(LPCSTR *)(param_2 + 4);
    if (pCVar4 == (LPCSTR)0x0) {
      pCVar4 = "";
    }
    pCVar8 = *(LPCSTR *)(param_1 + 4);
    if (pCVar8 == (LPCSTR)0x0) {
      pCVar8 = "";
    }
    uVar5 = FUN_004c3cd0(pCVar8,pCVar4);
    *param_3 = uVar5;
    ExceptionList = pvStack_c;
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  ExceptionList = pvStack_c;
  return uVar6 & 0xffffff00;
}


