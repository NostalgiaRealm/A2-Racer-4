
/* ==== FUN_00450c90 @ 00450c90 ==== 
 * signature: undefined __cdecl FUN_00450c90(int param_1, int param_2, int param_3)
 * body: 00450c90-00450ddd
 */

void __cdecl FUN_00450c90(int param_1,int param_2,int param_3)

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
  longlong lVar12;
  
  iVar10 = FUN_00447540();
  if (iVar10 != 0) {
    iVar10 = param_1 * 0xf0 + DAT_00715e50;
    fVar8 = *(float *)(iVar10 + 0xbc);
    fVar9 = *(float *)(iVar10 + 0xc4);
    iVar11 = DAT_0073b0d0 + *(int *)(iVar10 + 0x24) * 0xa9;
    lVar12 = __ftol();
    iVar10 = (DAT_005b23bc & (uint)lVar12) * 4;
    fVar1 = *(float *)(iVar10 + DAT_0073b578);
    fVar2 = *(float *)(iVar10 + DAT_0073b530);
    fVar3 = *(float *)(iVar10 + DAT_0073b530);
    fVar4 = *(float *)(iVar10 + DAT_0073b578);
    fVar5 = *(float *)(iVar11 + 0x50);
    fVar6 = *(float *)(iVar11 + 0x54);
    fVar7 = *(float *)(iVar11 + 0x58);
    FUN_004c3fa0((byte *)s_Handling_sound_source_object__d_005a27ac);
    this = (void *)FUN_0049eb50(&DAT_006fbb5c,param_2);
    FUN_0049e890(this,fVar5 * 0.1,fVar6 * 0.1,fVar7 * 0.1,fVar1 * fVar8 - fVar2 * fVar9,0,
                 fVar4 * fVar9 + fVar3 * fVar8,param_3);
  }
  return;
}


