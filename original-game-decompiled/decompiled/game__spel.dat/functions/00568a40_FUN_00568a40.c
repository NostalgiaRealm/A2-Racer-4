
/* ==== FUN_00568a40 @ 00568a40 ==== 
 * signature: undefined4 * __fastcall FUN_00568a40(undefined4 * param_1)
 * body: 00568a40-00568a5f
 */

undefined4 * __fastcall FUN_00568a40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_0057a4a4;
  puVar2 = param_1 + 2;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 1;
  return param_1;
}


