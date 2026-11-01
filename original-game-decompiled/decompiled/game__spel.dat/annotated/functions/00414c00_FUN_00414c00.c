
/* ==== FUN_00414c00 @ 00414c00 ==== 
 * signature: undefined __cdecl FUN_00414c00(int param_1)
 * body: 00414c00-00414c75
 */

void __cdecl FUN_00414c00(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (&DAT_005d1ba8)[param_1 * 0xe] * 0xf0;
  pfVar1 = (float *)(iVar2 + 0xc4 + DAT_00715e50);
  fVar3 = FUN_004a6800(0x7128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)*pfVar1 * (float10)3.0);
  pfVar1 = (float *)(iVar2 + 0xcc + DAT_00715e50);
  fVar3 = FUN_004a6800(0x7128b0);
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)(iVar2 + 0xcc + DAT_00715e50) * (float10)3.0);
  return;
}


