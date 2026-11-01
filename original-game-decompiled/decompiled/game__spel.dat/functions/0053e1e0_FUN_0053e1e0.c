
/* ==== FUN_0053e1e0 @ 0053e1e0 ==== 
 * signature: undefined __cdecl FUN_0053e1e0(int param_1, int param_2, void * param_3, void * param_4, double param_5)
 * body: 0053e1e0-0053e456
 */

void __cdecl FUN_0053e1e0(int param_1,int param_2,void *param_3,void *param_4,double param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_7c = -1.0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xa4) == *(int *)(*(int *)(param_2 + 0x10) + 0xa4)) {
    local_7c = 1.0;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_2 + 0x40);
  local_58 = *(float *)(param_1 + 0x38);
  local_54 = *(float *)(iVar1 + 0x84) * local_58;
  local_50 = *(float *)(iVar1 + 0x88) * local_58;
  local_58 = *(float *)(iVar1 + 0x80) * local_58;
  FUN_004fe070(&local_58,&local_58,(float *)(iVar1 + 0x90),(double)*(float *)(param_1 + 0x3c));
  local_48 = *(float *)(param_2 + 0x38);
  local_44 = *(float *)(iVar2 + 0x84) * local_48;
  local_40 = *(float *)(iVar2 + 0x88) * local_48;
  local_48 = *(float *)(iVar2 + 0x80) * local_48;
  FUN_004fe070(&local_48,&local_48,(float *)(iVar2 + 0x90),(double)*(float *)(param_2 + 0x3c));
  local_78 = (float)((float10)*(double *)(iVar1 + 0x20) - (float10)*(double *)(iVar2 + 0x20));
  local_74 = (float)((float10)*(double *)(iVar1 + 0x28) - (float10)*(double *)(iVar2 + 0x28));
  local_70 = (float)(*(double *)(iVar1 + 0x30) - *(double *)(iVar2 + 0x30));
  FUN_004f9780(&local_78);
  fVar3 = local_78 * local_58 + local_74 * local_54 + local_70 * local_50;
  local_38 = local_78 * fVar3;
  local_34 = local_74 * fVar3;
  local_60 = (local_78 * local_48 + local_74 * local_44 + local_70 * local_40) * local_7c;
  local_68 = local_78 * local_60;
  local_64 = local_74 * local_60;
  local_60 = local_70 * local_60;
  fVar4 = (local_64 + local_34) * 0.5;
  fVar5 = (local_60 + fVar3 * local_70) * 0.5;
  fVar6 = (local_68 + local_38) * 0.5;
  local_28 = (fVar6 - local_38) * (float)param_5;
  local_24 = (fVar4 - local_34) * (float)param_5;
  local_20 = (fVar5 - fVar3 * local_70) * (float)param_5;
  local_7c = local_7c * (float)param_5;
  local_18 = (fVar6 - local_68) * local_7c;
  local_14 = (fVar4 - local_64) * local_7c;
  local_10 = (fVar5 - local_60) * local_7c;
  FUN_005041b0(param_3,param_3,&local_28);
  FUN_005041b0(param_4,param_4,&local_18);
  return;
}


