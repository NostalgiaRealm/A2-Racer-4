
/* ==== FUN_004f5a10 @ 004f5a10 ==== 
 * signature: int * __stdcall FUN_004f5a10(int param_1)
 * body: 004f5a10-004f5a85
 */

int * FUN_004f5a10(int param_1)

{
  void *this;
  int *piVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572f2b;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 4) != 0) || (*(int *)(param_1 + 0xf4) != 0)) {
    ExceptionList = &local_c;
    this = operator_new(400);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_00506620(this,param_1);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


