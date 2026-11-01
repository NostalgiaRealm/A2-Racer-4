
/* ==== FUN_00473af0 @ 00473af0 ==== 
 * signature: undefined __cdecl FUN_00473af0(undefined4 * param_1, float * param_2, void * param_3)
 * body: 00473af0-00473b45
 */

void __cdecl FUN_00473af0(undefined4 *param_1,float *param_2,void *param_3)

{
  float fVar1;
  void *pvVar2;
  undefined4 local_18 [6];
  
  pvVar2 = FUN_00479a80(param_3,local_18,0);
  fVar1 = (float)*(double *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  param_2[1] = fVar1;
  *param_2 = fVar1;
  param_2[2] = fVar1;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


