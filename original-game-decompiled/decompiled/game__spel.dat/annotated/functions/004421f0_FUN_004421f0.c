
/* ==== FUN_004421f0 @ 004421f0 ==== 
 * signature: undefined __fastcall FUN_004421f0(int * param_1)
 * body: 004421f0-004422e5
 */

void __fastcall FUN_004421f0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_14 [20];
  
  iVar4 = FUN_004b7400(&DAT_00712130,s_hiradar_pcx_0059d26c);
  *param_1 = iVar4;
  param_1[1] = iVar4;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  fVar2 = (float)DAT_005b379c;
  fVar1 = fVar2 - fVar2 * 0.0625;
  fVar3 = (float)DAT_005b3798 * 0.046875;
  piVar5 = (int *)FUN_00441940(local_14,fVar3,fVar1 - fVar2 * 0.16666667,
                               (float)DAT_005b3798 * 0.125 + fVar3,fVar1);
  iVar4 = *param_1;
  piVar7 = param_1 + 0x22;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  iVar6 = *(int *)(iVar4 * 0x48 + 0x24 + DAT_0073b1b0);
  param_1[0x34] = iVar6;
  param_1[0x35] = *(int *)(iVar4 * 0x48 + 0x28 + DAT_0073b1b0);
  fVar1 = (float)(iVar6 / 2);
  param_1[0x2c] = (int)fVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = (int)fVar1;
  return;
}


