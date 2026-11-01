
/* ==== FUN_004a58b0 @ 004a58b0 ==== 
 * signature: undefined __cdecl FUN_004a58b0(undefined4 * param_1, float * param_2)
 * body: 004a58b0-004a596d
 */

void __cdecl FUN_004a58b0(undefined4 *param_1,float *param_2)

{
  int iVar1;
  double *pdVar2;
  double local_80;
  double local_78;
  double local_70;
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  
  FUN_00402d00(&local_80,0x20,3,FUN_0043e110);
  FUN_004fa010((undefined4 *)&local_80);
  local_80 = (double)*param_2;
  local_60 = (double)-param_2[1];
  local_40 = (double)param_2[2];
  local_78 = (double)-param_2[4];
  local_58 = (double)param_2[5];
  local_38 = (double)-param_2[6];
  local_70 = (double)param_2[8];
  local_50 = (double)-param_2[9];
  local_30 = (double)param_2[10];
  pdVar2 = &local_80;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}


