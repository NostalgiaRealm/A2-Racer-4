
/* ==== FUN_0042c700 @ 0042c700 ==== 
 * signature: undefined4 __register FUN_0042c700(HWND param_1)
 * body: 0042c700-0042c720
 */

undefined4 FUN_0042c700(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 != (HWND)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_004ac758);
    if (pvVar1 != (HANDLE)0x0) {
      return CONCAT31((int3)((uint)pvVar1 >> 8),1);
    }
  }
  return 0;
}


