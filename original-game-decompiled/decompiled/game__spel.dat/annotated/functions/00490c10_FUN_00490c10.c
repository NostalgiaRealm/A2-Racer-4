
/* ==== FUN_00490c10 @ 00490c10 ==== 
 * signature: int __fastcall FUN_00490c10(int param_1)
 * body: 00490c10-00490c32
 */

int __fastcall FUN_00490c10(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x78;
}


