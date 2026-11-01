
/* ==== FUN_004249f0 @ 004249f0 ==== 
 * signature: undefined __fastcall FUN_004249f0(int param_1)
 * body: 004249f0-00424ace
 */

/* WARNING: Removing unreachable block (ram,0x00424a10) */
/* WARNING: Removing unreachable block (ram,0x00424a16) */
/* WARNING: Removing unreachable block (ram,0x00424aa5) */

void __fastcall FUN_004249f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x60) {
    FUN_00424880(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


