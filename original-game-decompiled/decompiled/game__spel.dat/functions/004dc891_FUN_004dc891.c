
/* ==== FUN_004dc891 @ 004dc891 ==== 
 * signature: undefined4 * __cdecl FUN_004dc891(void * param_1)
 * body: 004dc891-004dc8d1
 */

undefined4 * __cdecl FUN_004dc891(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack0000000c;
  undefined4 *puStack00000014;
  void *in_stack_00000018;
  
  puStack00000014 = operator_new(0x50);
  uStack0000000c = 2;
  if (puStack00000014 != (undefined4 *)0x0) {
    puVar1 = FUN_004e14d0(puStack00000014);
    ExceptionList = in_stack_00000018;
    return puVar1;
  }
  ExceptionList = param_1;
  return (undefined4 *)0x0;
}


