
/* ==== FUN_0047a1e0 @ 0047a1e0 ==== 
 * signature: undefined __thiscall FUN_0047a1e0(void * this, float * param_1, float * param_2, float * param_3)
 * body: 0047a1e0-0047a2d4
 */

void __thiscall FUN_0047a1e0(void *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar2 = *param_1;
  fVar3 = *param_2;
  fVar4 = param_1[1];
  fVar5 = param_2[1];
  fVar6 = param_1[2];
  fVar7 = param_2[2];
  fVar8 = *param_3;
  fVar9 = *param_2;
  fVar10 = param_3[1];
  fVar11 = param_2[1];
  fVar12 = param_3[2];
  fVar13 = param_2[2];
  pfVar1 = (float *)((int)this + 4);
  *pfVar1 = (fVar10 - fVar11) * (fVar6 - fVar7) - (fVar12 - fVar13) * (fVar4 - fVar5);
  *(float *)((int)this + 8) =
       (fVar12 - fVar13) * (fVar2 - fVar3) - (fVar6 - fVar7) * (fVar8 - fVar9);
  *(float *)((int)this + 0xc) =
       (fVar4 - fVar5) * (fVar8 - fVar9) - (fVar10 - fVar11) * (fVar2 - fVar3);
  fVar2 = SQRT(*(float *)((int)this + 0xc) * *(float *)((int)this + 0xc) +
               *(float *)((int)this + 8) * *(float *)((int)this + 8) + *pfVar1 * *pfVar1);
  *pfVar1 = *pfVar1 / fVar2;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) / fVar2;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) / fVar2;
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  fVar4 = *param_2;
  *(undefined1 *)((int)this + 0x14) = 1;
  *(float *)((int)this + 0x10) =
       *pfVar1 * fVar4 + *(float *)((int)this + 8) * fVar3 + *(float *)((int)this + 0xc) * fVar2;
  return;
}


