
/* ==== FUN_004fd100 @ 004fd100 ==== 
 * signature: undefined4 * __fastcall FUN_004fd100(undefined4 * param_1)
 * body: 004fd100-004fd117
 */

undefined4 * __fastcall FUN_004fd100(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0x100;
  return param_1;
}


