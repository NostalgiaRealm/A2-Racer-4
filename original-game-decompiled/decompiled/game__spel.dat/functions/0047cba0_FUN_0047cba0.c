
/* ==== FUN_0047cba0 @ 0047cba0 ==== 
 * signature: undefined __thiscall FUN_0047cba0(void * this, float * param_1)
 * body: 0047cba0-0047cd64
 */

void __thiscall FUN_0047cba0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  float *pfVar11;
  
  cVar9 = FUN_0047bc00((int)this);
  if ((cVar9 != '\0') && (*(int *)((int)this + 0x44) != -1)) {
    iVar10 = FUN_0047bc20((int)this);
    fVar8 = *(float *)(iVar10 + 8);
    pfVar11 = (float *)FUN_0047bc20((int)this);
    fVar1 = *pfVar11;
    fVar2 = param_1[4];
    fVar3 = *param_1;
    iVar10 = FUN_0047bc20((int)this);
    fVar4 = *(float *)(iVar10 + 4);
    fVar5 = param_1[5];
    fVar6 = param_1[1];
    fVar7 = param_1[2];
    iVar10 = DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9;
    *(float *)(iVar10 + 0x50) = fVar1 * fVar2 + fVar3;
    *(float *)(iVar10 + 0x54) = fVar4 * fVar5 + fVar6;
    *(float *)(iVar10 + 0x58) = fVar7 + fVar8 + 1.0;
    FUN_0047bc30((int)this);
    pfVar11 = (float *)FUN_0047bc30((int)this);
    iVar10 = DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9;
    fVar1 = param_1[7];
    fVar2 = pfVar11[1];
    fVar3 = param_1[8];
    fVar4 = pfVar11[2];
    *(float *)(iVar10 + 0x80) = param_1[6] * *pfVar11;
    *(float *)(iVar10 + 0x84) = fVar1 * fVar2;
    *(float *)(iVar10 + 0x88) = fVar3 * fVar4;
    pfVar11 = (float *)FUN_0047bc40((int)this);
    fVar1 = pfVar11[1];
    fVar2 = param_1[10];
    fVar3 = pfVar11[2];
    fVar4 = param_1[0xb];
    iVar10 = DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9;
    *(float *)(iVar10 + 0x74) = param_1[9] + *pfVar11;
    *(float *)(iVar10 + 0x78) = fVar1 + fVar2;
    *(float *)(iVar10 + 0x7c) = fVar3 + fVar4;
    if (*(char *)((int)this + 0x48) != '\0') {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,*(undefined4 *)((int)this + 0x4c));
    }
    FUN_004b5760(DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9);
    FUN_004b5b10(DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9);
    if (*(char *)((int)this + 0x48) != '\0') {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
    }
  }
  return;
}


