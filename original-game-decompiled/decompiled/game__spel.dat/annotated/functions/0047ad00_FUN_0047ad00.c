
/* ==== FUN_0047ad00 @ 0047ad00 ==== 
 * signature: undefined __fastcall FUN_0047ad00(int param_1)
 * body: 0047ad00-0047ad2d
 */

void __fastcall FUN_0047ad00(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(LPVOID *)(param_1 + 0xc) != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0xc));
    FUN_0054b339(*(LPVOID *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


