
/* ==== FUN_004fe120 @ 004fe120 ==== 
 * signature: undefined4 * __thiscall FUN_004fe120(void * this, int param_1, short * param_2)
 * body: 004fe120-004fe43e
 */

undefined4 * __thiscall FUN_004fe120(void *this,int param_1,short *param_2)

{
  ushort *puVar1;
  double dVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int local_9c;
  float *local_94;
  double local_8c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573617;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fcff0(this);
  puVar10 = (undefined4 *)((int)this + 4);
  *puVar10 = &PTR_FUN_005786ec;
  puVar1 = (ushort *)((int)this + 8);
  *puVar1 = 1;
  *(int *)((int)this + 0xc) = (int)this + 0x10;
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined ***)this = &PTR_FUN_0057869c;
  *puVar10 = &PTR_FUN_00578680;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x620) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)this + 0x624) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((int)this + 0x628) = *(undefined4 *)(param_2 + 8);
  sVar3 = *param_2;
  *(short *)((int)this + 0x14) = sVar3;
  sVar4 = param_2[2];
  *(short *)((int)this + 0x16) = sVar4;
  *(short *)((int)this + 0x18) = sVar3 / sVar4;
  iVar9 = *(int *)(param_2 + 0xc);
  *(int *)((int)this + 0x604) = iVar9;
  uVar5 = *(undefined4 *)(iVar9 + 0xa4);
  if (*puVar1 <= *(ushort *)((int)this + 10)) {
    FUN_004f6060(puVar1);
  }
  *(undefined4 *)(*(int *)((int)this + 0xc) + (uint)*(ushort *)((int)this + 10) * 4) = uVar5;
  *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
  FUN_005001a0(*(void **)(param_1 + 0xa0),(int *)(-(uint)(this != (void *)0x0) & (uint)puVar10));
  *(undefined4 *)((int)this + 0x62c) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((int)this + 0x638) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((int)this + 0x634) = 0;
  *(undefined4 *)((int)this + 0x63c) = 0;
  *(undefined4 *)((int)this + 0x644) = 0;
  *(undefined4 *)((int)this + 0x640) = 0;
  *(undefined4 *)((int)this + 0x630) = *(undefined4 *)(param_2 + 0x60);
  if (*(double *)(param_1 + 0xd0 + *(int *)((int)this + 0x624) * 8) <= 0.0) {
    *(undefined4 *)((int)this + 0x608) = 0xbf800000;
  }
  else {
    *(undefined4 *)((int)this + 0x608) = 0x3f800000;
  }
  dVar2 = *(double *)(param_1 + 0xd8);
  dVar7 = *(double *)(param_1 + 0xe0);
  *(float *)((int)this + 0x60c) = (float)*(double *)(param_1 + 0xd0);
  *(float *)((int)this + 0x610) = (float)dVar2;
  *(float *)((int)this + 0x614) = (float)dVar7;
  FUN_004f9780((float *)((int)this + 0x60c));
  FUN_004f2ab0(*(void **)((int)this + 0x604),local_8c);
  local_9c = 0;
  if (0 < *(short *)((int)this + 0x14)) {
    psVar8 = param_2 + 0x22;
    local_94 = (float *)(param_2 + 0x66);
    puVar10 = (undefined4 *)((int)this + 0x34);
    do {
      pfVar11 = (float *)(puVar10 + -6);
      for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar11 = 0.0;
        pfVar11 = pfVar11 + 1;
      }
      FUN_004fac90(local_8c,local_94,(float *)(puVar10 + -6));
      fVar6 = *(float *)((int)this + 0x608) * *(float *)(param_2 + 0x11a) +
              (float)puVar10[*(int *)((int)this + 0x624) + -6];
      puVar10[2] = fVar6;
      puVar10[3] = (fVar6 - *(float *)(psVar8 + 0xe4)) * *(float *)((int)this + 0x608);
      puVar10[*(int *)((int)this + 0x624) + -6] =
           -(*(float *)((int)this + 0x608) * *(float *)(param_2 + 0x11a));
      puVar10[-2] = 0;
      puVar10[-1] = 0;
      *puVar10 = 0;
      puVar10[*(int *)((int)this + 0x624) + -2] = *(undefined4 *)((int)this + 0x608);
      puVar10[10] = *(undefined4 *)psVar8;
      puVar10[4] = *(undefined4 *)(psVar8 + 0x94);
      puVar10[5] = *(undefined4 *)(psVar8 + 0xa8);
      puVar10[6] = *(undefined4 *)(psVar8 + 0xbc);
      puVar10[8] = *(undefined4 *)(psVar8 + 0x14);
      puVar10[9] = 1.0 / *(float *)(psVar8 + 0x14);
      FUN_004fdd80(this,local_9c,0.0);
      iVar9 = local_9c >> 1;
      puVar10[0xc] = 0;
      local_9c = local_9c + 1;
      local_94 = local_94 + 4;
      puVar10[7] = *(undefined4 *)(param_2 + iVar9 * 2 + 0x126);
      psVar8 = psVar8 + 2;
      puVar10 = puVar10 + 0x1f;
    } while (local_9c < *(short *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x648) = 0xbf800000;
  FUN_004fdf40(this,0.0);
  iVar9 = 0;
  if (0 < *(short *)((int)this + 0x16)) {
    puVar10 = (undefined4 *)((int)this + 0x5ec);
    psVar8 = param_2 + 0x11c;
    do {
      iVar9 = iVar9 + 1;
      *puVar10 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      puVar10 = puVar10 + 1;
    } while (iVar9 < *(short *)((int)this + 0x16));
  }
  ExceptionList = local_c;
  return this;
}


