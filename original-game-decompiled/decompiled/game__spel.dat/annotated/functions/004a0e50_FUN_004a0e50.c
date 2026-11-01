
/* ==== FUN_004a0e50 @ 004a0e50 ==== 
 * signature: undefined4 * __thiscall FUN_004a0e50(void * this, float * param_1, float * param_2)
 * body: 004a0e50-004a1042
 */

undefined4 * __thiscall FUN_004a0e50(void *this,float *param_1,float *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  double *pdVar3;
  int iVar4;
  ushort local_12c;
  ushort local_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
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
  pcStack_8 = FUN_0056ed3b;
  local_c = ExceptionList;
  local_124 = *param_2;
  local_120 = param_2[1];
  local_118 = *param_1;
  local_11c = param_2[2];
  local_114 = param_1[1];
  local_110 = param_1[2];
  ExceptionList = &local_c;
  FUN_004a4180(&local_124);
  FUN_004a4180(&local_118);
  local_12c = 0;
  local_12a = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  local_4 = 0;
  pdVar3 = &local_10c;
  iVar4 = 8;
  do {
    if (local_12c <= local_12a) {
      FUN_004f6060(&local_12c);
    }
    *(double **)(CONCAT22(uStack_126,uStack_128) + (uint)local_12a * 4) = pdVar3;
    local_12a = local_12a + 1;
    pdVar3 = pdVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_10c = (double)local_124;
  local_104 = (double)local_120;
  local_fc = (double)local_11c;
  local_ec = (double)local_118;
  local_e4 = (double)local_120;
  local_dc = (double)local_11c;
  local_cc = (double)local_124;
  local_c4 = (double)local_114;
  local_bc = (double)local_11c;
  local_ac = (double)local_118;
  local_a4 = (double)local_114;
  local_9c = (double)local_11c;
  local_8c = (double)local_124;
  local_84 = (double)local_120;
  local_7c = (double)local_110;
  local_6c = (double)local_118;
  local_64 = (double)local_120;
  local_5c = (double)local_110;
  local_4c = (double)local_124;
  local_44 = (double)local_114;
  local_3c = (double)local_110;
  local_2c = (double)local_118;
  local_24 = (double)local_114;
  local_1c = (double)local_110;
  puVar2 = FUN_004a0ae0(this,(int)&local_12c);
  pfVar1 = (float *)CONCAT22(uStack_126,uStack_128);
  if ((pfVar1 != &local_124) && (pfVar1 != (float *)0x0)) {
    FUN_00559d4e(pfVar1);
  }
  ExceptionList = local_c;
  return puVar2;
}


