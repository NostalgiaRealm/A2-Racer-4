
/* ==== FUN_004e75b0 @ 004e75b0 ==== 
 * signature: undefined __cdecl FUN_004e75b0(void * param_1, undefined1 * param_2)
 * body: 004e75b0-004e75f2
 */

void __cdecl FUN_004e75b0(void *param_1,undefined1 *param_2)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571dc1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004e6df0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


