
/* ==== FUN_00492480 @ 00492480 ==== 
 * signature: int __fastcall FUN_00492480(int param_1)
 * body: 00492480-00492492
 */

int __fastcall FUN_00492480(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


