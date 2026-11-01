
/* ==== FUN_00511d20 @ 00511d20 ==== 
 * signature: undefined4 * __cdecl FUN_00511d20(int param_1)
 * body: 00511d20-00511dbd
 */

undefined4 * __cdecl FUN_00511d20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_ac [40];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00511cc0(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_00511de0(local_ac);
    local_4 = 0;
    FUN_00511f80(local_ac,(int)piVar1);
    puVar2 = FUN_00512000(local_ac,(int *)0x0);
    local_4 = 0xffffffff;
    FUN_00511e90((int)local_ac);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


