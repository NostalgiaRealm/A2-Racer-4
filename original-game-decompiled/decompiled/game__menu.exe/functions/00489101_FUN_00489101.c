
/* ==== FUN_00489101 @ 00489101 ==== 
 * signature: undefined FUN_00489101(void)
 * body: 00489101-00489161
 */

void FUN_00489101(void)

{
  int *piVar1;
  undefined4 extraout_EDX;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  FUN_004865e4(*(int **)(unaff_EBP + -4));
  piVar1 = *(int **)(*(int *)(unaff_EBP + -4) + 0x2ec);
  (**(code **)(*piVar1 + 0x5c))
            (piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                             *(int *)(*(int *)PTR_DAT_004ab694 + 0xbc) == 0) ^ 1);
  (**(code **)(**(int **)(*(int *)(unaff_EBP + -4) + 0x2f4) + 0xb4))();
  *in_FS_OFFSET = in_stack_00000000;
  FUN_00403c5c((int *)(unaff_EBP + -0x114));
  FUN_00403c80((int *)(unaff_EBP + -0x10),2);
  return;
}


