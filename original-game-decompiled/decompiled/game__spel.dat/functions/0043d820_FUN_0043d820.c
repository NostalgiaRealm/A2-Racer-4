
/* ==== FUN_0043d820 @ 0043d820 ==== 
 * signature: undefined __cdecl FUN_0043d820(int param_1)
 * body: 0043d820-0043d8ed
 */

void __cdecl FUN_0043d820(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  
  iVar5 = param_1 * 300;
  fVar1 = 47.0 / (float)(int)(&DAT_006c4320)[param_1 * 0x4b] + *(float *)(&DAT_006c4328 + iVar5);
  fVar3 = 47.0 / (float)(int)(&DAT_006c4320)[param_1 * 0x4b] + *(float *)(&DAT_006c432c + iVar5);
  fVar2 = fVar1 * 0.5;
  *(float *)(&DAT_006c4268 + iVar5) = -fVar2;
  fVar4 = fVar3 * 0.5;
  *(float *)(&DAT_006c426c + iVar5) = -fVar4;
  *(float *)(&DAT_006c4288 + iVar5) = -fVar2;
  *(float *)(&DAT_006c428c + iVar5) = fVar4;
  *(float *)(&DAT_006c42a8 + iVar5) = fVar2;
  *(float *)(&DAT_006c42ac + iVar5) = fVar4;
  *(float *)(&DAT_006c42c8 + iVar5) = fVar2;
  *(float *)(&DAT_006c42cc + iVar5) = -fVar4;
  pfVar7 = (float *)(&DAT_006c4268 + iVar5);
  pfVar8 = (float *)(&DAT_006c42e8 + iVar5);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  *(float *)(&DAT_006c4328 + iVar5) = fVar1;
  *(float *)(&DAT_006c432c + iVar5) = fVar3;
  return;
}


