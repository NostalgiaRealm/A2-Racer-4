
/* ==== FUN_004a1e20 @ 004a1e20 ==== 
 * signature: undefined __thiscall FUN_004a1e20(void * this, float * param_1)
 * body: 004a1e20-004a1e91
 */

void __thiscall FUN_004a1e20(void *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [12];
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pfVar1 = (float *)FUN_004a1c50(this,local_40);
  pfVar3 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_4c = local_10;
  local_48 = local_c;
  local_44 = local_8;
  FUN_004a41b0(&local_4c);
  local_c = local_48;
  local_8 = local_44;
  local_10 = local_4c;
  pfVar1 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


