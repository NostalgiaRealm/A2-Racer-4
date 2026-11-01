
/* ==== FUN_004f4c90 @ 004f4c90 ==== 
 * signature: undefined __fastcall FUN_004f4c90(int param_1)
 * body: 004f4c90-004f4cbe
 */

void __fastcall FUN_004f4c90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x50);
  if (pvVar1 != (LPVOID)(param_1 + 0x54)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    *(undefined2 *)(param_1 + 0x4c) = 0;
  }
  *(undefined2 *)(param_1 + 0x4e) = 0;
  return;
}


