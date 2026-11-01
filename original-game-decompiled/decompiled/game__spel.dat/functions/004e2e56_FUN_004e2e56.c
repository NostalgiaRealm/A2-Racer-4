
/* ==== FUN_004e2e56 @ 004e2e56 ==== 
 * signature: undefined4 * __cdecl FUN_004e2e56(undefined4 param_1, undefined4 param_2, void * param_3)
 * body: 004e2e56-004e2ea5
 */

undefined4 * __cdecl FUN_004e2e56(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined4 uStack00000014;
  undefined4 *puStack00000020;
  
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 3;
    uStack00000014 = 8;
    *puVar1 = &PTR_FUN_005780b0;
    puStack00000020 = puVar1;
    uVar2 = FUN_004d4510(unaff_ESI);
    puVar1[1] = uVar2;
    ExceptionList = param_3;
    return puVar1;
  }
  ExceptionList = param_3;
  return (undefined4 *)0x0;
}


