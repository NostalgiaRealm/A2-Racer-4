
/* ==== TDaviButton.dyn_ffec @ 00476354 ==== 
 * signature: undefined TDaviButton.dyn_ffec(void)
 * body: 00476354-00476396
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviButton_dyn_ffec(int param_1)

{
  if (*(char *)(param_1 + 0x208) == '\x03') {
    for (; (param_1 != 0 && (*(int *)(param_1 + 0x150) == 0)); param_1 = *(int *)(param_1 + 0x24)) {
    }
    if (param_1 == 0) {
      TButton_dyn_ffec();
      return;
    }
    FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,*(ULONG_PTR *)(param_1 + 0x150));
  }
  else {
    TButton_dyn_ffec();
  }
  return;
}


