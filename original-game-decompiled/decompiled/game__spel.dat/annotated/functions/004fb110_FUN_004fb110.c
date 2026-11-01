
/* ==== FUN_004fb110 @ 004fb110 ==== 
 * signature: undefined4 * __fastcall FUN_004fb110(undefined4 * param_1)
 * body: 004fb110-004fb128
 */

undefined4 * __fastcall FUN_004fb110(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004fb180(param_1);
  puVar2 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


