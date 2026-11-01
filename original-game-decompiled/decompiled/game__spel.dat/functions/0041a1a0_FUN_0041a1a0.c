
/* ==== FUN_0041a1a0 @ 0041a1a0 ==== 
 * signature: undefined __cdecl FUN_0041a1a0(int param_1)
 * body: 0041a1a0-0041a272
 */

void __cdecl FUN_0041a1a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_c [3];
  
  iVar4 = FUN_00418890(param_1);
  pfVar5 = (float *)((&DAT_005d2b78)[iVar4 * 3] * 0x50 + 8 + DAT_00715eb8);
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  pfVar5 = (float *)FUN_0041a090(local_c,param_1,(&DAT_005d2b78)[iVar4 * 3]);
  FUN_00403c70((float)param_1,iVar4,fVar1 + *pfVar5,fVar2 + pfVar5[1],fVar3 + pfVar5[2]);
  FUN_00403cd0(param_1);
  iVar4 = param_1 * 0x294;
  fVar6 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar4) = (float)(fVar6 + (float10)*(float *)(&DAT_005cea54 + iVar4));
  fVar6 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea50 + iVar4) = (float)(fVar6 + (float10)*(float *)(&DAT_005cea50 + iVar4));
  return;
}


