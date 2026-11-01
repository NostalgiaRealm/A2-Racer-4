
/* ==== FUN_004a5ef0 @ 004a5ef0 ==== 
 * signature: undefined __fastcall FUN_004a5ef0(int param_1)
 * body: 004a5ef0-004a60e9
 */

void __fastcall FUN_004a5ef0(int param_1)

{
  float fVar1;
  int iVar2;
  void *this;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c4;
  float local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  float local_198 [4];
  double local_188 [4];
  double local_168 [4];
  double local_148 [16];
  double local_c8 [12];
  double local_68 [12];
  
  iVar2 = *(int *)(param_1 + 0x604);
  if (*(int *)(iVar2 + 0x40) == 0) {
    puVar5 = FUN_004fe470(*(void **)(*(int *)(iVar2 + 0x18) + 0xa4),iVar2);
    *(undefined4 **)(iVar2 + 0x40) = puVar5;
  }
  *(int *)(*(int *)(iVar2 + 0x40) + 4) = *(int *)(*(int *)(iVar2 + 0x40) + 4) + 1;
  if ((*(int *)(iVar2 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar2 + 0x40) < *(int *)(*(int *)(iVar2 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar2 + 0x40));
  }
  this = *(void **)(iVar2 + 0x40);
  FUN_00402d00(local_148,0x20,3,FUN_0043e110);
  FUN_004f2ab0(*(void **)(param_1 + 0x604),local_148);
  puVar5 = (undefined4 *)(param_1 + 0x64c);
  pfVar6 = (float *)(param_1 + 0x34);
  local_1fc = 4;
  do {
    fVar1 = pfVar6[0x18] - pfVar6[8];
    local_1d8 = pfVar6[-2] * fVar1 + pfVar6[-6];
    local_1d4 = pfVar6[-1] * fVar1 + pfVar6[-5];
    local_1d0 = *pfVar6 * fVar1 + pfVar6[-4];
    FUN_004fac20(local_148,&local_1d8,local_198);
    FUN_004fe850(this,local_198,local_168);
    local_1c4 = pfVar6[0xe];
    fVar1 = pfVar6[0xf];
    iVar2 = *(int *)(param_1 + 0x624);
    fVar3 = pfVar6[0x11];
    local_1b8 = (double)pfVar6[0xd];
    iVar4 = *(int *)(param_1 + 0x620);
    local_1f8._0_4_ = 0;
    local_1b0 = (double)local_1c4;
    local_1f8._4_4_ = 0;
    local_1f0 = 0;
    local_1ec = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    local_1c0 = fVar1;
    *(undefined4 *)(&local_1f8 + iVar2) = 0;
    *(undefined4 *)((int)&local_1f8 + iVar2 * 8 + 4) = 0xbff00000;
    local_1a8 = (double)fVar1;
    FUN_004f9b90(&local_1f8,iVar4,fVar3);
    FUN_004fa1e0(local_c8,(undefined4 *)&local_1b8,*(int *)(param_1 + 0x620),(double *)&local_1f8);
    FUN_004fa6e0((void *)((int)this + 0x30),local_c8,local_68);
    FUN_004f8bf0(local_188,local_68);
    FUN_004f3130((void *)*puVar5,local_188,local_168,0);
    puVar5 = puVar5 + 1;
    pfVar6 = pfVar6 + 0x1f;
    local_1fc = local_1fc + -1;
  } while (local_1fc != 0);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return;
}


