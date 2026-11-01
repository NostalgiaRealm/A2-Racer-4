
/* ==== FUN_004d9ec0 @ 004d9ec0 ==== 
 * signature: int __fastcall FUN_004d9ec0(int param_1)
 * body: 004d9ec0-004d9ed2
 */

int __fastcall FUN_004d9ec0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}


