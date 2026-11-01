
/* ==== FUN_00459dd1 @ 00459dd1 ==== 
 * signature: void * __stdcall FUN_00459dd1(undefined4 * param_1, float * param_2)
 * body: 00459dd1-00459ddf
 */

void * FUN_00459dd1(undefined4 *param_1,float *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  longlong lVar4;
  void *pvStack0000000c;
  void *in_stack_ffffff74;
  float fStack_24;
  float fStack_1c;
  float afStack_18 [3];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a853;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  lVar4 = __ftol();
  iVar1 = ((uint)lVar4 & DAT_005b23bc) * 4;
  afStack_18[0] =
       *(float *)(iVar1 + DAT_0073b578) * *param_2 - *(float *)(iVar1 + DAT_0073b530) * param_2[2];
  afStack_18[2] =
       *(float *)(iVar1 + DAT_0073b578) * param_2[2] + *(float *)(iVar1 + DAT_0073b530) * *param_2;
  fStack_24 = afStack_18[0];
  fStack_1c = afStack_18[2];
  if ((afStack_18[0] == 0.0) && (afStack_18[2] == 0.0)) {
    fStack_24 = 0.0;
    fStack_1c = 0.0;
  }
  afStack_18[1] = 0.0;
  afStack_18[0] = fStack_24 * 10.0 + afStack_18[0];
  afStack_18[2] = fStack_1c * 10.0 + afStack_18[2];
  FUN_00460370(afStack_18);
  lVar4 = __ftol();
  pvStack0000000c = operator_new(0xb0);
  uStack_4 = 0;
  if (pvStack0000000c != (void *)0x0) {
    puVar3 = (undefined4 *)&stack0xffffff74;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    pvVar2 = FUN_004597a0(pvStack0000000c,(int)lVar4,in_stack_ffffff74);
    ExceptionList = pvStack_c;
    return pvVar2;
  }
  ExceptionList = pvStack_c;
  return (void *)0x0;
}


