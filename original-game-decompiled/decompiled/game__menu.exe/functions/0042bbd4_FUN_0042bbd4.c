
/* ==== FUN_0042bbd4 @ 0042bbd4 ==== 
 * signature: HANDLE __register FUN_0042bbd4(void)
 * body: 0042bbd4-0042bbfb
 */

HANDLE FUN_0042bbd4(void)

{
  HWND pHVar1;
  HANDLE pvVar2;
  
  pHVar1 = GetCapture();
  pvVar2 = FUN_0042b94c(pHVar1);
  if (((pvVar2 != (HANDLE)0x0) && (DAT_004aa7b8 != (HANDLE)0x0)) &&
     (pvVar2 == *(HANDLE *)((int)DAT_004aa7b8 + 0x24))) {
    pvVar2 = DAT_004aa7b8;
  }
  return pvVar2;
}


