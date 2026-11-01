
/* ==== FUN_00474450 @ 00474450 ==== 
 * signature: undefined __cdecl FUN_00474450(undefined4 * param_1, void * param_2)
 * body: 00474450-004744f6
 */

void __cdecl FUN_00474450(undefined4 *param_1,void *param_2)

{
  double dVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 local_30 [6];
  undefined4 local_18 [6];
  
  FUN_00479a80(param_2,local_30,0);
  FUN_004cf650(local_30);
  pvVar2 = FUN_00479a80(param_2,local_18,1);
  dVar1 = *(double *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  FUN_004a67f0(0x7128b0);
  lVar3 = __ftol();
  *(double *)(param_1 + 4) =
       (double)(*(float *)(DAT_0073b530 + ((uint)lVar3 & DAT_005b23bc) * 4) * (float)dVar1);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


