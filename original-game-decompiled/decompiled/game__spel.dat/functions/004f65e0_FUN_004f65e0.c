
/* ==== FUN_004f65e0 @ 004f65e0 ==== 
 * signature: undefined __fastcall FUN_004f65e0(int param_1)
 * body: 004f65e0-004f660e
 */

void __fastcall FUN_004f65e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 8);
  if (pvVar1 != (LPVOID)(param_1 + 0xc)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}


