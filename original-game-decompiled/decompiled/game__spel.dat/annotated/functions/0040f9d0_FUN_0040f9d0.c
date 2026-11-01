
/* ==== FUN_0040f9d0 @ 0040f9d0 ==== 
 * signature: undefined __fastcall FUN_0040f9d0(int param_1)
 * body: 0040f9d0-0040fa4e
 */

/* WARNING: Removing unreachable block (ram,0x0040f9e3) */

void __fastcall FUN_0040f9d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x30) {
    FUN_00416ad0(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


