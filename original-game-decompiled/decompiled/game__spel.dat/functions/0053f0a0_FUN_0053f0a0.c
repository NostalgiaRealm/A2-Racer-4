
/* ==== FUN_0053f0a0 @ 0053f0a0 ==== 
 * signature: undefined __fastcall FUN_0053f0a0(int param_1)
 * body: 0053f0a0-0053f0ba
 */

void __fastcall FUN_0053f0a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(ushort *)(param_1 + 0x36) - 1;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4 + iVar1 * 4) + 0x28) = 0;
  }
  return;
}


