
/* ==== FUN_00407d90 @ 00407d90 ==== 
 * signature: undefined __cdecl FUN_00407d90(int param_1)
 * body: 00407d90-00407ece
 */

void __cdecl FUN_00407d90(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  iVar1 = FUN_00418890(param_1);
  pfVar2 = (float *)((&DAT_005d2b78)[iVar1 * 3] * 0x50 + 8 + DAT_00715eb8);
  local_18 = *pfVar2;
  local_14 = pfVar2[1];
  local_10 = pfVar2[2];
  iVar3 = param_1 * 0x294;
  if (*(int *)(*(int *)(&DAT_005cea04 + iVar3) + *(int *)(&DAT_005ce9fc + iVar3) * 8) == 7) {
    pfVar2 = (float *)FUN_0041a090(local_c,param_1,(&DAT_005d2b78)[iVar1 * 3]);
    local_18 = local_18 + *pfVar2;
    local_14 = local_14 + pfVar2[1];
    local_10 = local_10 + pfVar2[2];
  }
  FUN_00403c70((float)param_1,iVar1,local_18,local_14,local_10);
  if (*(float *)(*(int *)(&DAT_005cea34 + iVar3) * 0xf0 + 0xc4 + DAT_00715e50) <
      *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50)) {
    FUN_00402ea0(&DAT_005cea7c + iVar3,0.0);
    fVar4 = FUN_004a6800(0x7128b0);
    FUN_00402e80(&DAT_005cea7c + iVar3,(float)(fVar4 * (float10)400.0));
  }
  FUN_00403cd0(param_1);
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar3) = (float)(fVar4 + (float10)*(float *)(&DAT_005cea54 + iVar3));
  return;
}


