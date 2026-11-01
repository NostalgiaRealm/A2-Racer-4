
/* ==== FUN_004545a0 @ 004545a0 ==== 
 * signature: undefined4 __cdecl FUN_004545a0(int param_1)
 * body: 004545a0-004545fe
 */

undefined4 __cdecl FUN_004545a0(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  pfVar1 = (float *)(iVar2 + 0xbc + DAT_00715e50);
  *pfVar1 = *(float *)(iVar2 + 0xbc + DAT_00715e50) * 0.95;
  pfVar1[1] = pfVar1[1] * 0.95;
  pfVar1[2] = pfVar1[2] * 0.95;
  *(float *)(iVar2 + 0xcc + DAT_00715e50) = *(float *)(iVar2 + 0xcc + DAT_00715e50) * 0.95;
  return 1;
}


