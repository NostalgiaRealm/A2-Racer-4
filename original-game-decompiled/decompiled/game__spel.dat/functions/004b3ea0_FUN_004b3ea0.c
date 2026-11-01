
/* ==== FUN_004b3ea0 @ 004b3ea0 ==== 
 * signature: undefined __cdecl FUN_004b3ea0(undefined4 * param_1, uint param_2)
 * body: 004b3ea0-004b3f0d
 */

void __cdecl FUN_004b3ea0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [5];
  undefined4 local_2c;
  float local_28;
  float local_1c;
  undefined4 local_18;
  
  puVar2 = &DAT_0073b538;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != 0) {
    iVar1 = (DAT_005b23bc & param_2) * 4;
    local_2c = *(undefined4 *)(iVar1 + DAT_0073b578);
    local_1c = *(float *)(iVar1 + DAT_0073b530);
    local_18 = local_2c;
    local_28 = -local_1c;
  }
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


