
/* ==== FUN_00504580 @ 00504580 ==== 
 * signature: undefined __fastcall FUN_00504580(int param_1)
 * body: 00504580-005045ee
 */

void __fastcall FUN_00504580(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x1c);
  if (pvVar1 != (LPVOID)(param_1 + 0x20)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x14);
  if (pvVar1 != (LPVOID)(param_1 + 0x18)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0xc);
  if (pvVar1 != (LPVOID)(param_1 + 0x10)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined2 *)(param_1 + 8) = 0;
  }
  *(undefined2 *)(param_1 + 10) = 0;
  return;
}


