
/* ==== FUN_004e2e0b @ 004e2e0b ==== 
 * signature: undefined4 * __cdecl FUN_004e2e0b(undefined4 param_1, undefined4 param_2, void * param_3)
 * body: 004e2e0b-004e2e55
 */

undefined4 * __cdecl FUN_004e2e0b(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined4 uStack00000014;
  undefined4 *puStack00000020;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    uStack00000014 = 6;
    *puVar1 = &PTR_FUN_005780d8;
    puStack00000020 = puVar1;
    uVar2 = FUN_004d4510(unaff_ESI);
    puVar1[1] = uVar2;
    FUN_004dbf50(unaff_ESI,puVar1 + 2);
    ExceptionList = param_3;
    return puVar1;
  }
  ExceptionList = param_3;
  return (undefined4 *)0x0;
}


