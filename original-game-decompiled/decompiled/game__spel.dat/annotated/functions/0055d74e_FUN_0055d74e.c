
/* ==== FUN_0055d74e @ 0055d74e ==== 
 * signature: undefined __stdcall FUN_0055d74e(void)
 * body: 0055d74e-0055d793
 */

void FUN_0055d74e(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  DAT_0074dd04 = *(undefined4 *)(unaff_EBP + -0x1c);
  DAT_0074dd08 = *(undefined4 *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == unaff_EBX && (*(int *)(unaff_EBP + -0x2c) != unaff_EBX)))) {
    __abnormal_termination();
    FUN_0055d982((int)unaff_EDI);
  }
  return;
}


