
/* ==== FUN_00405850 @ 00405850 ==== 
 * signature: undefined4 __cdecl FUN_00405850(int param_1, int param_2, float * param_3)
 * body: 00405850-00405880;00405884-0040598f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00405881-00405883
 */

undefined4 __cdecl FUN_00405850(int param_1,int param_2,float *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  uint uVar6;
  LPCSTR pCVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056953a;
  pvStack_c = ExceptionList;
  if (param_3 == (float *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____a_Buffer_is_NULL_0058fc6c);
  }
  ExceptionList = &pvStack_c;
  puVar3 = FUN_004877e0(local_1c,param_1,param_2);
  uVar5 = 0xffffffff;
  pcVar10 = &DAT_005c997c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(puVar3 + 8);
  uVar6 = ~uVar5 - 1;
  uVar5 = uVar2;
  if (uVar6 <= uVar2) {
    uVar5 = uVar6;
  }
  bVar12 = false;
  iVar8 = 0;
  bVar13 = true;
  pbVar9 = *(byte **)(puVar3 + 4);
  pbVar11 = &DAT_005c997c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar12 = *pbVar9 < *pbVar11;
    bVar13 = *pbVar9 == *pbVar11;
    pbVar9 = pbVar9 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar13);
  if (!bVar13) {
    iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  }
  bVar12 = false;
  if (iVar8 == 0) {
    if (uVar2 < uVar6) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(uVar2 != uVar6);
    }
    bVar12 = uVar5 == 0;
  }
  uStack_4 = 0xffffffff;
  uVar5 = 0;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      uVar5 = FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      uVar5 = CONCAT31((int3)((uint)iStack_18 >> 8),cVar1 + -1);
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (!bVar12) {
    pCVar4 = *(LPCSTR *)(param_2 + 4);
    if (pCVar4 == (LPCSTR)0x0) {
      pCVar4 = "";
    }
    pCVar7 = *(LPCSTR *)(param_1 + 4);
    if (pCVar7 == (LPCSTR)0x0) {
      pCVar7 = "";
    }
    uVar5 = read_ini_value_setting(pCVar7,pCVar4);
    *param_3 = (float)uVar5;
    ExceptionList = pvStack_c;
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  ExceptionList = pvStack_c;
  return uVar5 & 0xffffff00;
}


