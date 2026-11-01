
/* ==== FUN_0055dab2 @ 0055dab2 ==== 
 * signature: undefined __stdcall FUN_0055dab2(void)
 * body: 0055dab2-0055daee
 */

void FUN_0055dab2(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579840;
  pcStack_10 = FUN_0055e3b4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_005c8654 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_005c8654)();
  }
  local_8 = 0xffffffff;
  FUN_0055da5c();
  return;
}


