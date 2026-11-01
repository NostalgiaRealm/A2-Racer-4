
/* ==== FUN_0050a5a0 @ 0050a5a0 ==== 
 * signature: undefined4 * __fastcall FUN_0050a5a0(undefined4 * param_1)
 * body: 0050a5a0-0050a5b8
 */

undefined4 * __fastcall FUN_0050a5a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_0057883c;
  puVar2 = param_1;
  for (iVar1 = 0x29; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  return param_1;
}


