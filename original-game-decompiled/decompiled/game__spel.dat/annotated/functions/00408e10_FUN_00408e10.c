
/* ==== FUN_00408e10 @ 00408e10 ==== 
 * signature: undefined __cdecl FUN_00408e10(int param_1)
 * body: 00408e10-00408ef4
 */

void __cdecl FUN_00408e10(int param_1)

{
  undefined *this;
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5];
  *(undefined4 *)(iVar2 * 0xf0 + 0x60 + DAT_00715e50) = 0;
  iVar3 = FUN_00418890(param_1);
  pfVar1 = (float *)((&DAT_005d2b78)[iVar3 * 3] * 0x50 + 8 + DAT_00715eb8);
  HandleController((float)param_1,iVar3,*pfVar1,pfVar1[1],pfVar1[2]);
  this = &DAT_005cea7c + iVar4;
  FUN_00403040(this,0);
  if (16.0 < *(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50)) {
    FUN_00402ea0(this,0.0);
    fVar5 = FUN_004a6800(0x7128b0);
    FUN_00402e80(this,(float)(fVar5 * (float10)200.0));
  }
  HandleAICar(param_1);
  fVar5 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar4) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea54 + iVar4));
  return;
}


