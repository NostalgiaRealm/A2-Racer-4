
/* ==== FUN_004301e4 @ 004301e4 ==== 
 * signature: undefined FUN_004301e4(void)
 * body: 004301e4-004301ff
 */

void FUN_004301e4(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -4) + 0x48);
  if (piVar1 != (int *)0x0) {
    FUN_00402d14(piVar1);
    *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x48) = 0;
  }
  return;
}


