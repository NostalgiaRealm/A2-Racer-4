
/* ==== FUN_004d2ce0 @ 004d2ce0 ==== 
 * signature: int __fastcall FUN_004d2ce0(int param_1)
 * body: 004d2ce0-004d2d00
 */

int __fastcall FUN_004d2ce0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


