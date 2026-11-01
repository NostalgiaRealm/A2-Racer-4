
/* ==== FUN_005041f0 @ 005041f0 ==== 
 * signature: undefined __thiscall FUN_005041f0(void * this, float * param_1)
 * body: 005041f0-005042d5
 */

void __thiscall FUN_005041f0(void *this,float *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  double *pdVar3;
  float10 fVar4;
  int local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_18 [5];
  
  local_28 = *param_1;
  local_24 = param_1[1];
  local_20 = param_1[2];
  pdVar1 = (double *)((int)this + 0x10);
  puVar2 = (undefined4 *)((int)this + 0x10c);
  local_38 = 2;
  pdVar3 = pdVar1;
  do {
    FUN_004fafa0((void *)puVar2[-0x36],&local_28,local_18);
    fVar4 = FUN_004f39c0((void *)puVar2[-2],(float *)*puVar2,local_18,&local_28);
    *pdVar3 = (double)fVar4;
    local_24 = local_24 * -1.0;
    local_20 = local_20 * -1.0;
    puVar2 = puVar2 + -1;
    pdVar3 = pdVar3 + -1;
    local_38 = local_38 + -1;
    local_28 = local_28 * -1.0;
  } while (local_38 != 0);
  if ((**(byte **)((int)this + 0x100) & 0xc) != 0) {
    *(double *)((int)this + 8) = *pdVar1 * 100000.0;
  }
  if ((**(byte **)((int)this + 0x104) & 0xc) != 0) {
    *pdVar1 = *(double *)((int)this + 8) * 100000.0;
  }
  return;
}


