
/* ==== FUN_005215e0 @ 005215e0 ==== 
 * signature: undefined4 * __fastcall FUN_005215e0(undefined4 * param_1)
 * body: 005215e0-0052160d
 */

undefined4 * __fastcall FUN_005215e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00578b90;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[7] = 0;
  puVar2 = param_1 + 8;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


