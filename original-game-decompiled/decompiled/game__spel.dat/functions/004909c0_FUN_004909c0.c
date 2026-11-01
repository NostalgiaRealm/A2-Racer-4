
/* ==== FUN_004909c0 @ 004909c0 ==== 
 * signature: int __fastcall FUN_004909c0(int param_1)
 * body: 004909c0-004909e0
 */

int __fastcall FUN_004909c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x114;
}


