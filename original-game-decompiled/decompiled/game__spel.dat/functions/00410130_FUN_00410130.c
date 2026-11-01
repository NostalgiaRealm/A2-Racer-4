
/* ==== FUN_00410130 @ 00410130 ==== 
 * signature: int __fastcall FUN_00410130(int param_1)
 * body: 00410130-00410150
 */

int __fastcall FUN_00410130(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x54;
}


