
/* ==== FUN_00509c20 @ 00509c20 ==== 
 * signature: undefined __cdecl FUN_00509c20(uint * param_1, int * param_2, double * param_3)
 * body: 00509c20-00509c82
 */

void __cdecl FUN_00509c20(uint *param_1,int *param_2,double *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_004f9d50(param_3,(float *)((*param_1 & 0xffff) * 0x10 + iVar1 + (int)param_2),
               (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)param_1 & 0xc)) + (int)param_1)
                         & 0xffff) * 0x10 + iVar1 + (int)param_2),
               (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1)
                         & 0xffff) * 0x10 + iVar1 + (int)param_2));
  FUN_004f9e10(param_3);
  return;
}


