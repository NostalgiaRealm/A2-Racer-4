
/* ==== FUN_004ec7a0 @ 004ec7a0 ==== 
 * signature: undefined __fastcall FUN_004ec7a0(int param_1)
 * body: 004ec7a0-004ec7d7
 */

void __fastcall FUN_004ec7a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x3c) {
    FUN_004eaa50(iVar2);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


