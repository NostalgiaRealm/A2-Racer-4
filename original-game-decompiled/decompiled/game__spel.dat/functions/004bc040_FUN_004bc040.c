
/* ==== FUN_004bc040 @ 004bc040 ==== 
 * signature: undefined __fastcall FUN_004bc040(int param_1)
 * body: 004bc040-004bc063
 */

void __fastcall FUN_004bc040(int param_1)

{
  if (*(int *)(param_1 + 0x274) == 1) {
    (**(code **)(**(int **)(param_1 + 0x25c) + 8))(*(int **)(param_1 + 0x25c));
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  return;
}


