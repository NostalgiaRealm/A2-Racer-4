
/* ==== FUN_00520fc0 @ 00520fc0 ==== 
 * signature: undefined __fastcall FUN_00520fc0(int param_1)
 * body: 00520fc0-00520ff7
 */

void __fastcall FUN_00520fc0(int param_1)

{
  FUN_005214f0(param_1);
  if (*(LPVOID *)(param_1 + 0x40) != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x38) != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


