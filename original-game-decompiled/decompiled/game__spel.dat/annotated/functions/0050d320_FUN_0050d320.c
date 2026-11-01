
/* ==== FUN_0050d320 @ 0050d320 ==== 
 * signature: undefined __fastcall FUN_0050d320(int param_1)
 * body: 0050d320-0050d335
 */

void __fastcall FUN_0050d320(int param_1)

{
  if (*(int *)(param_1 + -4) != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + -4);
    FUN_0050d140(param_1 + -0x20);
    return;
  }
  return;
}


