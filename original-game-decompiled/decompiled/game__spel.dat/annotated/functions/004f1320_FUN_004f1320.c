
/* ==== FUN_004f1320 @ 004f1320 ==== 
 * signature: undefined __fastcall FUN_004f1320(int param_1)
 * body: 004f1320-004f138f
 */

/* WARNING: Removing unreachable block (ram,0x004f1333) */

void __fastcall FUN_004f1320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0x28) {
    FUN_004900b0(iVar4);
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


