
/* ==== FUN_00410de0 @ 00410de0 ==== 
 * signature: undefined __fastcall FUN_00410de0(int param_1)
 * body: 00410de0-00410e2f
 */

/* WARNING: Removing unreachable block (ram,0x00410df3) */

void __fastcall FUN_00410de0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 4);
  for (iVar4 = iVar2; iVar4 != iVar3; iVar4 = iVar4 + 0xc) {
    FUN_0041e410();
  }
  *(int *)(iVar1 + 8) = iVar2;
  return;
}


