
/* ==== FUN_0050a080 @ 0050a080 ==== 
 * signature: undefined __cdecl FUN_0050a080(double * param_1, int * param_2, uint * param_3)
 * body: 0050a080-0050a106
 */

void __cdecl FUN_0050a080(double *param_1,int *param_2,uint *param_3)

{
  float local_8;
  uint local_4;
  
  FUN_00509420(param_2,param_3,param_1,&local_8);
  if (((local_4 | (uint)local_8) & 0x80000000) == 0) {
    FUN_00509d60(param_2,param_3,param_1);
    return;
  }
  if (local_8 < 0.0) {
    FUN_0050a030();
    return;
  }
  FUN_0050a030();
  return;
}


