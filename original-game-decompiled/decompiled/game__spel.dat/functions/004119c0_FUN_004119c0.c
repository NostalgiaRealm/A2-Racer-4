
/* ==== FUN_004119c0 @ 004119c0 ==== 
 * signature: int __fastcall FUN_004119c0(int param_1)
 * body: 004119c0-004119df
 */

int __fastcall FUN_004119c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


