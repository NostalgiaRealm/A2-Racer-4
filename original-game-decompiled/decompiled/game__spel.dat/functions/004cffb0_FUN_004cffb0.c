
/* ==== FUN_004cffb0 @ 004cffb0 ==== 
 * signature: undefined __stdcall FUN_004cffb0(undefined4 * param_1)
 * body: 004cffb0-004cfff2
 */

void FUN_004cffb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18 [6];
  
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 0xffffffff;
  local_18[4] = DAT_00750068;
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


