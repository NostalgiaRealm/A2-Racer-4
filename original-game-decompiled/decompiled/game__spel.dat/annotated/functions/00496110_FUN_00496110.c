
/* ==== FUN_00496110 @ 00496110 ==== 
 * signature: undefined __thiscall FUN_00496110(void * this, int * param_1, float param_2)
 * body: 00496110-004961e8
 */

void __thiscall FUN_00496110(void *this,int *param_1,float param_2)

{
  float10 fVar1;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  param_2 = *(float *)((int)this + 0x58) / param_2;
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  local_4 = 0x3f800000;
  local_c = param_2 * 8.0 + 1.0;
  local_8 = local_c;
  (**(code **)(*param_1 + 0x24))(&local_c);
  FUN_0047bde0((int)param_1);
  __ftol();
  (**(code **)(*param_1 + 0x28))(&stack0x00000000);
  fVar1 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x58) = (float)(fVar1 + (float10)*(float *)((int)this + 0x58));
  return;
}


