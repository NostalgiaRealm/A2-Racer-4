
/* ==== FUN_00490300 @ 00490300 ==== 
 * signature: undefined __fastcall FUN_00490300(int param_1)
 * body: 00490300-0049037b
 */

/* WARNING: Removing unreachable block (ram,0x00490318) */
/* WARNING: Removing unreachable block (ram,0x0049033a) */
/* WARNING: Removing unreachable block (ram,0x00490345) */
/* WARNING: Removing unreachable block (ram,0x00490355) */

void __fastcall FUN_00490300(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x114) {
    FUN_004900b0(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


