
/* ==== FUN_0054c595 @ 0054c595 ==== 
 * signature: undefined4 __fastcall FUN_0054c595(int param_1)
 * body: 0054c595-0054c5a5
 */

undefined4 __fastcall FUN_0054c595(int param_1)

{
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
  **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -2;
  return **(undefined4 **)(param_1 + 0x1c);
}


