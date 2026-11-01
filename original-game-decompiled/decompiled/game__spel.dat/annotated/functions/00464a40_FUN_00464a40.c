
/* ==== FUN_00464a40 @ 00464a40 ==== 
 * signature: float10 __cdecl FUN_00464a40(float param_1, int param_2)
 * body: 00464a40-00464a55
 */

float10 __cdecl FUN_00464a40(float param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_1;
  if (1 < param_2) {
    iVar1 = param_2 + -1;
    do {
      fVar2 = fVar2 * (float10)param_1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return fVar2;
}


