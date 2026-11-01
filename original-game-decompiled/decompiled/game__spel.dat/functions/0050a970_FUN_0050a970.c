
/* ==== FUN_0050a970 @ 0050a970 ==== 
 * signature: undefined __fastcall FUN_0050a970(int param_1)
 * body: 0050a970-0050a9bc
 */

void __fastcall FUN_0050a970(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x10);
  if (pvVar1 != (LPVOID)(param_1 + 0x14)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  *(undefined2 *)(param_1 + 0xe) = 0;
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


