
/* ==== FUN_00410d20 @ 00410d20 ==== 
 * signature: undefined __fastcall FUN_00410d20(int param_1)
 * body: 00410d20-00410d7a
 */

/* WARNING: Removing unreachable block (ram,0x00410d33) */

void __fastcall FUN_00410d20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x18) {
    FUN_0041e3a0(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


