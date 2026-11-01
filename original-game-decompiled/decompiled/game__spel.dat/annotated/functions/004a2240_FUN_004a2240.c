
/* ==== FUN_004a2240 @ 004a2240 ==== 
 * signature: undefined __stdcall FUN_004a2240(int param_1)
 * body: 004a2240-004a226e
 */

void FUN_004a2240(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x40) + 0xb0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x25) = 1;
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x44) + 0xb0);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x25) = 1;
    }
  }
  return;
}


