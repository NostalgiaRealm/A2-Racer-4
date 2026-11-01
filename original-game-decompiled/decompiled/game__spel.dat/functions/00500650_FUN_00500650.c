
/* ==== FUN_00500650 @ 00500650 ==== 
 * signature: undefined __fastcall FUN_00500650(int param_1)
 * body: 00500650-0050066d
 */

void __fastcall FUN_00500650(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xe);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_004f47b0(*(int *)(*(int *)(param_1 + 0x10) + uVar1 * 4));
  }
  return;
}


