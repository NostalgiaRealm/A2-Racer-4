
/* ==== FUN_00407f28 @ 00407f28 ==== 
 * signature: undefined FUN_00407f28(void)
 * body: 00407f28-00407f54
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00407f28(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EBX;
  undefined4 unaff_EDI;
  int in_stack_00000000;
  
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + (char)param_2;
  *(undefined4 *)(in_stack_00000000 + -4) = unaff_EDI;
  *(undefined4 *)(in_stack_00000000 + -8) = 0x407f3f;
  iVar1 = FUN_00407ea8(FUN_00407f60,param_1);
  *(undefined4 *)(in_stack_00000000 + -8) = param_2;
  *(undefined4 *)(in_stack_00000000 + -0xc) = 0x407f51;
  FUN_00403e40((int)param_1,iVar1 + 1,0x7fffffff,*(int **)(in_stack_00000000 + -8));
  return;
}


