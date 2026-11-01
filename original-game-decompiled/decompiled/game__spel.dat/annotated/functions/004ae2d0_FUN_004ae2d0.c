
/* ==== FUN_004ae2d0 @ 004ae2d0 ==== 
 * signature: undefined __thiscall FUN_004ae2d0(void * this, undefined4 * param_1)
 * body: 004ae2d0-004ae33d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ae2d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    param_1[6] = ABS((float)param_1[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)((int)this + 0x4c) * 0x48);
    param_1[7] = ABS((float)param_1[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)((int)this + 0x4c) * 0x48);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x74) * 0x20 + *(int *)((int)this + 0x6c));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 1;
  return;
}


