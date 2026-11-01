
/* ==== FUN_0042b94c @ 0042b94c ==== 
 * signature: HANDLE __register FUN_0042b94c(HWND param_1)
 * body: 0042b94c-0042b964
 */

HANDLE FUN_0042b94c(HWND param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = (HANDLE)0x0;
  if (param_1 != (HWND)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_004ac75a);
  }
  return pvVar1;
}


