
/* ==== FUN_00427ae0 @ 00427ae0 ==== 
 * signature: undefined __cdecl FUN_00427ae0(int param_1)
 * body: 00427ae0-00427b80
 */

void __cdecl FUN_00427ae0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = param_1 * 0xf0;
  fVar2 = *(float *)(iVar3 + 0xbc + DAT_00715e50);
  pfVar1 = (float *)(iVar3 + 0xbc + DAT_00715e50);
  fVar4 = FUN_004a6800(0x7128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar4 * (float10)(fVar2 * 10.0));
  fVar2 = *(float *)(iVar3 + 0xc4 + DAT_00715e50);
  pfVar1 = (float *)(iVar3 + 0xc4 + DAT_00715e50);
  fVar4 = FUN_004a6800(0x7128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar4 * (float10)(fVar2 * 10.0));
  fVar2 = *(float *)(iVar3 + 0xcc + DAT_00715e50);
  pfVar1 = (float *)(iVar3 + 0xcc + DAT_00715e50);
  fVar4 = FUN_004a6800(0x7128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar4 * (float10)(fVar2 * 10.0));
  return;
}


