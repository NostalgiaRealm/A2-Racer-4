
/* ==== FUN_004fd150 @ 004fd150 ==== 
 * signature: float10 __stdcall FUN_004fd150(int param_1)
 * body: 004fd150-004fd178
 */

float10 FUN_004fd150(int param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = *(int **)(param_1 + 0x54);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x50) + 8))();
  fVar3 = (float10)(**(code **)(*piVar1 + 8))();
  return fVar3 * (float10)(double)fVar2;
}


