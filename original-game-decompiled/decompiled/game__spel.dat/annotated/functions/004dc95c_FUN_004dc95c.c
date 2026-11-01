
/* ==== FUN_004dc95c @ 004dc95c ==== 
 * signature: undefined4 * __cdecl FUN_004dc95c(void * param_1)
 * body: 004dc95c-004dc9a0
 */

undefined4 * __cdecl FUN_004dc95c(void *param_1)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  undefined4 uStack0000000c;
  void *pvStack00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  
  pvStack00000014 = operator_new(0x48);
  uStack0000000c = 5;
  if (pvStack00000014 != (void *)0x0) {
    puVar1 = FUN_004e0470(pvStack00000014,unaff_ESI,in_stack_00000018,in_stack_0000001c,
                          in_stack_00000020);
    ExceptionList = param_1;
    return puVar1;
  }
  ExceptionList = param_1;
  return (undefined4 *)0x0;
}


