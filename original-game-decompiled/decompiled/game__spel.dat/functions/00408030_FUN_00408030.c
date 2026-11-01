
/* ==== FUN_00408030 @ 00408030 ==== 
 * signature: undefined __cdecl FUN_00408030(int param_1)
 * body: 00408030-00408112
 */

void __cdecl FUN_00408030(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00418890(param_1);
  pfVar1 = (float *)((&DAT_005d2b78)[iVar2 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70((float)param_1,iVar2,*pfVar1,pfVar1[1],pfVar1[2]);
  iVar2 = param_1 * 0x294;
  if (*(float *)(*(int *)(&DAT_005cea34 + iVar2) * 0xf0 + 0xc4 + DAT_00715e50) - 5.0 <
      *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50)) {
    FUN_00402ea0(&DAT_005cea7c + iVar2,0.0);
    fVar3 = FUN_004a6800(0x7128b0);
    FUN_00402e80(&DAT_005cea7c + iVar2,(float)(fVar3 * (float10)400.0));
  }
  FUN_00403cd0(param_1);
  fVar3 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea54 + iVar2));
  return;
}


