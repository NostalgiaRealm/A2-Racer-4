
/* ==== FUN_00549c40 @ 00549c40 ==== 
 * signature: undefined __fastcall FUN_00549c40(int param_1)
 * body: 00549c40-00549c6e
 */

void __fastcall FUN_00549c40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x34);
  if (pvVar1 != (LPVOID)(param_1 + 0x38)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined2 *)(param_1 + 0x30) = 0;
  }
  *(undefined2 *)(param_1 + 0x32) = 0;
  return;
}


