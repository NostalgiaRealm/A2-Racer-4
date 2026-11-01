
/* ==== FUN_004e0640 @ 004e0640 ==== 
 * signature: int __fastcall FUN_004e0640(int param_1)
 * body: 004e0640-004e0652
 */

int __fastcall FUN_004e0640(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 4;
}


