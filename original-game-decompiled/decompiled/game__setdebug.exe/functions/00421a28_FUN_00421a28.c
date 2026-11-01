
/* ==== FUN_00421a28 @ 00421a28 ==== 
 * signature: LRESULT __register FUN_00421a28(UINT param_1, WPARAM param_2, LPARAM param_3)
 * body: 00421a28-00421a4e
 */

LRESULT FUN_00421a28(UINT param_1,WPARAM param_2,LPARAM param_3)

{
  LRESULT LVar1;
  
  if (*(HWND *)(*(int *)PTR_DAT_00446c80 + 0x24) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(*(int *)PTR_DAT_00446c80 + 0x24),param_1,param_2,param_3);
    return LVar1;
  }
  return 0;
}


