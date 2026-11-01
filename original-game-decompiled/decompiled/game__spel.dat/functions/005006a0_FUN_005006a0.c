
/* ==== FUN_005006a0 @ 005006a0 ==== 
 * signature: undefined __thiscall FUN_005006a0(void * this, double * param_1, int param_2)
 * body: 005006a0-0050073a
 */

void __thiscall FUN_005006a0(void *this,double *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  void *this_00;
  float fVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_2 + 2);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    this_00 = *(void **)(*(int *)(param_2 + 4) + uVar4 * 4);
    FUN_004f3d20(this_00,*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4));
    FUN_004f44c0((int)this_00);
    fVar3 = (float)*param_1;
    fVar1 = *(float *)((int)this + 8);
    fVar2 = *(float *)((int)this + 0xc);
    *(float *)((int)this_00 + 0xa4) =
         *(float *)((int)this + 4) * fVar3 + *(float *)((int)this_00 + 0xa4);
    *(float *)((int)this_00 + 0xa8) = fVar1 * fVar3 + *(float *)((int)this_00 + 0xa8);
    *(float *)((int)this_00 + 0xac) = fVar2 * fVar3 + *(float *)((int)this_00 + 0xac);
  }
  return;
}


