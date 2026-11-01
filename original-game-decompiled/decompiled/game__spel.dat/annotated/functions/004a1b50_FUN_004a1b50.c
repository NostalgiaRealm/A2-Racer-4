
/* ==== FUN_004a1b50 @ 004a1b50 ==== 
 * signature: undefined __thiscall FUN_004a1b50(void * this, float * param_1, float * param_2)
 * body: 004a1b50-004a1bea
 */

void __thiscall FUN_004a1b50(void *this,float *param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  double *pdVar3;
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
  double local_138;
  double local_130;
  double local_120 [4];
  double local_100 [16];
  undefined4 local_80 [32];
  
  local_14c = *param_1;
  local_148 = param_1[1];
  local_144 = param_1[2];
  FUN_004a4180(&local_14c);
  local_140 = (double)local_14c;
  local_138 = (double)local_148;
  local_130 = (double)local_144;
  puVar1 = (undefined4 *)FUN_004a58b0(local_80,param_2);
  pdVar3 = local_100;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  FUN_004f8bf0(local_120,local_100);
  FUN_004f3130(*(void **)((int)this + 8),local_120,&local_140,0);
  return;
}


