
/* ==== FUN_004449b0 @ 004449b0 ==== 
 * signature: undefined __cdecl FUN_004449b0(int param_1, float * param_2, float * param_3)
 * body: 004449b0-00444a55
 */

void __cdecl FUN_004449b0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_40 [16];
  
  pfVar2 = (float *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  pfVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_00444840(param_1,param_2,local_40,2,2.0);
  FUN_00444840(param_1,param_2 + 8,local_40,2,-2.0);
  FUN_00444840(param_1,param_3,local_40,3,2.0);
  FUN_00444840(param_1,param_3 + 8,local_40,3,-2.0);
  return;
}


