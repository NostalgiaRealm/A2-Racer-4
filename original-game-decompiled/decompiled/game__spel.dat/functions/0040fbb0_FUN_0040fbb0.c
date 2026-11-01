
/* ==== FUN_0040fbb0 @ 0040fbb0 ==== 
 * signature: undefined __fastcall FUN_0040fbb0(int param_1)
 * body: 0040fbb0-0040fc78
 */

/* WARNING: Removing unreachable block (ram,0x0040fbcc) */
/* WARNING: Removing unreachable block (ram,0x0040fc24) */
/* WARNING: Removing unreachable block (ram,0x0040fc2f) */
/* WARNING: Removing unreachable block (ram,0x0040fc55) */

void __fastcall FUN_0040fbb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x54) {
    FUN_004013b0(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


