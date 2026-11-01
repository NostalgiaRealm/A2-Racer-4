
/* ==== FUN_004a0b20 @ 004a0b20 ==== 
 * signature: undefined4 * __thiscall FUN_004a0b20(void * this, float * param_1)
 * body: 004a0b20-004a0d08
 */

undefined4 * __thiscall FUN_004a0b20(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  double local_10c;
  double local_104;
  double local_fc;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  double local_84;
  double local_7c;
  double local_6c;
  double local_64;
  double local_5c;
  double local_4c;
  double local_44;
  double local_3c;
  double local_2c;
  double local_24;
  double local_1c;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ecfb;
  local_c = ExceptionList;
  local_11c = param_1[2] * 0.5;
  local_120 = param_1[1] * 0.5;
  local_124 = *param_1 * 0.5;
  ExceptionList = &local_c;
  local_110 = local_11c;
  local_118 = local_124;
  local_114 = local_120;
  FUN_004a4180(&local_124);
  local_118._0_2_ = 0;
  local_118._2_2_ = 0;
  local_114._0_2_ = 0;
  local_114._2_2_ = 0;
  local_4 = 0;
  pdVar6 = &local_10c;
  iVar7 = 8;
  do {
    if ((ushort)local_118 <= local_118._2_2_) {
      FUN_004f6060((ushort *)&local_118);
    }
    *(double **)(CONCAT22(local_114._2_2_,(undefined2)local_114) + (uint)local_118._2_2_ * 4) =
         pdVar6;
    local_118._2_2_ = local_118._2_2_ + 1;
    pdVar6 = pdVar6 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  fVar1 = -local_124;
  local_10c = (double)fVar1;
  fVar2 = -local_120;
  local_104 = (double)fVar2;
  fVar3 = -local_11c;
  local_fc = (double)fVar3;
  local_ec = (double)local_124;
  local_e4 = (double)fVar2;
  local_dc = (double)fVar3;
  local_cc = (double)fVar1;
  local_c4 = (double)local_120;
  local_bc = (double)fVar3;
  local_ac = (double)local_124;
  local_a4 = (double)local_120;
  local_9c = (double)fVar3;
  local_8c = (double)fVar1;
  local_84 = (double)fVar2;
  local_7c = (double)local_11c;
  local_6c = (double)local_124;
  local_64 = (double)fVar2;
  local_5c = (double)local_11c;
  local_4c = (double)fVar1;
  local_44 = (double)local_120;
  local_3c = (double)local_11c;
  local_2c = (double)local_124;
  local_24 = (double)local_120;
  local_1c = (double)local_11c;
  puVar5 = FUN_004a0ae0(this,(int)&local_118);
  pfVar4 = (float *)CONCAT22(local_114._2_2_,(undefined2)local_114);
  if ((pfVar4 != &local_110) && (pfVar4 != (float *)0x0)) {
    FUN_00559d4e(pfVar4);
  }
  ExceptionList = local_c;
  return puVar5;
}


