
/* ==== FUN_0040fb00 @ 0040fb00 ==== 
 * signature: undefined __fastcall FUN_0040fb00(int param_1)
 * body: 0040fb00-0040fb51
 */

/* WARNING: Removing unreachable block (ram,0x0040fb13) */

void __fastcall FUN_0040fb00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x14) {
    FUN_00401240(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


