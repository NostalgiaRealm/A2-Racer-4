
/* ==== FUN_005217f0 @ 005217f0 ==== 
 * signature: undefined4 * __fastcall FUN_005217f0(undefined4 * param_1)
 * body: 005217f0-0052183a
 */

undefined4 * __fastcall FUN_005217f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[4] = 0;
  puVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


