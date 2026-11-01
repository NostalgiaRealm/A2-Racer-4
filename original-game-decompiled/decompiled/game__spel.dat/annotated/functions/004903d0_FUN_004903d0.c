
/* ==== FUN_004903d0 @ 004903d0 ==== 
 * signature: undefined __fastcall FUN_004903d0(int param_1)
 * body: 004903d0-004904df
 */

/* WARNING: Removing unreachable block (ram,0x004903e7) */

void __fastcall FUN_004903d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = *(undefined4 **)(iVar1 + 8);
  puVar2 = *(undefined4 **)(iVar1 + 4);
  for (puVar4 = puVar2; puVar4 != puVar3; puVar4 = puVar4 + 0x1e) {
    (**(code **)*puVar4)(0);
  }
  *(undefined4 **)(iVar1 + 8) = puVar2;
  return;
}


