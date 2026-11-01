
/* ==== FUN_0042b968 @ 0042b968 ==== 
 * signature: LRESULT __register FUN_0042b968(UINT param_1, WPARAM param_2, LPARAM param_3)
 * body: 0042b968-0042b98e
 */

LRESULT FUN_0042b968(UINT param_1,WPARAM param_2,LPARAM param_3)

{
  LRESULT LVar1;
  
  if (*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24),param_1,param_2,param_3);
    return LVar1;
  }
  return 0;
}


