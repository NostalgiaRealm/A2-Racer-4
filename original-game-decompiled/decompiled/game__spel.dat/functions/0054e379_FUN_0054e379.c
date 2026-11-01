
/* ==== FUN_0054e379 @ 0054e379 ==== 
 * signature: undefined __fastcall FUN_0054e379(undefined4 * param_1)
 * body: 0054e379-0054e39a
 */

void __fastcall FUN_0054e379(undefined4 *param_1)

{
  uint uVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    uVar1 = FUN_0054e39b((int *)*param_1);
    if (uVar1 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


