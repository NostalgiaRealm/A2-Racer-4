
/* ==== FUN_004e2d3a @ 004e2d3a ==== 
 * signature: undefined4 * __cdecl FUN_004e2d3a(undefined4 param_1, undefined4 param_2, void * param_3)
 * body: 004e2d3a-004e2da6
 */

undefined4 * __cdecl FUN_004e2d3a(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined4 uStack00000014;
  undefined4 *puStack00000020;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 5;
    uStack00000014 = 1;
    *puVar1 = &PTR_FUN_00577a80;
    puStack00000020 = puVar1;
    uVar2 = FUN_004d4510(unaff_ESI);
    puVar1[1] = uVar2;
    FUN_004d74b0(unaff_ESI,(undefined2 *)(puVar1 + 2));
    ExceptionList = param_3;
    return puVar1;
  }
  ExceptionList = param_3;
  return (undefined4 *)0x0;
}


