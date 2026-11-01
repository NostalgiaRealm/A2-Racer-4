
/* ==== FUN_00421c94 @ 00421c94 ==== 
 * signature: HANDLE __register FUN_00421c94(void)
 * body: 00421c94-00421cbb
 */

HANDLE FUN_00421c94(void)

{
  HWND pHVar1;
  HANDLE pvVar2;
  
  pHVar1 = GetCapture();
  pvVar2 = FUN_00421a0c(pHVar1);
  if (((pvVar2 != (HANDLE)0x0) && (DAT_004466e4 != (HANDLE)0x0)) &&
     (pvVar2 == *(HANDLE *)((int)DAT_004466e4 + 0x24))) {
    pvVar2 = DAT_004466e4;
  }
  return pvVar2;
}


