
/* ==== FUN_00440e1c @ 00440e1c ==== 
 * signature: undefined __register FUN_00440e1c(int * param_1)
 * body: 00440e1c-00440e40
 */

void FUN_00440e1c(int *param_1)

{
  HANDLE pvVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    pvVar1 = FUN_0042b94c((HWND)param_1[0xb]);
    if (pvVar1 != (HANDLE)0x0) {
      TMainMenu_set_BiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


