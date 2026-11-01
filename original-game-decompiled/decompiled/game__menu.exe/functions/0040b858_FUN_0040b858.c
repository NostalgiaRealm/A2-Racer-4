
/* ==== FUN_0040b858 @ 0040b858 ==== 
 * signature: undefined FUN_0040b858(void)
 * body: 0040b858-0040b898
 */

void FUN_0040b858(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_004ac600;
  if ((param_1 != 1) && (piVar1 = DAT_004ac604, param_1 != 2)) {
    if (param_1 - 3U < 0x16) {
      piVar1 = FUN_0040b5d8(*(int **)(&DAT_004aa230 + param_1 * 8),'\x01',
                            *(undefined4 **)(&DAT_004aa234 + param_1 * 8));
    }
    else {
      piVar1 = (int *)FUN_0040b7d8();
    }
  }
  FUN_004036f4(piVar1);
  return;
}


