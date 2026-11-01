
/* ==== FUN_00459de0 @ 00459de0 ==== 
 * signature: undefined4 * __cdecl FUN_00459de0(undefined4 * param_1, float * param_2)
 * body: 00459de0-00459f8b
 */

undefined4 * __cdecl FUN_00459de0(undefined4 *param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *pvStack0000000c;
  void *in_stack_ffffff74;
  float local_24;
  float local_1c;
  float local_18 [3];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a853;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lVar3 = __ftol();
  iVar1 = ((uint)lVar3 & DAT_005b23bc) * 4;
  local_18[0] = *(float *)(iVar1 + DAT_0073b578) * *param_2 -
                *(float *)(iVar1 + DAT_0073b530) * param_2[2];
  local_18[2] = *(float *)(iVar1 + DAT_0073b578) * param_2[2] +
                *(float *)(iVar1 + DAT_0073b530) * *param_2;
  local_24 = local_18[0];
  local_1c = local_18[2];
  if ((local_18[0] == 0.0) && (local_18[2] == 0.0)) {
    local_24 = 0.0;
    local_1c = 0.0;
  }
  local_18[1] = 0.0;
  local_18[0] = local_24 * 10.0 + local_18[0];
  local_18[2] = local_1c * 10.0 + local_18[2];
  FUN_00460370(local_18);
  lVar3 = __ftol();
  pvStack0000000c = operator_new(0xb0);
  local_4 = 0;
  if (pvStack0000000c != (void *)0x0) {
    puVar2 = (undefined4 *)&stack0xffffff74;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = FUN_004597a0(pvStack0000000c,(int)lVar3,in_stack_ffffff74);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


