
/* ==== FUN_004ade90 @ 004ade90 ==== 
 * signature: undefined __fastcall FUN_004ade90(int param_1)
 * body: 004ade90-004adee3
 */

void __fastcall FUN_004ade90(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(*(LPVOID *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


