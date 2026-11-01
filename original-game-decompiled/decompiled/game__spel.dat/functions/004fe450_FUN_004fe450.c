
/* ==== FUN_004fe450 @ 004fe450 ==== 
 * signature: undefined __cdecl FUN_004fe450(int param_1)
 * body: 004fe450-004fe463
 */

void __cdecl FUN_004fe450(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}


