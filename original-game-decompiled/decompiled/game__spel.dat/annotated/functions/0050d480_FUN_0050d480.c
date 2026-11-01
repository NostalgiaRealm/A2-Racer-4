
/* ==== FUN_0050d480 @ 0050d480 ==== 
 * signature: undefined4 * __fastcall FUN_0050d480(undefined4 * param_1)
 * body: 0050d480-0050d49f
 */

undefined4 * __fastcall FUN_0050d480(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004fb180(param_1);
  puVar2 = param_1;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[9] = 0x60ad78ec;
  return param_1;
}


