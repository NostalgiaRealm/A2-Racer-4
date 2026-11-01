
/* ==== FUN_00474630 @ 00474630 ==== 
 * signature: undefined __cdecl FUN_00474630(undefined4 * param_1, void * param_2)
 * body: 00474630-0047468d
 */

void __cdecl FUN_00474630(undefined4 *param_1,void *param_2)

{
  double dVar1;
  void *pvVar2;
  float10 fVar3;
  undefined4 local_18 [6];
  
  pvVar2 = FUN_00479a80(param_2,local_18,0);
  dVar1 = *(double *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  fVar3 = FUN_004a6800(0x7128b0);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  *(double *)(param_1 + 4) = (double)((float10)dVar1 * fVar3);
  return;
}


