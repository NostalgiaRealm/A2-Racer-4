
/* ==== FUN_0043a4a0 @ 0043a4a0 ==== 
 * signature: undefined FUN_0043a4a0(void)
 * body: 0043a4a0-0043a4bb
 */

void FUN_0043a4a0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -4) + 0x48);
  if (piVar1 != (int *)0x0) {
    FUN_00402f9c(piVar1);
    *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x48) = 0;
  }
  return;
}


