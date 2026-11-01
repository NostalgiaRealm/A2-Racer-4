
/* ==== FUN_0041c076 @ 0041c076 ==== 
 * signature: undefined FUN_0041c076(void)
 * body: 0041c076-0041c0b7
 */

void FUN_0041c076(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_0041ba80(*(int *)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + -0x28),
               *(undefined4 *)(unaff_EBP + -0x30),*(int **)(unaff_EBP + -0x38),
               *(undefined1 *)(unaff_EBP + -0x21),(undefined4 *)(unaff_EBP + -0x9c));
  iVar1 = (**(code **)(**(int **)(unaff_EBP + -4) + 0x24))();
  *(bool *)(*(int *)(unaff_EBP + -4) + 0x1a) = iVar1 != 0;
  (**(code **)(**(int **)(unaff_EBP + -4) + 0x10))
            (*(int **)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + -4));
  return;
}


