
/* ==== FUN_0046fdb0 @ 0046fdb0 ==== 
 * signature: undefined __stdcall FUN_0046fdb0(void)
 * body: 0046fdb0-0046fdf4
 */

void FUN_0046fdb0(void)

{
  int iVar1;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056b093;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_004ea0c0();
  FUN_004ea7d0(iVar1);
  ExceptionList = local_10;
  return;
}


