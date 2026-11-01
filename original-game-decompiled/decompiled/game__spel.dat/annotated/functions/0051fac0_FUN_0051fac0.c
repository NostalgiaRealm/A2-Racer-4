
/* ==== FUN_0051fac0 @ 0051fac0 ==== 
 * signature: undefined4 __cdecl FUN_0051fac0(int param_1, double * param_2, double * param_3)
 * body: 0051fac0-0051fe0d
 */

undefined4 __cdecl FUN_0051fac0(int param_1,double *param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  undefined4 *puVar4;
  int local_1bc;
  int local_1b8;
  double *local_1b4;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190 [2];
  double local_180;
  double local_174;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  float local_154 [4];
  double local_144;
  double local_13c;
  double local_134;
  double local_12c;
  double local_124;
  double local_114;
  double local_10c;
  double local_104;
  double local_f4;
  double local_ec;
  double local_e4 [2];
  double local_d4 [4];
  double local_b4 [4];
  undefined4 local_94 [24];
  undefined4 local_34 [8];
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_0057404b;
  local_14 = ExceptionList;
  local_1bc = 0x80;
  local_1b8 = 0;
  ExceptionList = &local_14;
  local_1b4 = (double *)FUN_004f5a90(0x200);
  local_c = 0;
  FUN_00508e90(param_1,&local_1bc);
  FUN_00402d00(local_94,0x20,3,FUN_0043e110);
  FUN_004fa010(local_94);
  FUN_0051f400(local_154);
  FUN_0051f9c0(local_154,(int)&local_1bc);
  local_144 = SQRT(local_144);
  if (local_13c <= local_144 * local_144 * local_144 * 9.999999717180685e-10) {
    FUN_00508cf0(*(int **)local_1b4,&local_134,&local_114);
    iVar2 = local_1b8;
    while (iVar2 = iVar2 + -1, 0 < iVar2) {
      FUN_00508cf0(*(int **)((int)local_1b4 + iVar2 * 4),local_b4,local_d4);
      FUN_004f9b10(&local_134,(int)local_b4);
      FUN_004f9b50(&local_114,(int)local_d4);
    }
    FUN_004f9360(param_2,&local_134,&local_114,0.5);
    dVar1 = SQRT((local_134 - local_114) * (local_134 - local_114) +
                 (local_12c - local_10c) * (local_12c - local_10c) +
                 (local_124 - local_104) * (local_124 - local_104)) * 0.5;
    dVar1 = dVar1 * dVar1 * 0.5;
    *param_3 = dVar1;
    param_3[1] = dVar1;
    param_3[2] = dVar1;
    if ((local_1b4 != &local_1b0) && (local_1b4 != (double *)0x0)) {
      FUN_00559d4e(local_1b4);
    }
    ExceptionList = local_14;
    return 0;
  }
  FUN_004fa010(local_94);
  FUN_0051fe10(&local_174,local_154,1.0 / local_13c);
  *(undefined4 *)(param_2 + 1) = local_16c;
  *param_2 = local_174;
  pdVar3 = &local_174;
  puVar4 = local_34;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_2 + 2) = local_164;
  *(undefined4 *)((int)param_2 + 0xc) = local_168;
  *(undefined4 *)((int)param_2 + 0x14) = local_160;
  FUN_0051f9f0((int)&local_1bc,0,1,2,local_94,&local_f4,&local_1a8,&local_1a0);
  FUN_0051f9f0((int)&local_1bc,1,2,0,local_94,&local_ec,&local_1a8,&local_198);
  FUN_0051f9f0((int)&local_1bc,2,0,1,local_94,local_e4,&local_1a8,local_190);
  local_180 = SQRT(local_190[0] * local_190[0] + local_198 * local_198);
  local_c = 0xffffffff;
  local_1b0 = SQRT(local_198 * local_198 + local_1a0 * local_1a0);
  *param_3 = local_180;
  param_3[2] = local_1b0;
  param_3[1] = SQRT(local_190[0] * local_190[0] + local_1a0 * local_1a0);
  FUN_0053a2c0(&local_1bc);
  ExceptionList = local_14;
  return 1;
}


