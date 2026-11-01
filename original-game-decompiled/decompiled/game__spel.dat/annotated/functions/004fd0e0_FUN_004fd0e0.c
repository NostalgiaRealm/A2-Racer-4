
/* ==== FUN_004fd0e0 @ 004fd0e0 ==== 
 * signature: undefined4 * __fastcall FUN_004fd0e0(undefined4 * param_1)
 * body: 004fd0e0-004fd0f1
 */

undefined4 * __fastcall FUN_004fd0e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


