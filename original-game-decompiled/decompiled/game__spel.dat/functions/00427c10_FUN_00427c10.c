
/* ==== FUN_00427c10 @ 00427c10 ==== 
 * signature: undefined __cdecl FUN_00427c10(int param_1, float param_2)
 * body: 00427c10-00427cd7
 */

void __cdecl FUN_00427c10(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar4 = param_1 * 0xf0;
  iVar1 = iVar4 + DAT_00715e50;
  fVar5 = FUN_004a6800(0x7128b0);
  fVar3 = *(float *)(iVar1 + 0xcc);
  if (0.0 <= *(float *)(iVar1 + 0xc4)) {
    fVar6 = FUN_004a6800(0x7128b0);
    fVar6 = fVar6 * (float10)param_2 * (float10)0.05;
  }
  else {
    fVar6 = FUN_004a6800(0x7128b0);
    fVar6 = fVar6 * (float10)param_2 * (float10)-0.05;
  }
  *(float *)(iVar4 + 0xcc + DAT_00715e50) =
       *(float *)(iVar4 + 0xcc + DAT_00715e50) - (float)(fVar5 * (float10)fVar3 * (float10)3.0);
  *(float *)(iVar4 + 0xcc + DAT_00715e50) =
       (float)((float10)*(float *)(iVar4 + 0xcc + DAT_00715e50) - fVar6);
  pfVar2 = (float *)(iVar4 + 0xbc + DAT_00715e50);
  fVar5 = FUN_004a6800(0x7128b0);
  *pfVar2 = (float)((float10)*pfVar2 -
                   fVar5 * (float10)*(float *)(iVar4 + 0xbc + DAT_00715e50) * (float10)4.0);
  return;
}


