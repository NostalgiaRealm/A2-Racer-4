
/* ==== FUN_0055da5c @ 0055da5c ==== 
 * signature: undefined __stdcall FUN_0055da5c(void)
 * body: 0055da5c-0055da98
 */

void FUN_0055da5c(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579828;
  pcStack_10 = FUN_0055e3b4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0074dd10 != (code *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*DAT_0074dd10)();
  }
  local_8 = 0xffffffff;
  FUN_005655bc();
  return;
}


