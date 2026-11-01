
/* ==== FUN_004dc66d @ 004dc66d ==== 
 * signature: undefined4 * __cdecl FUN_004dc66d(void * param_1)
 * body: 004dc66d-004dc6b1
 */

undefined4 * __cdecl FUN_004dc66d(void *param_1)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  undefined4 uStack0000000c;
  void *pvStack00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  
  pvStack00000014 = operator_new(0x44);
  uStack0000000c = 4;
  if (pvStack00000014 != (void *)0x0) {
    puVar1 = FUN_004de9e0(pvStack00000014,unaff_ESI,in_stack_00000018,in_stack_0000001c,
                          in_stack_00000020);
    ExceptionList = param_1;
    return puVar1;
  }
  ExceptionList = param_1;
  return (undefined4 *)0x0;
}


