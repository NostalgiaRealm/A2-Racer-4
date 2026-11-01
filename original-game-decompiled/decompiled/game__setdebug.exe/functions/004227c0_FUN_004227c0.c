
/* ==== FUN_004227c0 @ 004227c0 ==== 
 * signature: undefined4 __register FUN_004227c0(HWND param_1)
 * body: 004227c0-004227e0
 */

undefined4 FUN_004227c0(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 != (HWND)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_00447748);
    if (pvVar1 != (HANDLE)0x0) {
      return CONCAT31((int3)((uint)pvVar1 >> 8),1);
    }
  }
  return 0;
}


