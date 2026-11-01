
/* ==== FUN_004a5a40 @ 004a5a40 ==== 
 * signature: undefined __cdecl FUN_004a5a40(float * param_1)
 * body: 004a5a40-004a5b27
 */

void __cdecl FUN_004a5a40(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  float local_c0 [16];
  float local_80 [16];
  float local_40 [16];
  
  pfVar4 = local_c0;
  pfVar1 = (float *)&DAT_0073b538;
  pfVar2 = local_c0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  lVar5 = __ftol();
  pfVar1 = (float *)FUN_004b3f80(local_80,(uint)lVar5);
  pfVar2 = (float *)FUN_004b4110(local_40,pfVar1,pfVar4);
  pfVar1 = local_c0;
  pfVar4 = local_c0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  lVar5 = __ftol();
  pfVar2 = (float *)FUN_004b3ea0(local_40,(uint)lVar5);
  pfVar2 = (float *)FUN_004b4110(local_80,pfVar2,pfVar1);
  pfVar1 = local_c0;
  pfVar4 = local_c0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  lVar5 = __ftol();
  pfVar2 = (float *)FUN_004b3f10(local_40,(uint)lVar5);
  pfVar1 = (float *)FUN_004b4110(local_80,pfVar2,pfVar1);
  pfVar2 = local_c0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  pfVar1 = local_c0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


