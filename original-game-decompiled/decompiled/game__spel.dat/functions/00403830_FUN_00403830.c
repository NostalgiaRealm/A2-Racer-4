
/* ==== FUN_00403830 @ 00403830 ==== 
 * signature: float10 __cdecl FUN_00403830(int param_1)
 * body: 00403830-00403892
 */

float10 __cdecl FUN_00403830(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_006fba58;
  if (param_1 == DAT_006fbaa4) {
LAB_0040387b:
    return (float10)*(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50);
  }
  iVar2 = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    do {
      if (*piVar1 == param_1) {
        iVar2 = (&DAT_005ce9e8)[iVar2 * 0xa5];
        goto LAB_0040387b;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x16;
    } while (iVar2 < DAT_005d2ab0);
  }
  return (float10)3.4028235e+38;
}


