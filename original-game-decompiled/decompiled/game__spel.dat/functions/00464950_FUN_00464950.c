
/* ==== FUN_00464950 @ 00464950 ==== 
 * signature: float10 __cdecl FUN_00464950(float * param_1, int param_2, int param_3)
 * body: 00464950-00464974;00464978-00464a3d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00464975-00464977
 */

float10 __cdecl FUN_00464950(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___d____s__t__d__bigger_then_numb_005a6880);
  }
  fVar1 = (float)param_2 / (float)param_3;
  fVar2 = FUN_00464a40(fVar1,3);
  fVar3 = FUN_00464a40(fVar1,2);
  fVar4 = FUN_00464a40(fVar1,3);
  fVar5 = FUN_00464a40(fVar1,2);
  fVar6 = FUN_00464a40(fVar1,3);
  fVar7 = FUN_00464a40(fVar1,2);
  fVar8 = FUN_00464a40(fVar1,3);
  fVar9 = FUN_00464a40(fVar1,2);
  return (float10)(float)(((float10)(float)(fVar2 + fVar2) - fVar3 * (float10)3.0) + (float10)1.0) *
         (float10)*param_1 +
         (float10)(float)(fVar5 * (float10)3.0 + (float10)(float)(fVar4 * (float10)-2.0)) *
         (float10)param_1[1] +
         (float10)(float)(((float10)(float)fVar6 - (fVar7 + fVar7)) + (float10)fVar1) *
         (float10)param_1[2] + ((float10)(float)fVar8 - fVar9) * (float10)param_1[3];
}


