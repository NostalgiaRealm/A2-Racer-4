
/* ==== FUN_0045de10 @ 0045de10 ==== 
 * signature: undefined __stdcall FUN_0045de10(void)
 * body: 0045de10-0045de50;0045deb3-0045dec3
 */

void FUN_0045de10(void)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a9a9;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; DAT_00709980 != (undefined4 *)0x0; DAT_00709980 = FUN_0045e780(DAT_00709980)) {
  }
  ExceptionList = local_10;
  return;
}


