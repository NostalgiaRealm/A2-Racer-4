
/* ==== FUN_004fa1e0 @ 004fa1e0 ==== 
 * signature: undefined __thiscall FUN_004fa1e0(void * this, undefined4 * param_1, int param_2, double * param_3)
 * body: 004fa1e0-004fa300
 */

void __thiscall FUN_004fa1e0(void *this,undefined4 *param_1,int param_2,double *param_3)

{
  int iVar1;
  double *pdVar2;
  int local_7c [5];
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_20;
  double local_18;
  
  pdVar2 = &local_68;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  FUN_004f9870(&local_68);
  local_48 = local_60 * param_3[2] - local_58 * param_3[1];
  local_40 = local_58 * *param_3 - local_68 * param_3[2];
  local_38 = local_68 * param_3[1] - local_60 * *param_3;
  FUN_004f9870(&local_48);
  local_7c[0] = 0;
  local_7c[3] = 0;
  local_20 = local_38 * local_68 - local_58 * local_48;
  local_7c[1] = 1;
  local_7c[2] = 2;
  local_7c[4] = 1;
  iVar1 = local_7c[param_2];
  local_18 = local_48 * local_60 - local_40 * local_68;
  *(double *)((int)this + iVar1 * 8) = local_68;
  *(double *)((int)this + iVar1 * 8 + 0x20) = local_60;
  *(double *)((int)this + iVar1 * 8 + 0x40) = local_58;
  iVar1 = local_7c[param_2 + 1];
  *(double *)((int)this + iVar1 * 8) = local_40 * local_58 - local_38 * local_60;
  *(double *)((int)this + iVar1 * 8 + 0x20) = local_20;
  *(double *)((int)this + iVar1 * 8 + 0x40) = local_18;
  iVar1 = local_7c[param_2 + 2];
  *(double *)((int)this + iVar1 * 8) = local_48;
  *(double *)((int)this + iVar1 * 8 + 0x20) = local_40;
  *(double *)((int)this + iVar1 * 8 + 0x40) = local_38;
  return;
}


