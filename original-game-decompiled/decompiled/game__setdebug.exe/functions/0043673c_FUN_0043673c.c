
/* ==== FUN_0043673c @ 0043673c ==== 
 * signature: undefined __register FUN_0043673c(int * param_1)
 * body: 0043673c-00436760
 */

void FUN_0043673c(int *param_1)

{
  HANDLE pvVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    pvVar1 = FUN_00421a0c((HWND)param_1[0xb]);
    if (pvVar1 != (HANDLE)0x0) {
      TMainMenu_set_BiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


