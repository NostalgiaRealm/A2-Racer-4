
/* ==== FUN_0052dd40 @ 0052dd40 ==== 
 * signature: undefined __cdecl FUN_0052dd40(int param_1)
 * body: 0052dd40-0052df0f
 */

void __cdecl FUN_0052dd40(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *local_4;
  
  local_4 = (int *)FUN_00514b50(DAT_0074c634);
  iVar5 = param_1;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_markkeep__only_keep__d_larges_005c3100);
  }
  for (; (iVar5 != 0 && (*(int *)(iVar5 + 0x30) != 0)); iVar5 = *(int *)(iVar5 + 0x30)) {
    if (((*(uint *)(iVar5 + 0x50) & 0x400) == 0) && ((*(uint *)(iVar5 + 0x50) & 0x40000) != 0)) {
      FUN_00514020((int *)&local_4,iVar5);
    }
  }
  puVar3 = (undefined4 *)FUN_00514af0(local_4);
  if (DAT_0074be6c != 0) {
    FUN_00558d5b(local_4 + 1,puVar3,4,FUN_0052df10);
    iVar5 = (int)puVar3 - DAT_0074be6c;
    if ((0 < iVar5) && (local_4 != (int *)0x0)) {
      piVar4 = local_4 + 1;
      iVar2 = local_4[1];
      while (iVar2 != 0) {
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
        *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xfffbffff;
        if (iVar5 == 0) break;
        iVar2 = *piVar4;
      }
    }
  }
  if (DAT_0074be78 != 0) {
    FUN_00558d5b(local_4 + 1,puVar3,4,FUN_0052df60);
    iVar5 = (int)puVar3 - DAT_0074be78;
    if ((0 < iVar5) && (local_4 != (int *)0x0)) {
      piVar4 = local_4 + 1;
      iVar2 = local_4[1];
      while (iVar2 != 0) {
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
        *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xfffbffff;
        if (iVar5 == 0) break;
        iVar2 = *piVar4;
      }
    }
  }
  if (((double)CONCAT44(DAT_0074be84,DAT_0074be80) < 8.988465674311579e+307) &&
     (local_4 != (int *)0x0)) {
    piVar4 = local_4 + 1;
    iVar5 = local_4[1];
    while (iVar5 != 0) {
      piVar4 = piVar4 + 1;
      if (((*(uint *)(iVar5 + 0x50) & 0x80000) == 0) ||
         (*(double *)(iVar5 + 0x20) < (double)CONCAT44(DAT_0074be84,DAT_0074be80))) {
        *(uint *)(iVar5 + 0x50) = *(uint *)(iVar5 + 0x50) & 0xfffbffff;
      }
      iVar5 = *piVar4;
    }
  }
  FUN_00514ba0((int *)&local_4);
  DAT_0074c640 = 0;
  while ((param_1 != 0 && (iVar5 = *(int *)(param_1 + 0x30), iVar5 != 0))) {
    puVar1 = (uint *)(param_1 + 0x50);
    param_1 = iVar5;
    if ((*puVar1 & 0x40000) != 0) {
      DAT_0074c640 = DAT_0074c640 + 1;
    }
  }
  return;
}


