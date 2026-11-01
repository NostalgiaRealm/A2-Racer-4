
/* ==== FUN_004fa0b0 @ 004fa0b0 ==== 
 * signature: undefined __thiscall FUN_004fa0b0(void * this, undefined4 * param_1, int param_2)
 * body: 004fa0b0-004fa1de
 */

void __thiscall FUN_004fa0b0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  int local_74 [5];
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  double local_18;
  double local_10;
  
  pdVar2 = &local_60;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  FUN_004f9870(&local_60);
  local_40 = local_58;
  local_38 = local_50 - local_60;
  local_30 = -local_58;
  iVar1 = FUN_004f9870(&local_40);
  if (iVar1 == 0) {
    local_40 = local_50;
    local_38 = -local_50;
    local_30 = local_58 - local_60;
    FUN_004f9870(&local_40);
  }
  local_74[0] = 0;
  local_74[3] = 0;
  local_18 = local_30 * local_60 - local_40 * local_50;
  local_74[1] = 1;
  local_74[2] = 2;
  local_74[4] = 1;
  iVar1 = local_74[param_2];
  local_10 = local_40 * local_58 - local_38 * local_60;
  *(double *)((int)this + iVar1 * 8) = local_60;
  *(double *)((int)this + iVar1 * 8 + 0x20) = local_58;
  *(double *)((int)this + iVar1 * 8 + 0x40) = local_50;
  iVar1 = local_74[param_2 + 1];
  *(double *)((int)this + iVar1 * 8) = local_38 * local_50 - local_30 * local_58;
  *(double *)((int)this + iVar1 * 8 + 0x20) = local_18;
  *(double *)((int)this + iVar1 * 8 + 0x40) = local_10;
  iVar1 = local_74[param_2 + 2];
  *(double *)((int)this + iVar1 * 8) = local_40;
  *(double *)((int)this + iVar1 * 8 + 0x20) = local_38;
  *(double *)((int)this + iVar1 * 8 + 0x40) = local_30;
  return;
}


