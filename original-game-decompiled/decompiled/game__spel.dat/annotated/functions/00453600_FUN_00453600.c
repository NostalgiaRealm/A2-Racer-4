
/* ==== FUN_00453600 @ 00453600 ==== 
 * signature: undefined4 __cdecl FUN_00453600(int param_1)
 * body: 00453600-0045365e
 */

undefined4 __cdecl FUN_00453600(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  pfVar1 = (float *)(iVar2 + 0xbc + DAT_00715e50);
  *pfVar1 = *(float *)(iVar2 + 0xbc + DAT_00715e50) * 0.9;
  pfVar1[1] = pfVar1[1] * 0.9;
  pfVar1[2] = pfVar1[2] * 0.9;
  *(float *)(iVar2 + 0xcc + DAT_00715e50) = *(float *)(iVar2 + 0xcc + DAT_00715e50) * 0.9;
  return 1;
}


