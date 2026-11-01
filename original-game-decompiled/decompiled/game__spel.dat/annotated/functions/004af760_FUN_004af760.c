
/* ==== FUN_004af760 @ 004af760 ==== 
 * signature: undefined4 * __fastcall FUN_004af760(undefined4 * param_1)
 * body: 004af760-004af77f
 */

undefined4 * __fastcall FUN_004af760(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}


