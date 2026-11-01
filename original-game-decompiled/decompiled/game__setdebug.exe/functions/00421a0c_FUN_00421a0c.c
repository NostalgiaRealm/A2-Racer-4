
/* ==== FUN_00421a0c @ 00421a0c ==== 
 * signature: HANDLE __register FUN_00421a0c(HWND param_1)
 * body: 00421a0c-00421a24
 */

HANDLE FUN_00421a0c(HWND param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = (HANDLE)0x0;
  if (param_1 != (HWND)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0044774a);
  }
  return pvVar1;
}


