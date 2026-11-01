
/* ==== FUN_004ff3a0 @ 004ff3a0 ==== 
 * signature: undefined __thiscall FUN_004ff3a0(void * this, int param_1)
 * body: 004ff3a0-004ff584
 */

void __thiscall FUN_004ff3a0(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_44;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar6 = FUN_004fe470(*(void **)(*(int *)(param_1 + 0x18) + 0xa4),param_1);
    *(undefined4 **)(param_1 + 0x40) = puVar6;
  }
  if ((*(int *)(param_1 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(param_1 + 0x40) < *(int *)(*(int *)(param_1 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(param_1 + 0x40));
  }
  iVar1 = *(int *)(param_1 + 0x40);
  local_88 = (float)*(double *)(iVar1 + 0x90);
  local_84 = (float)*(double *)(iVar1 + 0x98);
  local_80 = (float)*(double *)(iVar1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0);
  fVar5 = (float)*(double *)((int)this + 8) - local_88;
  fVar4 = (float)*(double *)((int)this + 0x10) - local_84;
  fVar3 = (float)*(double *)((int)this + 0x18) - local_80;
  fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar2 <= fVar3) {
    local_48 = 0;
    local_44 = 0x3ff00000;
    fVar4 = *(float *)((int)this + 0x58) * ((float)*(double *)((int)this + 8) - local_88) +
            *(float *)((int)this + 0x60) * ((float)*(double *)((int)this + 0x18) - local_80) +
            *(float *)((int)this + 0x5c) * ((float)*(double *)((int)this + 0x10) - local_84);
    local_40 = (double)(fVar4 + fVar4);
    local_38 = (double)(fVar3 - fVar2);
    FUN_004f9a50(&local_28,(double *)&local_48);
    if ((0.0 <= local_28) && ((0.0 <= local_20 || (local_20 = local_18, 0.0 <= local_18)))) {
      local_68 = 0;
      local_64 = 0x3ff00000;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      (*(code *)**(undefined4 **)this)(param_1,0,0,local_20,&local_68);
      return;
    }
    return;
  }
  local_88 = 0.0;
  local_84 = 0.0;
  local_80 = 0.0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  (*(code *)**(undefined4 **)this)(param_1,0,0,0,0,&local_88);
  return;
}


