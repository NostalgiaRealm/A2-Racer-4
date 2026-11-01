
/* ==== FUN_00407ed0 @ 00407ed0 ==== 
 * signature: undefined __cdecl FUN_00407ed0(int param_1)
 * body: 00407ed0-00408026
 */

void __cdecl FUN_00407ed0(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar6 = param_1 * 0x294;
  iVar2 = *(int *)(&DAT_005cea34 + iVar6);
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar5 = FUN_00418890(param_1);
  pfVar1 = (float *)((&DAT_005d2b78)[iVar5 * 3] * 0x50 + 8 + DAT_00715eb8);
  HandleController((float)param_1,iVar5,*pfVar1,pfVar1[1],pfVar1[2]);
  FUN_00403040(&DAT_005cea7c + iVar6,0);
  iVar5 = *(int *)(*(int *)(&DAT_005cea04 + iVar6) + *(int *)(&DAT_005ce9fc + iVar6) * 8);
  if ((iVar5 != 6) && (iVar5 != 4)) {
    iVar5 = FUN_00407d20(*(int *)(DAT_00715e50 + 0x34 + iVar3 * 0xf0),
                         *(int *)(iVar2 * 0xf0 + 0x34 + DAT_00715e50));
    fVar4 = (float)iVar5 * -3.0 + 5.0;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    if (fVar4 + *(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50) <
        *(float *)(DAT_00715e50 + 0xc4 + iVar3 * 0xf0)) {
      FUN_00402ea0(&DAT_005cea7c + iVar6,0.0);
      fVar7 = FUN_004a6800(0x7128b0);
      FUN_00402e80(&DAT_005cea7c + iVar6,(float)(fVar7 * (float10)400.0));
    }
  }
  HandleAICar(param_1);
  fVar7 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar6) = (float)(fVar7 + (float10)*(float *)(&DAT_005cea54 + iVar6));
  return;
}


