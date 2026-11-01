
/* ==== FUN_00436aa3 @ 00436aa3 ==== 
 * signature: undefined FUN_00436aa3(void)
 * body: 00436aa3-00436af5
 */

undefined4 FUN_00436aa3(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  if ((*(byte *)(*(int *)(unaff_EBP + -0xc) + 0x20) & 0x10) == 0) {
    iVar1 = *(int *)(unaff_EBP + -4);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -4) + 0x14);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x2c);
    iVar1 = *(int *)(*(int *)(unaff_EBP + -4) + 0x14);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(unaff_EBP + -4);
    *(code **)(iVar1 + 0x28) = FUN_004386a4;
  }
  if (*(char *)(unaff_EBP + -5) != '\0') {
    FUN_004032f4(*(int **)(unaff_EBP + -4));
    *in_FS_OFFSET = in_stack_00000000;
  }
  return *(undefined4 *)(unaff_EBP + -4);
}


