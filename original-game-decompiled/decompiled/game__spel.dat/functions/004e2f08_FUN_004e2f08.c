
/* ==== FUN_004e2f08 @ 004e2f08 ==== 
 * signature: undefined4 * __cdecl FUN_004e2f08(undefined4 param_1, undefined4 param_2, void * param_3)
 * body: 004e2f08-004e2f73
 */

undefined4 * __cdecl FUN_004e2f08(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined4 uStack00000014;
  undefined4 *puStack0000001c;
  int in_stack_00000020;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 4;
    uStack00000014 = 0xc;
    *puVar1 = &PTR_FUN_00578088;
    puStack0000001c = puVar1;
    uVar2 = FUN_004d4510(unaff_ESI);
    puVar1[1] = uVar2;
    FUN_004dcc10(unaff_ESI,puVar1 + 2,in_stack_00000020);
    FUN_004d7490(unaff_ESI,puVar1 + 3);
    ExceptionList = param_3;
    return puVar1;
  }
  ExceptionList = param_3;
  return (undefined4 *)0x0;
}


