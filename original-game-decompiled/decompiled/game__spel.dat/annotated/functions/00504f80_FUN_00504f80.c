
/* ==== FUN_00504f80 @ 00504f80 ==== 
 * signature: float10 __thiscall FUN_00504f80(int param_1, int param_2)
 * body: 00504f80-00504ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00504f80(int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  float10 fVar3;
  
  if (*(float *)(param_1 + 0x58) < _DAT_0074d524) {
    fVar2 = _DAT_0074d524 - *(float *)(param_1 + 0x58);
    dVar1 = *(double *)(param_2 + 200);
    fVar3 = FUN_00504ef0(param_1);
    fVar3 = fVar3 + (float10)((float)dVar1 * fVar2);
    return fVar3 + fVar3;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x60) = 0;
  fVar3 = FUN_00504ef0(param_1);
  return fVar3 + (float10)0.0 + fVar3 + (float10)0.0;
}


