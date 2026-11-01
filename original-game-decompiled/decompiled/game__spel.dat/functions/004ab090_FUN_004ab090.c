
/* ==== FUN_004ab090 @ 004ab090 ==== 
 * signature: undefined4 * __fastcall FUN_004ab090(undefined4 * param_1)
 * body: 004ab090-004ab0c4
 */

undefined4 * __fastcall FUN_004ab090(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = param_1 + 10;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  param_1[9] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  return param_1;
}


