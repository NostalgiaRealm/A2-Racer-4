
/* ==== FUN_004fd120 @ 004fd120 ==== 
 * signature: float10 __stdcall FUN_004fd120(int param_1)
 * body: 004fd120-004fd146
 */

float10 FUN_004fd120(int param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  float10 fVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  fVar2 = (float10)(**(code **)**(undefined4 **)(param_1 + 0x54))();
  fVar3 = (float10)(**(code **)*puVar1)();
  return fVar3 * (float10)(double)fVar2;
}


