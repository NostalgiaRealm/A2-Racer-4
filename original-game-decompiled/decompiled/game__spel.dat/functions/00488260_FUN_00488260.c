
/* ==== FUN_00488260 @ 00488260 ==== 
 * signature: undefined __fastcall FUN_00488260(int param_1)
 * body: 00488260-0048829d
 */

void __fastcall FUN_00488260(int param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056d4d4;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00488420(param_1);
  ExceptionList = local_10;
  return;
}


