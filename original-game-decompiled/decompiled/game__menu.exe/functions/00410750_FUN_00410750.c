
/* ==== FUN_00410750 @ 00410750 ==== 
 * signature: undefined4 __register FUN_00410750(int param_1)
 * body: 00410750-00410760
 */

undefined4 FUN_00410750(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return *(undefined4 *)(param_1 + 4);
}


