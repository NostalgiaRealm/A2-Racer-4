
/* ==== FUN_004416f0 @ 004416f0 ==== 
 * signature: undefined __register FUN_004416f0(int * param_1)
 * body: 004416f0-00441736
 */

void FUN_004416f0(int *param_1)

{
  HANDLE pvVar1;
  
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)((int)param_1 + 0x35) != '\0')) {
    pvVar1 = FUN_0043c82c((POINT *)(param_1 + 0x12));
    if (pvVar1 == (HANDLE)0x0) {
      TMainMenu_set_BiDiMode(param_1,*(char *)(*(int *)PTR_DAT_004ab8ac + 0x28));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
    else {
      TMainMenu_set_BiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


