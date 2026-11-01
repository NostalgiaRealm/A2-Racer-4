
/* ==== FUN_004fb150 @ 004fb150 ==== 
 * signature: undefined4 * __fastcall FUN_004fb150(undefined4 * param_1)
 * body: 004fb150-004fb172
 */

undefined4 * __fastcall FUN_004fb150(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004fb180(param_1);
  puVar2 = param_1;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[6] = 0;
  param_1[5] = 1;
  return param_1;
}


