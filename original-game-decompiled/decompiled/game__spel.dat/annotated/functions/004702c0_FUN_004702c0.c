
/* ==== FUN_004702c0 @ 004702c0 ==== 
 * signature: undefined __fastcall FUN_004702c0(int param_1)
 * body: 004702c0-00470317
 */

void __fastcall FUN_004702c0(int param_1)

{
  void *pvVar1;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056b111;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = (void *)FUN_004ea0c0();
  FUN_004eb740(pvVar1,*(int *)(param_1 + 8),(float *)0x0);
  pvVar1 = (void *)FUN_004ea0c0();
  FUN_004eb740(pvVar1,*(int *)(param_1 + 0xc),(float *)0x0);
  FUN_00470375();
  return;
}


