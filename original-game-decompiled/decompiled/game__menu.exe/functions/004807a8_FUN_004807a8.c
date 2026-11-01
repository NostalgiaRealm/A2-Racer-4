
/* ==== FUN_004807a8 @ 004807a8 ==== 
 * signature: undefined4 __register FUN_004807a8(int param_1)
 * body: 004807a8-004807ca
 */

undefined4 FUN_004807a8(int param_1)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    return *(undefined4 *)(*(int *)(*(int *)(DAT_004ad2bc + 0xcc) + 0x30) + 0x14);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x18) + 0x14);
}


