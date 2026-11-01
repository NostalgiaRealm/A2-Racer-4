
/* ==== FUN_005490e0 @ 005490e0 ==== 
 * signature: undefined __thiscall FUN_005490e0(void * this, int param_1, int * param_2, int param_3, void * param_4)
 * body: 005490e0-005492c2
 */

void __thiscall FUN_005490e0(void *this,int param_1,int *param_2,int param_3,void *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  double local_160;
  int local_158;
  uint local_154;
  int local_150;
  int local_14c;
  double *local_148;
  double local_140;
  double local_138;
  undefined1 local_130 [176];
  undefined4 local_80 [8];
  undefined4 local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  FUN_00543d90((undefined4 *)&local_160);
  local_158 = param_3;
  local_154 = param_3 + 1U & 0xfffffffe;
  FUN_00548f90((int)this);
  local_14c = *(int *)((int)param_4 + 8);
  uVar2 = local_14c + 0x1f + local_154 * 8 & 0xffffffe0;
  if (uVar2 < *(uint *)((int)param_4 + 0xc)) {
    *(uint *)((int)param_4 + 8) = uVar2;
  }
  else {
    local_14c = FUN_004f5be0(param_4,local_154 * 8);
  }
  local_148 = *(double **)((int)param_4 + 8);
  uVar2 = (int)local_148 + local_154 * 8 + 0x1f & 0xffffffe0;
  if (uVar2 < *(uint *)((int)param_4 + 0xc)) {
    *(uint *)((int)param_4 + 8) = uVar2;
  }
  else {
    local_148 = (double *)FUN_004f5be0(param_4,local_154 * 8);
  }
  local_150 = *(int *)((int)param_4 + 8);
  iVar3 = local_154 * param_3 * 8 + 8;
  uVar2 = local_150 + 0x1f + iVar3 & 0xffffffe0;
  if (uVar2 < *(uint *)((int)param_4 + 0xc)) {
    *(uint *)((int)param_4 + 8) = uVar2;
  }
  else {
    local_150 = FUN_004f5be0(param_4,iVar3);
  }
  FUN_00543b00((int)&local_160);
  puVar4 = *(undefined4 **)((int)this + 0x18);
  for (iVar3 = (*(uint *)((int)this + 0xc) & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_00543db0(&local_160,(int)this,param_2,param_3);
  FUN_00543d90(local_80);
  FUN_00543d90(local_60);
  FUN_00543d90(local_40);
  FUN_00543d90(local_20);
  iVar3 = FUN_00543ae0(&local_160);
  if ((iVar3 != 1) ||
     (bVar1 = FUN_00548e80(this,local_148,param_2,param_3,param_4),
     CONCAT31(extraout_var,bVar1) != 1)) {
    iVar3 = FUN_005490c0();
    iVar3 = FUN_00544460(local_130,*(undefined4 *)((int)this + 0x10),*(double **)((int)this + 0x14),
                         *(int *)((int)this + 0x18),*(int *)((int)this + 8),iVar3,param_4);
    if (iVar3 != 1) {
      return;
    }
  }
  FUN_00548f70((int)this);
  fVar5 = (float10)FUN_00549c70(param_1);
  local_138 = (double)fVar5;
  FUN_005492d0(this,param_1);
  fVar5 = (float10)FUN_00549c70(param_1);
  local_140 = (double)fVar5;
  fVar5 = FUN_00549d70(param_1);
  if (fVar5 + (float10)local_138 < (float10)local_140) {
    FUN_00549d50(param_1);
    return;
  }
  FUN_00549d30(param_1);
  return;
}


