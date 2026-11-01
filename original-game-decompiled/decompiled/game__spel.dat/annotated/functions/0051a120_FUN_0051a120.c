
/* ==== FUN_0051a120 @ 0051a120 ==== 
 * signature: int * __stdcall FUN_0051a120(void)
 * body: 0051a120-0051a215
 */

int * FUN_0051a120(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  
  iVar3 = FUN_00514af0(DAT_0074c6ec);
  iVar3 = iVar3 + DAT_0074c044;
  piVar4 = (int *)FUN_00514b50(iVar3);
  FUN_00514dd0(piVar4,0,iVar3);
  DAT_0074c6d4 = DAT_0074c6d4 + 1;
  for (iVar3 = DAT_0074c600; (iVar3 != 0 && (*(int *)(iVar3 + 0x30) != 0));
      iVar3 = *(int *)(iVar3 + 0x30)) {
    iVar1 = *(int *)(iVar3 + 0x34);
    if (iVar1 != 0) {
      piVar5 = (int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        piVar5 = piVar5 + 1;
        if (*(int *)(iVar1 + 0x10) != DAT_0074c6d4) {
          *(int *)(iVar1 + 0x10) = DAT_0074c6d4;
          FUN_0051a0a0(piVar4,*(uint *)(iVar1 + 8),iVar3);
        }
        iVar1 = *piVar5;
      }
    }
    iVar1 = *(int *)(iVar3 + 0x44);
    if (iVar1 != 0) {
      puVar6 = (uint *)(iVar1 + 4);
      uVar2 = *(uint *)(iVar1 + 4);
      while (uVar2 != 0) {
        puVar6 = puVar6 + 1;
        FUN_0051a0a0(piVar4,uVar2,iVar3);
        uVar2 = *puVar6;
      }
    }
    iVar1 = *(int *)(iVar3 + 0x40);
    if (iVar1 != 0) {
      puVar6 = (uint *)(iVar1 + 4);
      uVar2 = *(uint *)(iVar1 + 4);
      while (uVar2 != 0) {
        puVar6 = puVar6 + 1;
        FUN_0051a0a0(piVar4,uVar2,iVar3);
        uVar2 = *puVar6;
      }
    }
  }
  return piVar4;
}


