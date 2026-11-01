
/* ==== FUN_0055f2c0 @ 0055f2c0 ==== 
 * signature: float10 __cdecl FUN_0055f2c0(int param_1, double param_2)
 * body: 0055f2c0-0055f312
 */

float10 __cdecl FUN_0055f2c0(int param_1,double param_2)

{
  float10 fVar1;
  
  if (DAT_005c94c0 == 0) {
    fVar1 = FUN_0055f875(1,param_1);
    return fVar1;
  }
  DAT_0074dc60 = 0x21;
  FUN_0055fae8();
  return (float10)param_2;
}


