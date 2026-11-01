
/* ==== FUN_004c0fc0 @ 004c0fc0 ==== 
 * signature: undefined4 * __fastcall FUN_004c0fc0(undefined4 * param_1)
 * body: 004c0fc0-004c0fe4
 */

undefined4 * __fastcall FUN_004c0fc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x33;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x66] = 0;
  return param_1;
}


