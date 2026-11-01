
/* ==== FUN_0055d746 @ 0055d746 ==== 
 * signature: undefined __stdcall FUN_0055d746(void)
 * body: 0055d746-0055d74d
 */

void FUN_0055d746(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  DAT_0074dd04 = *(undefined4 *)(unaff_EBP + -0x1c);
  DAT_0074dd08 = *(undefined4 *)(unaff_EBP + -0x20);
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_0055d982((int)piVar1);
  }
  return;
}


