
/* ==== FUN_00561e55 @ 00561e55 ==== 
 * signature: float10 __stdcall FUN_00561e55(void)
 * body: 00561e55-00561e86
 */

float10 FUN_00561e55(void)

{
  int iVar1;
  float10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  double local_78 [2];
  undefined4 uStack_64;
  
  uStack_64 = 0x561e65;
  iVar1 = FUN_00561e87(SUB84((double)in_ST1,0),(int)((ulonglong)(double)in_ST1 >> 0x20),
                       (double)in_ST0,local_78);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_0055e1a9();
    return fVar2;
  }
  return (float10)local_78[0];
}


