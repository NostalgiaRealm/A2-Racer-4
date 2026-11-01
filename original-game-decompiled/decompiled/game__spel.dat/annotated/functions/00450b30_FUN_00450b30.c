
/* ==== FUN_00450b30 @ 00450b30 ==== 
 * signature: undefined __cdecl FUN_00450b30(int param_1, int param_2)
 * body: 00450b30-00450c89
 */

void __cdecl FUN_00450b30(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  void *this;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar10 = FUN_00447540();
  if (iVar10 != 0) {
    iVar12 = param_1 * 0xf0;
    fVar8 = *(float *)(iVar12 + 0xbc + DAT_00715e50);
    fVar9 = *(float *)(iVar12 + DAT_00715e50 + 0xc4);
    iVar10 = DAT_0073b0d0 + *(int *)(iVar12 + 0x24 + DAT_00715e50) * 0xa9;
    lVar13 = __ftol();
    iVar11 = (DAT_005b23bc & (uint)lVar13) * 4;
    fVar1 = *(float *)(iVar11 + DAT_0073b578);
    fVar2 = *(float *)(iVar11 + DAT_0073b530);
    fVar3 = *(float *)(iVar11 + DAT_0073b530);
    fVar4 = *(float *)(iVar11 + DAT_0073b578);
    fVar5 = *(float *)(iVar10 + 0x50);
    fVar6 = *(float *)(iVar10 + 0x54);
    fVar7 = *(float *)(iVar10 + 0x58);
    FUN_004c3fa0((byte *)s_Handling_sound_source_object__d_005a2788);
    iVar10 = *(int *)(iVar12 + 0x30 + DAT_00715e50);
    if (iVar10 != -1) {
      this = (void *)FUN_0049eb50(&DAT_006fbb5c,iVar10);
      FUN_0049e890(this,fVar5 * 0.1,fVar6 * 0.1,fVar7 * 0.1,fVar1 * fVar8 - fVar2 * fVar9,0,
                   fVar4 * fVar9 + fVar3 * fVar8,param_2);
    }
  }
  return;
}


