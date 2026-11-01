
/* ==== FUN_004b2550 @ 004b2550 ==== 
 * signature: undefined4 * __fastcall FUN_004b2550(undefined4 * param_1)
 * body: 004b2550-004b2570
 */

undefined4 * __fastcall FUN_004b2550(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  return param_1;
}


