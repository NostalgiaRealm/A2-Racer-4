
/* ==== FUN_0043ca44 @ 0043ca44 ==== 
 * signature: HANDLE __register FUN_0043ca44(int param_1)
 * body: 0043ca44-0043ca76
 */

HANDLE FUN_0043ca44(int param_1)

{
  HANDLE pvVar1;
  HWND pHVar2;
  
  pvVar1 = (HANDLE)0x0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    pHVar2 = (HWND)SendMessageA(*(HWND *)(param_1 + 0x23c),0x229,0,0);
    pvVar1 = FUN_00421a0c(pHVar2);
  }
  return pvVar1;
}


