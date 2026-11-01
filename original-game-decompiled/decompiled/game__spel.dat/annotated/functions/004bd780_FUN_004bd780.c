
/* ==== FUN_004bd780 @ 004bd780 ==== 
 * signature: undefined __fastcall FUN_004bd780(int param_1)
 * body: 004bd780-004bd7fc
 */

void __fastcall FUN_004bd780(int param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_0054b339(*(LPVOID *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 2) {
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_0054b339(*(LPVOID *)(param_1 + 0x80));
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_0054b339(*(LPVOID *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


