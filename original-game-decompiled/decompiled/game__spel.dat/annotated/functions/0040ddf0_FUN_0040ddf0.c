
/* ==== FUN_0040ddf0 @ 0040ddf0 ==== 
 * signature: undefined __stdcall FUN_0040ddf0(int param_1, int param_2, int param_3)
 * body: 0040ddf0-0040de95
 */

void FUN_0040ddf0(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  longlong lVar7;
  
  iVar3 = param_2;
  iVar2 = (&DAT_005ce9e8)[param_2 * 0xa5];
  iVar4 = FUN_004188c0(iVar2);
  pfVar1 = (float *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
  lVar7 = FUN_004031f0(iVar2,*pfVar1,pfVar1[1],pfVar1[2]);
  uVar5 = (int)(uint)lVar7 >> 0x1f;
  param_2 = ((uint)lVar7 ^ uVar5) - uVar5;
  if (500 < param_2) {
    param_2 = 500;
  }
  fVar6 = FUN_00403440(iVar3,(float)param_2);
  if ((float10)3.4028235e+38 <= fVar6) {
    fVar6 = (float10)3.4028235e+38;
  }
  *(float *)(param_1 + 0x24) = (float)fVar6;
  *(float *)(param_3 + 0x18) = (float)fVar6;
  return;
}


