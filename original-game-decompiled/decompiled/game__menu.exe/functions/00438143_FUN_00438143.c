
/* ==== FUN_00438143 @ 00438143 ==== 
 * signature: undefined FUN_00438143(void)
 * body: 00438143-0043818c
 */

void FUN_00438143(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  (**(code **)(**(int **)(unaff_EBP + -4) + 8))
            (*(int **)(unaff_EBP + -4),*(int *)(unaff_EBP + -8) + 0x68,4);
  FUN_00437f98(*(int *)(*(int *)(unaff_EBP + -8) + 100),0,extraout_ECX,unaff_EBP);
  (**(code **)(**(int **)(unaff_EBP + -4) + 8))(*(int **)(unaff_EBP + -4),&DAT_004aa80c,4);
  *in_FS_OFFSET = in_stack_00000000;
  FUN_00403c5c((int *)(unaff_EBP + -0x14));
  return;
}


