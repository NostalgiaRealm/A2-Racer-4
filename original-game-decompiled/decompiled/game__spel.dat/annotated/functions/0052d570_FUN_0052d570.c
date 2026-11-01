
/* ==== FUN_0052d570 @ 0052d570 ==== 
 * signature: int * __cdecl FUN_0052d570(int param_1)
 * body: 0052d570-0052d602
 */

int * __cdecl FUN_0052d570(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  int *local_4;
  
  local_4 = (int *)FUN_00514b50(DAT_0074c5fc);
  bVar2 = true;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    piVar4 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      if ((*(uint *)(iVar1 + 0x50) & 0x2000) != 0) {
        if (*(int *)(iVar1 + 0x48) == 0) {
          if (!bVar2) goto LAB_0052d5cd;
          bVar2 = false;
        }
        FUN_00514020((int *)&local_4,iVar1);
      }
LAB_0052d5cd:
      iVar1 = *piVar4;
    }
  }
  pcVar6 = FUN_0052d610;
  uVar5 = 4;
  puVar3 = (undefined4 *)FUN_00514af0(local_4);
  FUN_00558d5b(local_4 + 1,puVar3,uVar5,pcVar6);
  return local_4;
}


