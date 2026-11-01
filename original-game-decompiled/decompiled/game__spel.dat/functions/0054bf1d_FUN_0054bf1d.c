
/* ==== FUN_0054bf1d @ 0054bf1d ==== 
 * signature: undefined __stdcall FUN_0054bf1d(undefined4 * param_1)
 * body: 0054bf1d-0054bf53
 */

void FUN_0054bf1d(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1c [6];
  
  local_1c[0] = 0xffffffff;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = DAT_00750068;
  puVar2 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


