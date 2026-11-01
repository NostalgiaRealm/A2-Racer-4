
/* ==== FUN_00428581 @ 00428581 ==== 
 * signature: undefined __cdecl FUN_00428581(float * param_1, int param_2, char param_3)
 * body: 00428581-00428706
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00428581(float *param_1,int param_2,char param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_18;
  float local_10;
  
  iVar5 = DAT_00715e50 + param_2 * 0xf0;
  fVar3 = 1.0 / *(float *)(iVar5 + 0xb0);
  fVar1 = *(float *)(&DAT_006b2bb4 + DAT_006fbb44 * 4);
  fVar4 = *(float *)(iVar5 + 0xc4) * *(float *)(iVar5 + 0xc4);
  if (*(float *)(iVar5 + 0xc4) <= 1e-05) {
    local_10 = 0.0;
    if (*(float *)(iVar5 + 0xc4) < -1e-05) {
      local_10 = (fVar3 * 9.8 + fVar4 * 2.8) * fVar1;
    }
  }
  else {
    local_10 = fVar1 * fVar3 * -9.8 - fVar4 * fVar1 * 2.8;
  }
  iVar2 = *(int *)(iVar5 + 0x24);
  local_18 = 0.0;
  local_10 = local_10 + fVar4 * _DAT_006b2ae8 * -0.456;
  if (*(float *)(iVar5 + 0xc4) <= 5.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8 + 0x14) * fVar3 * -1.96;
  }
  if (param_3 == '\0') {
    local_10 = *(float *)(DAT_0073b0d0 + iVar2 + 0x34 + iVar2 * 0xa8) * fVar3 * -9.8 + local_10;
    local_18 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = 0.0;
  param_1[2] = local_10;
  return;
}


