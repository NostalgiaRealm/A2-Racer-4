
/* ==== FUN_00427cd8 @ 00427cd8 ==== 
 * signature: undefined __cdecl FUN_00427cd8(int param_1, float param_2, float param_3)
 * body: 00427cd8-00427d85
 */

void __cdecl FUN_00427cd8(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = FUN_004a6800(0x7128b0);
  fVar4 = FUN_004a6800(0x7128b0);
  iVar2 = param_1 * 0xf0;
  *(float *)(iVar2 + 0xc4 + DAT_00715e50) =
       (float)(((float10)(float)(fVar3 * (float10)param_2 * (float10)0.1) -
               fVar4 * (float10)param_3 * (float10)0.1) +
              (float10)*(float *)(iVar2 + 0xc4 + DAT_00715e50));
  if ((param_2 == 0.0) && (param_3 == 0.0)) {
    pfVar1 = (float *)(iVar2 + 0xc4 + DAT_00715e50);
    fVar3 = FUN_004a6800(0x7128b0);
    *pfVar1 = (float)((float10)*pfVar1 -
                     fVar3 * (float10)*(float *)(iVar2 + 0xc4 + DAT_00715e50) * (float10)0.2);
  }
  return;
}


