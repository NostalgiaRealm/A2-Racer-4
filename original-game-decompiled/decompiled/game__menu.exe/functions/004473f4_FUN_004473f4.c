
/* ==== FUN_004473f4 @ 004473f4 ==== 
 * signature: HANDLE __register FUN_004473f4(int param_1)
 * body: 004473f4-00447426
 */

HANDLE FUN_004473f4(int param_1)

{
  HANDLE pvVar1;
  HWND pHVar2;
  
  pvVar1 = (HANDLE)0x0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    pHVar2 = (HWND)SendMessageA(*(HWND *)(param_1 + 0x23c),0x229,0,0);
    pvVar1 = FUN_0042b94c(pHVar2);
  }
  return pvVar1;
}


