
/* ==== FUN_004df8d0 @ 004df8d0 ==== 
 * signature: int __fastcall FUN_004df8d0(int param_1)
 * body: 004df8d0-004df8e2
 */

int __fastcall FUN_004df8d0(int param_1)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 4;
}


