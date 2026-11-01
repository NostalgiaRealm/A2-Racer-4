
/* ==== FUN_004130d2 @ 004130d2 ==== 
 * signature: undefined FUN_004130d2(void)
 * body: 004130d2-0041311c
 */

void FUN_004130d2(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  iVar3 = *(int *)(*(int *)(unaff_EBP + -4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_004102b0(*(undefined4 **)(unaff_EBP + -4),iVar4);
      uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_0040f548);
      if ((char)uVar2 != '\0') {
        *(ushort *)(piVar1 + 8) = *(ushort *)(piVar1 + 8) & 0xff7f;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = in_stack_00000000;
  FUN_00402f9c(*(int **)(unaff_EBP + -4));
  return;
}


