
/* ==== FUN_004ec5c0 @ 004ec5c0 ==== 
 * signature: undefined __fastcall FUN_004ec5c0(int param_1)
 * body: 004ec5c0-004ec603
 */

/* WARNING: Removing unreachable block (ram,0x004ec5d3) */

void __fastcall FUN_004ec5c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x3c) {
    FUN_004eaa50(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


