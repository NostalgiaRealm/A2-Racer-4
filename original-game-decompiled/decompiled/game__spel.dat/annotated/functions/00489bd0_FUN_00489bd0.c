
/* ==== FUN_00489bd0 @ 00489bd0 ==== 
 * signature: undefined __fastcall FUN_00489bd0(int param_1)
 * body: 00489bd0-00489c08
 */

void __fastcall FUN_00489bd0(int param_1)

{
  if ((*(int *)(param_1 + 0x278) != -1) && (*(int *)(param_1 + 0x278) <= *(int *)(param_1 + 0x260)))
  {
    (**(code **)(**(int **)(param_1 + 0x274) + 0x20))(0);
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  }
  return;
}


