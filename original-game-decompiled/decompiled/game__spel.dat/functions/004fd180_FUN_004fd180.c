
/* ==== FUN_004fd180 @ 004fd180 ==== 
 * signature: float10 __stdcall FUN_004fd180(int param_1)
 * body: 004fd180-004fd1a8
 */

float10 FUN_004fd180(int param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = *(int **)(param_1 + 0x54);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x50) + 0xc))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0xc))();
  return fVar3 + (float10)(double)fVar2;
}


