
/* ==== FUN_00503570 @ 00503570 ==== 
 * signature: undefined __thiscall FUN_00503570(void * this, float * param_1, float param_2, int param_3, float param_4)
 * body: 00503570-00503c91
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00503570(void *this,float *param_1,float param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int *piVar13;
  double dVar14;
  float10 fVar15;
  int local_44;
  double local_38;
  undefined8 local_18;
  float local_10;
  
  pfVar1 = (float *)((int)this + 0x38);
  fVar2 = *(float *)((int)this + 0x110);
  fVar3 = _DAT_0074d648 + param_4;
  *(float *)((int)this + 0x18) = param_2;
  *(float *)this = fVar3 * 1.2;
  *param_1 = *(float *)((int)this + 0x100);
  param_1[1] = *(float *)((int)this + 0x104);
  iVar9 = *(int *)(*(int *)((int)this + 0x100) + 0xc);
  *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 1;
  iVar9 = *(int *)((int)this + 0x100);
  *(int *)((int)this + 0x30) = iVar9 + 0x128;
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x104) + 0x128;
  fVar3 = *(float *)(iVar9 + 0x98);
  fVar4 = *(float *)(iVar9 + 0x78);
  fVar5 = *(float *)(iVar9 + 0x9c);
  fVar6 = *(float *)(iVar9 + 0x7c);
  *pfVar1 = *(float *)(iVar9 + 0x94) + *(float *)(iVar9 + 0x74);
  *(float *)((int)this + 0x3c) = fVar3 + fVar4;
  *(float *)((int)this + 0x40) = fVar5 + fVar6;
  iVar9 = *(int *)((int)this + 0x100);
  fVar3 = *(float *)(iVar9 + 0xa8);
  fVar4 = *(float *)(iVar9 + 0x88);
  fVar5 = *(float *)(iVar9 + 0xac);
  fVar6 = *(float *)(iVar9 + 0x8c);
  *(float *)((int)this + 0x58) = *(float *)(iVar9 + 0x84) + *(float *)(iVar9 + 0xa4);
  *(float *)((int)this + 0x5c) = fVar3 + fVar4;
  *(float *)((int)this + 0x60) = fVar5 + fVar6;
  iVar9 = *(int *)((int)this + 0x104);
  fVar3 = *(float *)(iVar9 + 0x98);
  fVar4 = *(float *)(iVar9 + 0x78);
  fVar5 = *(float *)(iVar9 + 0x9c);
  fVar6 = *(float *)(iVar9 + 0x7c);
  *(float *)((int)this + 0x48) = *(float *)(iVar9 + 0x94) + *(float *)(iVar9 + 0x74);
  *(float *)((int)this + 0x4c) = fVar3 + fVar4;
  *(float *)((int)this + 0x50) = fVar5 + fVar6;
  iVar9 = *(int *)((int)this + 0x104);
  fVar3 = *(float *)(iVar9 + 0xa8);
  fVar4 = *(float *)(iVar9 + 0x88);
  fVar5 = *(float *)(iVar9 + 0xac);
  fVar6 = *(float *)(iVar9 + 0x8c);
  *(float *)((int)this + 0x68) = *(float *)(iVar9 + 0xa4) + *(float *)(iVar9 + 0x84);
  *(float *)((int)this + 0x6c) = fVar3 + fVar4;
  *(float *)((int)this + 0x70) = fVar5 + fVar6;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_00502ba0((int)this);
  uVar7 = *(undefined4 *)((int)this + 0xbc);
  uVar8 = *(undefined4 *)((int)this + 0xc0);
  puVar10 = *(undefined4 **)((int)this + 0x120);
  *puVar10 = *(undefined4 *)((int)this + 0xb8);
  puVar10[1] = uVar7;
  local_44 = 0;
  puVar10[2] = uVar8;
  fVar15 = FUN_005042e0(this);
  pfVar11 = *(float **)((int)this + 0x11c);
  if (*pfVar11 * *(float *)((int)this + 0xb8) +
      pfVar11[1] * *(float *)((int)this + 0xbc) + pfVar11[2] * *(float *)((int)this + 0xc0) <=
      -0.0001) {
    FUN_00502c20(this);
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
    pfVar11 = *(float **)((int)this + 0x11c);
    fVar3 = -(*(float *)((int)this + 0xb8) * *pfVar11 +
             *(float *)((int)this + 0xbc) * pfVar11[1] + *(float *)((int)this + 0xc0) * pfVar11[2]);
    fVar2 = SQRT(1.0 - (1.0 - fVar2) * (1.0 / ((float)param_3 * 0.5 + 1.0))) * fVar3;
    for (; (0.0 < fVar3 && (local_44 < 100)); local_44 = local_44 + 1) {
      FUN_00503f60(this,(double)(fVar15 * (float10)0.10000000149011612));
      FUN_00502ba0((int)this);
      pfVar11 = *(float **)((int)this + 0x11c);
      fVar3 = -(*(float *)((int)this + 0xb8) * *pfVar11 +
               *(float *)((int)this + 0xbc) * pfVar11[1] + *(float *)((int)this + 0xc0) * pfVar11[2]
               );
      FUN_00502c20(this);
    }
    fVar5 = fVar3 + SQRT((float)param_3) * 0.01 + fVar2;
    pfVar11 = *(float **)((int)this + 0x11c);
    fVar2 = pfVar11[1];
    fVar4 = pfVar11[2];
    *(float *)((int)this + 200) = *pfVar11 * -1.0;
    *(float *)((int)this + 0xcc) = fVar2 * -1.0;
    *(float *)((int)this + 0xd0) = fVar4 * -1.0;
    if ((0.0 < fVar5) && (local_44 != 100)) {
      FUN_00503f60(this,1.0);
      FUN_00502ba0((int)this);
      pfVar11 = *(float **)((int)this + 0x11c);
      fVar3 = *(float *)((int)this + 0xb8) * *pfVar11 +
              *(float *)((int)this + 0xbc) * pfVar11[1] + *(float *)((int)this + 0xc0) * pfVar11[2]
              + fVar3;
      if (ABS(fVar3) <= 0.0001) {
        local_38 = 0.0;
      }
      else {
        local_38 = (double)(fVar5 / fVar3);
      }
      FUN_00502ff0((int)this);
      FUN_00503f60(this,local_38);
    }
    FUN_005030c0(this,(float *)((int)this + 200),0);
  }
  else {
    local_10 = -pfVar11[2];
    local_18 = (double)CONCAT44(-pfVar11[1],-*pfVar11);
    FUN_005030c0(this,(float *)&local_18,1);
    if (10 < param_3) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  fVar2 = *(float *)((int)this + 0x40);
  fVar3 = *(float *)((int)this + 0x3c);
  fVar4 = *pfVar1;
  iVar9 = *(int *)((int)this + 0x100);
  iVar12 = *(int *)(*(int *)(iVar9 + 0xc) + 0x24);
  fVar15 = (float10)FUN_004ff1f0();
  fVar5 = *(float *)(iVar12 + 8);
  dVar14 = *(double *)(*(int *)(iVar9 + 0xc) + 200) * (double)*(float *)(iVar12 + 0x10);
  if (dVar14 * dVar14 < (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4)) {
    (**(code **)(**(int **)(*(int *)(iVar9 + 0xc) + 0x20) + 4))(iVar12,iVar9,pfVar1);
  }
  if (fVar5 * fVar5 < (float)fVar15) {
    (**(code **)**(undefined4 **)(*(int *)(iVar9 + 0xc) + 0x20))(iVar12,iVar9,(int)this + 0x58);
  }
  fVar2 = *(float *)((int)this + 0x50);
  fVar3 = *(float *)((int)this + 0x4c);
  fVar4 = *(float *)((int)this + 0x48);
  iVar9 = *(int *)((int)this + 0x104);
  iVar12 = *(int *)(*(int *)(iVar9 + 0xc) + 0x24);
  fVar15 = (float10)FUN_004ff1f0();
  dVar14 = *(double *)(*(int *)(iVar9 + 0xc) + 200) * (double)*(float *)(iVar12 + 0x10);
  local_18 = (double)(*(float *)(iVar12 + 8) * *(float *)(iVar12 + 8));
  if (dVar14 * dVar14 < (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4)) {
    (**(code **)(**(int **)(*(int *)(iVar9 + 0xc) + 0x20) + 4))(iVar12,iVar9,(int)this + 0x48);
  }
  if (local_18 < (double)fVar15) {
    (**(code **)**(undefined4 **)(*(int *)(iVar9 + 0xc) + 0x20))(iVar12,iVar9,(int)this + 0x68);
  }
  FUN_00503ca0(this,(int)param_1);
  if ((char)((uint)*(undefined4 *)(*(int *)((int)this + 0x100) + 0x5c) >> 8) != '\0' ||
      (char)((uint)*(undefined4 *)(*(int *)((int)this + 0x104) + 0x5c) >> 8) != '\0') {
    iVar9 = *(int *)(*(int *)((int)this + 0x100) + 0xc);
    *(int *)(iVar9 + 0x6c) = *(int *)(iVar9 + 0x6c) + 1;
    piVar13 = *(int **)((int)this + 0x100);
    piVar13[0x17] =
         (((*piVar13 << 0x1c) >> 0x1e) * -0x100 + 0x100U ^ piVar13[0x17]) & 0xff00 ^ piVar13[0x17];
    piVar13[0x21] = (int)((float)piVar13[0x21] + (float)piVar13[0x29]);
    piVar13[0x22] = (int)((float)piVar13[0x2a] + (float)piVar13[0x22]);
    piVar13[0x23] = (int)((float)piVar13[0x2b] + (float)piVar13[0x23]);
    piVar13[0x1d] = (int)((float)piVar13[0x25] + (float)piVar13[0x1d]);
    piVar13[0x1e] = (int)((float)piVar13[0x26] + (float)piVar13[0x1e]);
    piVar13[0x1f] = (int)((float)piVar13[0x27] + (float)piVar13[0x1f]);
    piVar13[0x29] = 0;
    piVar13[0x2a] = 0;
    piVar13[0x2b] = 0;
    piVar13[0x25] = 0;
    piVar13[0x26] = 0;
    piVar13[0x27] = 0;
    *param_1 = (float)piVar13;
    piVar13 = *(int **)((int)this + 0x104);
    piVar13[0x17] =
         (((*piVar13 << 0x1c) >> 0x1e) * -0x100 + 0x100U ^ piVar13[0x17]) & 0xff00 ^ piVar13[0x17];
    piVar13[0x21] = (int)((float)piVar13[0x29] + (float)piVar13[0x21]);
    piVar13[0x22] = (int)((float)piVar13[0x2a] + (float)piVar13[0x22]);
    piVar13[0x23] = (int)((float)piVar13[0x2b] + (float)piVar13[0x23]);
    piVar13[0x1d] = (int)((float)piVar13[0x1d] + (float)piVar13[0x25]);
    piVar13[0x1e] = (int)((float)piVar13[0x26] + (float)piVar13[0x1e]);
    piVar13[0x1f] = (int)((float)piVar13[0x27] + (float)piVar13[0x1f]);
    piVar13[0x29] = 0;
    piVar13[0x2a] = 0;
    piVar13[0x2b] = 0;
    piVar13[0x25] = 0;
    piVar13[0x26] = 0;
    piVar13[0x27] = 0;
    param_1[1] = (float)piVar13;
  }
  return;
}


