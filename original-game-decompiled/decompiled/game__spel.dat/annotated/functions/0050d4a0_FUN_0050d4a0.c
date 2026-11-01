
/* ==== FUN_0050d4a0 @ 0050d4a0 ==== 
 * signature: undefined4 * __fastcall FUN_0050d4a0(undefined4 * param_1)
 * body: 0050d4a0-0050d4bf
 */

undefined4 * __fastcall FUN_0050d4a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0050d480(param_1);
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[9] = 0x4e6e6b28;
  return param_1;
}


