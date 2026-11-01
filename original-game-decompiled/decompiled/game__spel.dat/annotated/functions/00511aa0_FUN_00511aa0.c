
/* ==== FUN_00511aa0 @ 00511aa0 ==== 
 * signature: int * __cdecl FUN_00511aa0(double * param_1, double * param_2, double * param_3)
 * body: 00511aa0-00511cb2
 */

int * __cdecl FUN_00511aa0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  double local_a8;
  int **local_a0;
  double local_98;
  double local_90;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  undefined4 local_74;
  int *local_68;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  double local_28;
  double local_20;
  
  if (DAT_0074bde8 == (int *)0x0) {
    local_88 = DAT_0074bde8;
    local_84 = DAT_0074bde8;
    local_80 = DAT_0074bde8;
    local_7c = DAT_0074bde8;
    local_78 = DAT_0074bde8;
    local_68 = DAT_0074bde8;
    local_64 = DAT_0074bde8;
    local_60 = DAT_0074bde8;
    local_58 = DAT_0074bde8;
    local_54 = DAT_0074bde8;
    local_48 = DAT_0074bde8;
    local_44 = DAT_0074bde8;
    local_40 = DAT_0074bde8;
    local_3c = DAT_0074bde8;
    local_38 = DAT_0074bde8;
    local_a0 = &local_88;
    local_74 = 0x3ff00000;
    local_5c = 0x3ff00000;
    local_34 = 0xbff00000;
    local_a8 = 4.24399158193054e-314;
    DAT_0074bde8 = (int *)FUN_00513f10((int)&local_a8);
  }
  local_a8 = param_1[1];
  dVar1 = *param_2 - *param_1;
  local_98 = param_2[1] - local_a8;
  local_90 = param_2[2] - param_1[2];
  dVar2 = *param_3 - *param_1;
  dVar3 = param_3[2] - param_1[2];
  local_28 = (param_3[1] - local_a8) * local_90 - dVar3 * local_98;
  local_20 = dVar3 * dVar1 - dVar2 * local_90;
  dVar1 = dVar2 * local_98 - (param_3[1] - local_a8) * dVar1;
  if (local_28 * local_28 + dVar1 * dVar1 + local_20 * local_20 < 1e-12) {
    return (int *)0x0;
  }
  piVar4 = (int *)FUN_004f5ad0(((uint)DAT_0074bde8[2] >> 8) << 4,0x10);
  piVar7 = DAT_0074bde8;
  piVar8 = piVar4;
  for (iVar5 = ((uint)DAT_0074bde8[2] >> 8) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)piVar8 = (char)*piVar7;
    piVar7 = (int *)((int)piVar7 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  pfVar6 = (float *)(*piVar4 + (int)piVar4);
  *pfVar6 = (float)*param_1;
  pfVar6[1] = (float)dVar1;
  pfVar6[2] = (float)dVar2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  pfVar6[4] = (float)*param_2;
  pfVar6[5] = (float)dVar1;
  pfVar6[6] = (float)dVar2;
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  pfVar6[8] = (float)*param_3;
  pfVar6[9] = (float)dVar1;
  pfVar6[10] = (float)dVar2;
  return piVar4;
}


